#!/bin/bash
#
# USAGE
# osx-app [-s] [-l /path/to/libraries]
#
# This script attempts to build an application bundle for macOS, resolving
# dynamic libraries, etc.
# It strips the executable and libraries if '-s' is given.
#
# AUTHORS
#		 Kees Cook <kees@outflux.net>
#		 Michael Wybrow <mjwybrow@users.sourceforge.net>
#		 Jean-Olivier Irisson <jo.irisson@gmail.com>
#
# Copyright (C) 2005 Kees Cook
# Copyright (C) 2005-2007 Michael Wybrow
# Copyright (C) 2007 Jean-Olivier Irisson
#
# Released under GNU GPL, read the file 'COPYING' for more information
#
# Thanks to GNUnet's "build_app" script for help with library dep resolution.
#		https://gnunet.org/svn/GNUnet/contrib/OSX/build_app
#
# NB:
# This originally came from Inkscape; Inkscape's configure script has an
# "--enable-osxapp", which causes some of Inkscape's installation data
# files to have macOS-ish paths under Contents/Resources of the bundle
# or under /Library/Application Support.  We don't have such an option;
# we just put them in "bin", "etc", "lib", and "share" directories
# under Contents/Resources, rather than in the "bin", "etc", "lib",
# and "share" directories under the installation directory.
#

# XXX We could probably replace a lot of this with https://github.com/auriamg/macdylibbundler

shopt -s extglob

# Defaults
strip=false
install_exclude_prefixes="/System/|/Library/|/usr/lib/|/usr/X11/|/opt/X11/|@executable_path"

# Bundle always has the same name. Version information is stored in
# the Info.plist file which is filled in by the configure script.
bundle="Wireshark.app"

# Location for libraries (tools/macos-setup.sh defaults to whatever the
# various support libraries use as their standard installation location,
# which is /usr/local)
if [ -z "$LIBPREFIX" ]; then
	LIBPREFIX="/usr/local"
fi


# Help message
#----------------------------------------------------------
help()
{
echo -e "
Create an app bundle for macOS

USAGE
	$0 [-s] [-l /path/to/libraries]

OPTIONS
	-h,--help
		Display this help message.
	-b,--bundle
		The application bundle name. Default is Wireshark.app.
	-s
		Strip the libraries and executables from debugging symbols.
	-l,--libraries
		Specify the path to the libraries the application depends
		on (typically /sw or /opt/local). By default it is
		/usr/local.

EXAMPLE
	$0 -b Stratoshark.app -s -l /opt/local
"
}


# Parse command line arguments
#----------------------------------------------------------
while [ "$1" != "" ]
do
	case $1 in
		-b|--bundle)
			bundle="$2"
			shift 1 ;;
		-s)
			strip=true ;;
		-l|--libraries)
			LIBPREFIX="$2"
			shift 1 ;;
		-h|--help)
			help
			exit 0 ;;
		*)
			echo "Invalid command line option: $1"
			exit 2 ;;
	esac
	shift 1
done

# Safety tests
if [ ! -e "$LIBPREFIX" ]; then
	echo "Cannot find the directory containing the libraries: $LIBPREFIX" >&2
	exit 1
fi

if [ ! -d "$bundle" ] ; then
	echo "$bundle not found" >&2
	exit 1
fi

qt_frameworks_dir=$( "/usr/bin/x86_64-linux-gnu-qmake6" -query QT_INSTALL_LIBS )
if [ ! -d "$qt_frameworks_dir" ] ; then
	echo "Can't find the Qt frameworks directory" >&2
	exit 1
fi

sparkle_version=""
sparkle_frameworks_dir=""

#
# Define the signing identities, or use self-signed ("-")
# if the identity is not provided.
if [ -n "$CODE_SIGN_IDENTITY" ] ; then
	codesign_dev_app_identity="Developer ID Application: $CODE_SIGN_IDENTITY"
	codesign_dev_install_identity="Developer ID Installer: $CODE_SIGN_IDENTITY"
else
	codesign_dev_app_identity="-"
	codesign_dev_install_identity="-"
fi

#
# Leave the Qt frameworks out of the special processing.
#
install_exclude_prefixes="$install_exclude_prefixes|$qt_frameworks_dir"

app_name=${bundle%%.app}
app_lower=$(echo "$app_name" | tr '[:upper:]' '[:lower:]')

# Package paths
pkgexec="$bundle/Contents/MacOS"
#pkgres="$bundle/Contents/Resources"
pkglib="$bundle/Contents/Frameworks"
pkgplugin="$bundle/Contents/PlugIns/$app_lower/4.5"

# Set the 'macosx' directory, usually the current directory.
#resdir=$( pwd )

#
# Get a list of all binaries in the bundle.
# Treat all plain files with read and execute permissions for all as
# binaries.
#
secondary_binary_list=()
while read -r binary ; do
	secondary_binary_list+=("$binary")
done < <( find "$pkgexec" \! -name "$app_name" -type f -perm -0555 -print | sort )
plugin_library_list=()
while read -r library ; do
	plugin_library_list+=("$library")
done < <( find "$pkgplugin" -name "*.so" -type f -perm -0555 -print | sort )
bundle_binary_list=("$pkgexec/$app_name" "${secondary_binary_list[@]}" "${plugin_library_list[@]}")

echo -e "\\nFixing up $bundle..."

# Start with a clean Frameworks slate.
if [ -d "$pkglib" ] ; then
	printf "Removing %s\n" "$pkglib"
	rm -v -r -f "$pkglib"
fi
mkdir -v -m u=rwx,go=rx "$pkglib"

echo -e "\\nPrepopulating our libraries"

# Copy only <library>.<SOVERSION>.dylib.
cp -v +([^.]).+([[:digit:]]).dylib "$pkglib"

# Fetch a unique list of LC_RPATHs from our executables, which will be used
# for our dependency search below.
bundle_binary_rpaths=("/usr/local/lib")
rpaths=()

# macdeployqt handles our Qt dependencies. We handle our Sparkle and
# internal dependencies.
skip_pats="Qt|Sparkle|build/run"

for binary in "${bundle_binary_list[@]}" "$pkglib"/*.dylib ; do
	while read -r rpath ; do
		bundle_binary_rpaths+=("$rpath")
	done < <( otool -l "$binary" | grep -A2 LC_RPATH | awk '$1=="path" && $2 !~ /^@/ {print $2}' | grep -E -v "$skip_pats" )
done

while read -r rpath ; do
	rpaths+=("$rpath")
done < <( printf '%s\n' "${bundle_binary_rpaths[@]}" | sort -u)

printf "\nSearching the following LC_RPATHs for dependencies:\n"
printf '%s\n' "${rpaths[@]}"

# Find out libs we need from Fink, MacPorts, or from a custom install
# (i.e. $LIBPREFIX), then loop until no changes.
a=1
nfiles=0
endl=true
while $endl; do
	echo -e "\\nLooking for dependencies. Round $a"
	#
	# To find dependencies, we:
	#
	#    run otool -L on all the binaries in the bundle, and on all
	#    the shared libraries in the $pkglib directory, to find all
	#    the libraries they depend on (we don't bother with the
	#    frameworks, as the only frameworks we ship are the Qt
	#    frameworks, which don't depend on any libraries that
	#    don't ship with the OS, and as it's hard to find the
	#    framework libraries under $pkglib without getting
	#    non-framework files);
	#
	#    filter out all lines that don't contain "compatibility" to
	#    remove lines of output that don't correspond to dependencies;
	#
	#    use cut to extract the library name from the output;

	#    replace "\tlibbrotli" with "\t/usr/local/lib/libbrotli" so that
	#    it isn't excluded from subsequent filtering.
	#    libbrotli 1.09 and earlier doesn't have a path prefix in its
	#    "install name" when built by tools/macos-setup.sh:
	#    https://github.com/google/brotli/pull/976;
	#
	#    replace "@loader_path/libbrotli" with "/usr/local/lib/libbrotli" so that
	#    it isn't excluded from subsequent filtering;
	#
	#    strip out system libraries, as we don't bundle them with
	#    Wireshark;
	#
	#    eliminate duplicates.
	#
	# We might want to let dyld do some of the work for us, e.g. by
	# parsing the output of
	#
	#    `DYLD_PRINT_LIBRARIES=1 $bundle_binary`
	#
	# instead, or just use CMake's fixup_bundle:
	# https://cmake.org/cmake/help/latest/module/BundleUtilities.html
	libs=()
	while read -r lib ; do
		libs+=("$lib")
	done < <(
		otool -L "${bundle_binary_list[@]}" "$pkglib"/*.dylib 2>/dev/null \
		| grep -F compatibility \
		| grep -v @rpath \
		| cut -d\( -f1 \
		| sed '1,$s;^	libbrotli;	/usr/local/lib/libbrotli;' \
		| sed '1,$s;^	@loader_path/libbrotli;	/usr/local/lib/libbrotli;' \
		| grep -E -v "$install_exclude_prefixes" \
		| sort \
		| uniq \
		)
	while read -r rpath_lib _ ; do
		suffix=${rpath_lib/@rpath\/}
		for rpath in "${rpaths[@]}" ; do
			if [ -f "$rpath/$suffix" ] ; then
				printf "Found @rpath/%s in %s\n" "$suffix" "$rpath"
				libs+=("$rpath/$suffix")
			fi
		done
	done < <( otool -L "${bundle_binary_list[@]}" "$pkglib"/*.dylib \
		| grep @rpath \
		| grep -E -v "$skip_pats" \
		| sort -u \
		)
	install -m 644 -C -v "${libs[@]}" "$pkglib"
	(( a++ ))
	# shellcheck disable=SC2012
	nnfiles=$( ls "$pkglib" | wc -l )
	if (( nnfiles == nfiles )); then
		endl=false
	else
		nfiles=$nnfiles
	fi
done

# Strip libraries and executables if requested
#----------------------------------------------------------
if [ "$strip" = "true" ]; then
	echo -e "\\nStripping debugging symbols...\\n"
	strip -x "$pkglib"/*.dylib
	strip -ur "${bundle_binary_list[@]}"
fi

"" "$bundle" -no-strip -verbose=2 || exit 1

#
# The build process added to the Wireshark/Stratoshark binary an rpath
# entry pointing to the directory containing the Qt frameworks; remove
# that entry from the binary in the package.
#
/usr/bin/install_name_tool -delete_rpath "$qt_frameworks_dir" "$pkgexec/$app_name"

if [ -d "$sparkle_frameworks_dir" ] ; then
	cp -R "$sparkle_frameworks_dir" "$pkglib" || exit 1
	# Remove these if we ever start sandboxing.
	rm -f "$pkglib/Sparkle.framework/XPCServices" || exit 1
	rm -rf "$pkglib/Sparkle.framework/Versions/B/XPCServices" || exit 1
fi

# NOTE: we must rpathify *all* files, *including* Qt libraries etc.,
#
rpathify_file () {
	local rpathify_exclude_prefixes="$install_exclude_prefixes|@rpath"

	# Fix a given executable, library, or plugin to be relocatable
	if [ ! -f "$1" ]; then
		return 0;
	fi

	#
	# OK, what type of file is this?
	#
	if ! filetype=$( otool -hv "$1" | grep -E MH_MAGIC | awk '{print $5}' ; exit "${PIPESTATUS[0]}" ) ; then
		echo "Unable to rpathify $1 in $( pwd ): file type failed."
		exit 1
	fi

	case "$filetype" in

	EXECUTE|DYLIB|BUNDLE)
		#
		# Executable, library, or plugin.  (Plugins
		# can be either DYLIB or BUNDLE; shared
		# libraries are DYLIB.)
		#
		# For DYLIB and BUNDLE, fix the shared
		# library identification.
		#
		if [[ "$filetype" = "DYLIB" || "$filetype" = "BUNDLE" ]]; then
			echo "Changing shared library identification of $1"
			base=$( echo "$1" | awk -F/ '{print $NF}' )
			#
			# The library will end up in a directory in
			# the rpath; this is what we should change its
			# ID to.
			#
			to=@rpath/$base
			/usr/bin/install_name_tool -id "$to" "$1"

			#
			# If we're a library and we depend on something in
			# @executable_path/../Frameworks, replace that with
			# @rpath.
			#
			while read -r dep_lib ; do
				base=$( echo "$dep_lib" | awk -F/ '{print $NF}' )
				to="@rpath/$base"
				echo "Changing reference to $dep_lib to $to in $1"
				/usr/bin/install_name_tool -change "$dep_lib" "$to" "$1"
			done < <( otool -L "$1" | grep @executable_path/../Frameworks | awk '{print $1}' )

			#
			# Try to work around brotli's lack of a full path
			# https://github.com/google/brotli/issues/934
			#
			while read -r base ; do
				to="@rpath/$base"
				echo "Changing reference to $base to $to in $1"
				/usr/bin/install_name_tool -change "$base" "$to" "$1"
			done < <( otool -L "$1" | grep '^	libbrotli' | awk '{print $1}' )
		fi

		#
		# Find our local rpaths and remove them.
		#
		otool -l "$1" | grep -A2 LC_RPATH \
			| awk '$1=="path" && $2 !~ /^@/ {print $2}' \
			| grep -E -v "$rpathify_exclude_prefixes" | \
		while read -r lc_rpath ; do
			echo "Stripping LC_RPATH $lc_rpath from $1"
			install_name_tool -delete_rpath "$lc_rpath" "$1"
		done

		#
		# Add -Wl,-rpath,@executable_path/../Frameworks
		# to the rpath, so it'll find the bundled
		# frameworks and libraries if they're referred
		# to by @rpath/, rather than having a wrapper
		# script tweak DYLD_LIBRARY_PATH.
		#
		if [[ "$filetype" = "EXECUTE" ]]; then
			if [ -d ../Frameworks ] ; then
				framework_path=../Frameworks
			elif [ -d ../../Frameworks ] ; then
				framework_path=../../Frameworks
			else
				echo "Unable to find relative path to Frameworks for $1 from $( pwd )"
				exit 1
			fi

			echo "Adding @executable_path/$framework_path to rpath of $1"
			/usr/bin/install_name_tool -add_rpath @executable_path/$framework_path "$1"
		fi

		#
		# Show the minimum supported version of macOS
		# for each executable or library
		#
		if [[ "$filetype" = "EXECUTE" || "$filetype" = "DYLIB" ]] ; then
			echo "Minimum macOS version for $1:"
			otool -l "$1" | grep -A3 LC_VERSION_MIN_MACOSX
		fi

		#
		# Get the list of dynamic libraries on which this
		# file depends, and select only the libraries that
		# are in $LIBPREFIX, as those are the only ones
		# that we'll be shipping in the app bundle; the
		# other libraries are system-supplied or supplied
		# as part of X11, will be expected to be on the
		# system on which the bundle will be installed,
		# and should be referred to by their full pathnames.
		#
		local libs=()
		while read -r lib ; do
			libs+=("$lib")
		done < <( otool -L "$1" \
			| grep -F compatibility \
			| cut -d\( -f1 \
			| grep -E -v "$rpathify_exclude_prefixes" \
			| sort \
			| uniq \
			)

		for lib in "${libs[@]}"; do
			#
			# Get the file name of the library.
			#
			base=$( echo "$lib" | awk -F/ '{print $NF}' )
			#
			# The library will end up in a directory in
			# the rpath; this is what we should change its
			# file name to.
			#
			to=@rpath/$base
			#
			# Change the reference to that library.
			#
			echo "Changing reference to $lib to $to in $1"
			/usr/bin/install_name_tool -change "$lib" "$to" "$1"
		done
		;;
	esac
}

rpathify_dir () {
	#
	# Make sure we *have* that directory
	#
	if [ -d "$1" ]; then
		(cd "$1" || exit 1
		echo "rpathifying $1"
		#
		# Make sure we *have* files to fix
		#
		# shellcheck disable=SC2086
		files=$( ls $2 2>/dev/null )
		if [ -n "$files" ]; then
			for file in $files; do
				rpathify_file "$file" "$( pwd )"
			done
		else
			echo "no files found in $1"
		fi
		)
		rf_ret=$?
		if [ $rf_ret -ne 0 ] ; then exit $rf_ret ; fi
	fi
}

rpathify_files () {
	#
	# Fix bundle deps
	#
	rpathify_dir "$pkglib" "*.dylib"
	rpathify_dir "$pkgexec" "*"
	for plugindir in "$pkgplugin"/*
	do
		rpathify_dir "$plugindir" "*"
	done

	rpathify_dir "$pkgexec/extcap" "*"
}

if [ ${#LIBPREFIX} -ge "6" ]; then
	# If the LIBPREFIX path is long enough to allow
	# path rewriting, then do this.
	# 6 is the length of @rpath, which replaces LIBPREFIX.
	rpathify_files
else
	echo "Could not rewrite dylib paths for bundled libraries.  This requires" >&2
	echo "the support libraries to be installed in a PREFIX of at least 6 characters in length." >&2
	echo "" >&2
	exit 1

fi

# QtNetwork might be linked with brotli.
rpathify_file "$pkglib/QtNetwork.framework/Versions/Current/QtNetwork"

bundle_dsym="${bundle%%.app}.dSYM"

frameworks=()
for framework in "$pkglib"/*.framework/Versions/*/* ; do
	if [ -f "$framework" ];then
		frameworks+=("$framework")
	fi
done

echo "Dsymifying binaries to $bundle_dsym:"
# shellcheck disable=SC2086
dsymutil --minimize --out "$bundle_dsym" \
	"${bundle_binary_list[@]}" \
	"${frameworks[@]}" \
	"$pkglib"/*.dylib

# echo "Stripping binaries:"
# # shellcheck disable=SC2086
# strip -S \
# 	"${bundle_binary_list[@]}" \
# 	"${frameworks[@]}" \
# 	"$pkglib"/*.dylib \
# 	"$pkgplugin"/*/*.so

# XXX What's the proper directory layout here?
# dsymify_file () {
# 	# out_dsym="${1/#$bundle/$bundle_dsym}.dSYM"
# 	echo "    $1"
# 	dsymutil --minimize --out "$bundle_dsym" "$1"
# 	strip "$1"
# }

# echo "Dsymifying and stripping executables:"
# if [ -z "${bundle_binary_list[@]}" ] ; then
# 	echo "No executables specified for dsymifying."
# 	exit 1
# fi
# for binary in "${bundle_binary_list[@]}" ; do
# 	if [ -e "$binary" ];then
# 		dsymify_file "$binary"
# 	fi
# done

# echo "Dsymifying and stripping frameworks:"
# for framework in "$pkglib"/*.framework/Versions/*/* ; do
# 	if [ -f "$framework" ];then
# 		dsymify_file "$framework"
# 	fi
# done

# echo "Dsymifying and stripping libraries:"
# for library in "$pkglib"/*.dylib ; do
# 	#
# 	# Squelch warnings, in case the .o files from building
# 	# support libraries aren't around any more.
# 	#
# 	dsymify_file "$library" | grep -E -v 'unable to open object file'
# done

# echo "Dsymifying and stripping plugins:"
# for plugin in "$pkgplugin"/*/*.so ; do
# 	dsymify_file "$plugin"
# done

codesign_file () {
	# https://developer.apple.com/forums/thread/128166
	# https://developer.apple.com/library/archive/documentation/Security/Conceptual/CodeSigningGuide/Procedures/Procedures.html
	# https://developer.apple.com/library/archive/technotes/tn2206/_index.html
	# https://developer.apple.com/documentation/security/notarizing_your_app_before_distribution/resolving_common_notarization_issues?language=objc
	#
	# XXX Do we need to add the com.apple.security.cs.allow-unsigned-executable-memory
	# entitlement for Lua?
	# https://developer.apple.com/documentation/security/hardened_runtime_entitlements?language=objc

	codesign \
		--sign "$codesign_dev_app_identity" \
		--prefix "org.wireshark." \
		--force \
		--options runtime \
		--entitlements "/root/wireshark/packaging/macosx/entitlements.plist" \
		--timestamp \
		--verbose \
		"$1" || exit 1
}

# XXX We could do this via the productbuild calls in the {,un}install_*_pkg
# targets in CMakeLists.txt instead.
productsign_pkg () {
	mv "$1" "$1.unsigned" || exit 1
	productsign \
		--sign "$codesign_dev_install_identity" \
		--timestamp \
		"$1.unsigned" "$1" || exit 1
	rm -f "$1.unsigned" || exit 1
}

if [ -n "$CODE_SIGN_IDENTITY" ] ; then
	security find-identity -v -s "$CODE_SIGN_IDENTITY" -p codesigning

	# The Code Signing Guide says:
	#
	# "While you use the --deep option for verification to mimic what Gatekeeper does,
	# it is not recommended for signing. During signing, if you have nested code, and
	# if you are signing manually, you sign nested code in stages (as Xcode does
	# automatically), starting with the most deeply embedded components first. You
	# then sign code at the next level of hierarchy, and so on. You work your way
	# outward, finally signing the top level entity that contains all the others.
	# Signing all the components in one shot with --deep is for emergency repairs and
	# temporary adjustments only. Note that signing with the combination --deep
	# --force will forcibly re-sign all code in a bundle."

	# We need to force-sign Sparkle and its Updater.app.
	# https://sparkle-project.org/documentation/#4-distributing-your-app
	# https://sparkle-project.org/documentation/sandboxing/#code-signing

	if [ "$sparkle_version" == "2" ] ; then
		echo "Signing Sparkle's assets"
		codesign \
			--sign "$codesign_dev_app_identity" \
			--force \
			--options runtime \
			--verbose \
			"$pkglib/Sparkle.framework/Versions/B/AutoUpdate" \
			"$pkglib/Sparkle.framework/Versions/B/Updater.app" \
			"$pkglib/Sparkle.framework" \
			|| exit 1
		# Uncomment if we ever start sandboxing.
		# 	"$pkglib/Sparkle.framework/Versions/B/XPCServices/org.sparkle-project.InstallerLauncher.xpc"
		# codesign \
		# 	--sign "$codesign_dev_app_identity" \
		# 	--force \
		# 	--options runtime \
		# 	--entitlements "$sparkle_frameworks_dir/../Entitlements/org.sparkle-project.Downloader.entitlements" \
		# 	--verbose \
		# 	"$pkglib/Sparkle.framework/Versions/B/XPCServices/org.sparkle-project.Downloader.xpc" \
		# 	|| exit 1
	else
		echo "Signing Sparkle's AutoUpdate.app"
		codesign \
			--sign "$codesign_dev_app_identity" \
			--force \
			--timestamp \
			--options runtime \
			--verbose \
			"$pkglib/Sparkle.framework/Versions/A/Resources/AutoUpdate.app" \
			|| exit 1
	fi

	echo "Signing frameworks"
	for framework in "$pkglib"/*.framework/Versions/* ; do
		if [ -L "$framework" ] ; then
			# Skip "Current"
			continue
		fi
		codesign_file "$framework"
	done

	echo "Signing libraries"
	for library in "$pkglib"/*.dylib ; do
		codesign_file "$library"
	done

	plugin_list=$( find "$bundle/Contents/PlugIns" -type f -name "*.dylib" -o -name "*.so" )
	echo "Signing plugins"
	for plugin in $plugin_list ; do
		codesign_file "$plugin"
	done

	echo "Signing extra packages"
	find "$bundle/Contents/Resources/Extras" -type f -name "*.pkg" | \
	while read -r extra_pkg ; do
		productsign_pkg "$extra_pkg"
	done

	echo "Signing secondary executables"
	if (( ! ${#secondary_binary_list[@]} )) ; then
		echo "No executables specified for code signing."
		exit 1
	fi
	for binary in "${secondary_binary_list[@]}" ; do
		if [ -e "$binary" ];then
			codesign_file "$binary"
		fi
	done

	echo "Signing primary executable"
	codesign_file "$pkgexec/$app_name"

	echo "Signing $bundle"
	codesign_file "$bundle"

	# Code Signing Guide, "Testing Conformance with Command Line Tools"
	codesign --verify --deep --strict --verbose=2 "$bundle" || exit 1
	spctl --assess --type exec --verbose=2 "$bundle" || exit 1
else
	echo "Code signing not performed (no identity)"
fi

# File permission sanity check.
if badperms=$( find "$bundle" ! -perm -0444 -exec ls -l "{}" + | grep . ) ; then
	echo "Found files with restrictive permissions:"
	echo "$badperms"
	exit 1
fi

exit 0
