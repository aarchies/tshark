# Note that this is NOT a relocatable package
# XXX is this still true? https://fedoraproject.org/wiki/Packaging:Cmake
# says that recent CMake versions take care of rpathification.

# To do:
# - Support clang with non Fedora distributions

%bcond_with	toolchain_clang
%bcond_with	ninja
%bcond_with	ccache
# In rpm 4.17.1 it's possible to define these so that
# the one is set, the default is the inverse of the other
%if 0%{?fedora} || 0%{?rhel} >= 9
%bcond_with	qt5
%bcond_without	qt6
%else
%bcond_without	qt5
%bcond_with	qt6
%endif
%bcond_with	lua
%bcond_with	mmdbresolve
%bcond_with	lz4_and_snappy
%bcond_with	spandsp
%bcond_with	bcg729
%bcond_with	libxml2
%bcond_with	nghttp2
%bcond_with	nghttp3
%bcond_with	sdjournal
%bcond_with	guides
%bcond_with	brotli
%bcond_with	zstd
%bcond_with	ilbc
%bcond_with	opus

# Fedora options to use clang as the compiler
# https://docs.fedoraproject.org/en-US/packaging-guidelines/#compiler
%if 0%{?fedora}
%if %{with toolchain_clang}
%global toolchain clang
%else
%global toolchain gcc
%endif
%endif

# Set at most one of these two:
# Note that setcap requires rpmbuild 4.7.0 or later.
%global setuid_dumpcap 0
%global setcap_dumpcap 1

# Set to 1 if you want a group called 'wireshark' which users must be a member
# of in order to run dumpcap.  Only used if setuid_dumpcap or setcap_dumpcap
# are set.
%global use_wireshark_group 1

# RPM 4.11.2 and higher errors out on double dash in versions by default.
# Some, but not all, distros make this a warning instead; ensure that it is.
# We override the dashes with underscores for the main wireshark RPM version,
# but rpmbuild will fail based on its generated dependency from the pkg-config
# file (wireshark.pc), which has our original version with dashes.
%global _wrong_version_format_terminate_build 0

%global package_version 4.5.0


Summary:	The world's foremost protocol analyzer
Name:		wireshark
Version:	4.5.0
Release:	1%{?dist}
License:	GPLv2+
Group:		Applications/Internet
Source:		https://www.wireshark.org/download/src/%{name}-%{package_version}.tar.zst
# Or this URL for automated builds:
#Source:	https://www.wireshark.org/download/automated/src/%%{name}-%%{package_version}.tar.zst
URL:		https://www.wireshark.org/
Packager:	Gerald Combs <gerald[AT]wireshark.org>

# 4.13 introduces Boolean dependencies
BuildRequires:	rpm-build >= 4.13.0

BuildRequires:	cmake >= 3.13
BuildRequires:	python3
%if %{with toolchain_clang}
BuildRequires:	clang
%else
# The default GCC version in Leap 15 is too old
%if 0%{?suse_version} == 1500
BuildRequires:	gcc13
BuildRequires:	gcc13-PIE
BuildRequires:	gcc13-c++
%else
BuildRequires:	gcc
BuildRequires:	gcc-c++
%endif
%endif
BuildRequires:	flex
%if %{with ninja}
BuildRequires:	(ninja or ninja-build)
%endif
# We always require Asciidoctor for packaging builds as of 84ab55cf75,
# unfortunately it's not evenly distributed across distros.
# Fedora & CentOS: rubygem-asciidoctor
# CentOS 8: <added in - https://bugzilla.redhat.com/show_bug.cgi?id=1820896>
# openSUSE 15.3: ruby2.5-rubygem-asciidoctor
# All of the packages provide this, so we can rely on it:
BuildRequires:	/usr/bin/asciidoctor

# For the HTML guides, we need xsltproc, and the docbook stylesheets
%if %{with guides}
BuildRequires:	/usr/bin/xsltproc
BuildRequires:	(docbook-style-xsl or docbook-xsl-stylesheets)
%endif

BuildRequires:	glib2-devel >= 2.54.0
BuildRequires:	libpcap-devel
BuildRequires:	zlib-devel
BuildRequires:	libgcrypt-devel
BuildRequires:	pcre2-devel

%if %{with lz4_and_snappy}
BuildRequires:	(lz4-devel or liblz4-devel)
BuildRequires:	snappy-devel
%endif

BuildRequires:	(c-ares-devel or libcares-devel)
# On SUSE speex-devel requires speexdsp-devel, but that
# is not the case on RH/Fedora. I believe we only need
# SpeexDSP
BuildRequires:	speexdsp-devel

%if %{with lua}
BuildRequires:	(lua-devel or lua53-devel or compat-lua-devel or lua52-devel or lua51-devel)
%endif

%if %{with nghttp2}
BuildRequires:	libnghttp2-devel
%endif

%if %{with nghttp3}
BuildRequires:	libnghttp3-devel
%endif

%if %{with sdjournal}
BuildRequires:	systemd-devel
%endif

%if %{with brotli}
BuildRequires:	(brotli-devel or libbrotli-devel)
%endif

%if %{with zstd}
BuildRequires:	libzstd-devel
%endif

# Uncomment these if you want to be sure you get them...
#BuildRequires:	krb5-devel
#BuildRequires:	libsmi-devel
#BuildRequires:	pcre-devel
#BuildRequires:	libselinux
#BuildRequires:	gnutls-devel
#BuildRequires:	libcap-devel

%if %{with mmdbresolve}
BuildRequires:	libmaxminddb-devel
%endif

%if %{use_wireshark_group}
%if 0%{?suse_version}
# SUSE's groupadd is in this package:
Requires(pre):	pwdutils
%else
# ... while Red Hat's is in this one:
Requires(pre):	shadow-utils
%endif
%endif

# NOTE: the below description has been copied to org.wireshark.Wireshark.metainfo.xml (in the
# top-level directory).
%description
Wireshark allows you to examine protocol data stored in files or as it is
captured from wired or wireless (WiFi or Bluetooth) networks, USB devices,
and many other sources.  It supports dozens of protocol capture file formats
and understands more than a thousand protocols.

It has many powerful features including a rich display filter language
and the ability to reassemble multiple protocol packets in order to, for
example, view a complete TCP stream, save the contents of a file which was
transferred over HTTP or CIFS, or play back an RTP audio stream.

This package contains command-line utilities, plugins, and documentation for
Wireshark. A Qt graphical user interface is packaged separately.

%if %{with qt5} || %{with qt6}
%package	qt
Summary:	Wireshark's Qt-based GUI
Group:		Applications/Internet
Obsoletes:	wireshark-gnome < %{version} wireshark-gtk < %{version}
Requires:	%{name} = %{version}-%{release}
%if %{with qt5}
%if 0%{?suse_version}
BuildRequires:	libQt5Core-devel
BuildRequires:	libQt5Gui-devel
BuildRequires:	libQt5Widgets-devel
BuildRequires:	libQt5PrintSupport-devel
BuildRequires:	libQt5Concurrent-devel
BuildRequires:	libqt5-qtmultimedia-devel
BuildRequires:	libqt5-linguist-devel
Requires:	libQt5Svg5
# Need this for SUSE's suse_update_desktop_file macro
BuildRequires:	update-desktop-files
%else
BuildRequires:	qt5-qtbase-devel
BuildRequires:	qt5-qtmultimedia-devel
BuildRequires:	qt5-linguist
Requires:	qt5-qtsvg
%endif
%endif
%if %{with qt6}
%if 0%{?suse_version}
BuildRequires:	qt6-base-devel
BuildRequires:	qt6-multimedia-devel
BuildRequires:	qt6-tools-devel
BuildRequires:	qt6-linguist-devel
%else
BuildRequires:	qt6-qtbase-devel
BuildRequires:	qt6-qtmultimedia-devel
BuildRequires:	qt6-qttools-devel
%endif
BuildRequires:	qt6-qt5compat-devel
BuildRequires:	libxkbcommon-devel
%endif
Requires:	xdg-utils
Requires:	hicolor-icon-theme
BuildRequires:	desktop-file-utils
Requires(post):	desktop-file-utils
# Add this for more readable fonts on some distributions/versions
#Requires:	dejavu-sans-mono-fonts

%description qt
This package contains the Qt Wireshark GUI and desktop integration files.
%endif

%package	devel
Summary:	Development headers for Wireshark
Group:		Applications/Internet
Requires:	%{name} = %{version}-%{release}

%description devel
The wireshark-devel package contains the header and other files required for
development of Wireshark scripts and plugins.


%prep
%setup -q -n %{name}-%{package_version}

%build
# The SUSE macros for cmake and ninja depend upon _bindir, which depends
# on _prefix (and is thus wrong if _prefix is anything other than /usr).
# That's wrong - just because we're installing our package's binaries
# into another _bindir doesn't mean we want to run cmake or ninja out
# of there instead of the system cmake or ninja.
%if 0%{?suse_version}
%define __cmake /usr/bin/cmake
%if %{with ninja}
%define __builder /usr/bin/ninja
%endif
%endif

%if 0%{?rhel}
%define __ninja /usr/bin/ninja-build
%endif

# How do we reliably run CMake for all of CentOS, Fedora, RHEL, and openSUSE?
# https://docs.fedoraproject.org/en-US/packaging-guidelines/CMake/
# https://fedoraproject.org/wiki/Changes/CMake_to_do_out-of-source_builds
# https://en.opensuse.org/openSUSE:Build_system_recipes#cmake
# Fedora's new RPATH hardening means we need to enable $ORIGIN if the
# prefix is anything other than /usr:
# https://fedoraproject.org/wiki/Changes/Broken_RPATH_will_fail_rpmbuild
%cmake \
%if 0%{?fedora} && ( "%{_prefix}" != "/usr" )
  -DENABLE_RPATH_ORIGIN=ON \
%endif
%if %{with ccache}
  -DENABLE_CCACHE=ON \
%endif
%if %{with qt5} || %{with qt6}
  -DBUILD_wireshark=ON \
%if %{with qt5}
  -DUSE_qt6=OFF \
%endif
%else
  -DBUILD_wireshark=OFF \
%endif
%if %{with lua}
  -DENABLE_LUA=ON \
%else
  -DENABLE_LUA=OFF \
%endif
%if %{with mmdbresolve}
  -DBUILD_mmdbresolve=ON \
%else
  -DBUILD_mmdbresolve=OFF \
%endif
%if %{with lz4_and_snappy}
  -DENABLE_LZ4=ON \
  -DENABLE_SNAPPY=ON \
%else
  -DENABLE_LZ4=OFF \
  -DENABLE_SNAPPY=OFF \
%endif
%if %{with spandsp}
  -DENABLE_SPANDSP=ON \
%else
  -DENABLE_SPANDSP=OFF \
%endif
%if %{with bcg729}
  -DENABLE_BCG729=ON \
%else
  -DENABLE_BCG729=OFF \
%endif
%if %{with libxml2}
  -DENABLE_LIBXML2=ON \
%else
  -DENABLE_LIBXML2=OFF \
%endif
%if %{with nghttp2}
  -DENABLE_NGHTTP2=ON \
%else
  -DENABLE_NGHTTP2=OFF \
%endif
%if %{with nghttp3}
  -DENABLE_NGHTTP3=ON \
%else
  -DENABLE_NGHTTP3=OFF \
%endif
%if %{with sdjournal}
  -DBUILD_sdjournal=ON \
%else
  -DBUILD_sdjournal=OFF \
%endif
%if %{with brotli}
  -DENABLE_BROTLI=ON \
%else
  -DENABLE_BROTLI=OFF \
%endif
  -DENABLE_WERROR=OFF \
%if %{with ninja}
  -G Ninja \
%endif
%if %{with ilbc}
  -DENABLE_ILBC=ON \
%else
  -DENABLE_ILBC=OFF \
%endif
%if %{with opus}
  -DENABLE_OPUS=ON \
%else
  -DENABLE_OPUS=OFF \
%endif

# Fedora and SUSE 15 do out of source builds by default, but they store
# the build directory in different macros. Older distributions don't define
# that macro at all. Let's make it so that one macro contains the build
# directory (which will be "." for any distribution that doesn't define
# either macro, and thus presumably does in-source builds.)
%{?!__cmake_builddir: %global __cmake_builddir %{?__builddir}%{!?__builddir:.}}

%cmake_build
%if %{with guides}
%if 0%{?suse_version}
%cmake_build all_guides
%else
%cmake_build --target all_guides
%endif
%endif

%install

%if 0%{?suse_version}
%define cmake_install DESTDIR=%{buildroot} %__cmake --install %{__cmake_builddir}
%endif

%cmake_install
%cmake_install --component Development
%if %{with guides}
%cmake_install --component UserGuide
%cmake_install --component DeveloperGuide
%cmake_install --component ReleaseNotes
%endif

# If we're being installed in an unusual prefix tell the loader where
# to find our libraries.
%if "%{_prefix}" != "/usr"
	%define install_ld_so_conf 1
	mkdir -p $RPM_BUILD_ROOT/etc/ld.so.conf.d
	echo %{_libdir} > $RPM_BUILD_ROOT/etc/ld.so.conf.d/wireshark.conf
%endif

%if %{with qt5} || %{with qt6}
%if 0%{?suse_version}
# SUSE's packaging conventions
# (https://en.opensuse.org/openSUSE:Packaging_Conventions_RPM_Macros#.25suse_update_desktop_file)
# require this:
%if "%{_prefix}" != "/usr"
install -Dm 0644 %{buildroot}%{_prefix}/share/applications/org.wireshark.Wireshark.desktop %{buildroot}/usr/share/applications/org.wireshark.Wireshark.desktop
%endif
%suse_update_desktop_file org.wireshark.Wireshark
%else
# Fedora's packaging guidelines (https://fedoraproject.org/wiki/Packaging:Guidelines)
# require this (at least if desktop-file-install was not used to install it).
desktop-file-validate %{buildroot}%{_datadir}/applications/org.wireshark.Wireshark.desktop
%endif
%endif

%if %{use_wireshark_group}
%pre
getent group wireshark >/dev/null || groupadd -r wireshark
%endif

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%if %{with qt5} || %{with qt6}
%post qt
update-desktop-database %{_datadir}/applications &> /dev/null || :
update-mime-database %{_datadir}/mime &> /dev/null || :
touch --no-create %{_datadir}/icons/hicolor &>/dev/null || :

%postun qt
update-desktop-database %{_datadir}/applications &> /dev/null ||:
update-mime-database %{_datadir}/mime &> /dev/null || :
%endif

%files

%defattr(-,root,root)
%doc AUTHORS COPYING README.md
%if %{with guides}
%exclude %{_docdir}/wireshark/wsdg_html_chunked
%endif
%{_docdir}/wireshark
%docdir %{_docdir}/wireshark

# Don't pick up any of the wireshark (GUI) binaries or devtools here
%exclude %{_bindir}/wireshark*
%exclude %{_bindir}/dftest
%exclude %{_bindir}/idl2wrs
%{_bindir}/*

# This generates a warning because dumpcap is listed twice. That's
# probably preferable to listing each program (and keeping the list up to
# date)...
%if %{use_wireshark_group} && %{setuid_dumpcap}
# Setuid but only executable by members of the 'wireshark' group
%attr(4750, root, wireshark) %{_bindir}/dumpcap
%else
%if %{use_wireshark_group} && %{setcap_dumpcap}
# Setcap but only executable by members of the 'wireshark' group
%attr(0750, root, wireshark) %caps(cap_net_raw,cap_net_admin=ep) %{_bindir}/dumpcap
%else
%if %{setuid_dumpcap}
# Setuid and executable by all
%attr(4755, root, root) %{_bindir}/dumpcap
%else
%if %{setcap_dumpcap}
# Setcap and executable by all
%attr(0755, root, root) %caps(cap_net_raw,cap_net_admin=ep) %{_bindir}/dumpcap
%else
# Executable by all but with no special permissions
%attr(0755, root, root) %{_bindir}/dumpcap
%endif
%endif
%endif
%endif

%{_libdir}/lib*.so.*
%{_libdir}/wireshark
# Don't pick up the wireshark (GUI) man page here
%exclude %{_mandir}/man1/wireshark.*
%{_mandir}/man1/*
%{_mandir}/man4/*

%config(noreplace) %{_datadir}/wireshark/diameter/Custom.xml
%{_datadir}/wireshark

%if 0%{?install_ld_so_conf}
/etc/ld.so.conf.d/wireshark.conf
%endif

%if %{with qt5} || %{with qt6}
%files qt
%defattr(-,root,root)
%{_datadir}/applications/org.wireshark.Wireshark.desktop
%if 0%{?suse_version}
%if "%{_prefix}" != "/usr"
/usr/share/applications/org.wireshark.Wireshark.desktop
%endif
%endif
%{_datadir}/metainfo/org.wireshark.Wireshark.metainfo.xml
%{_datadir}/icons/hicolor/*/apps/*
%{_datadir}/icons/hicolor/*/mimetypes/*
%{_datadir}/mime/packages/org.wireshark.Wireshark.xml
%{_bindir}/wireshark
%{_mandir}/man1/wireshark.*
%endif

%files devel
%{_bindir}/dftest
%{_bindir}/idl2wrs
%{_includedir}/wireshark
%{_libdir}/lib*.so
%{_libdir}/cmake/wireshark
%{_libdir}/pkgconfig/wireshark.pc
%if %{with guides}
%{_docdir}/wireshark/wsdg_html_chunked
%docdir %{_docdir}/wireshark/wsdg_html_chunked
%endif

%changelog
* Wed Jun 14 2023 Joao Valverde
- Update CMake devel files path

* Wed Aug 24 2022 Joao Valverde
- Add Qt6 support with Fedora build dependencies

* Mon Apr 25 2022 John Thacker
- Cleanup specfile to remove obsolete and deprecated syntax

* Wed Jan  5 2022 John Thacker
- pcre2 is required now (most distros will get this as part of a dependency
  chain glib2-devel->libselinux-devel->pcre2-devel anyway)
- Remove Requires that automatic dependency handling picks up

* Mon Mar 29 2021 Joao Valverde
- Update HTML documentation location

* Thu Nov 26 2020 Gerald Combs
- Bison is no longer required

* Tue Sep 29 2020 Lin Sun
- Added opus codec as an option

* Sun Jan 19 2020 Jiri Novak
- Added ilbc codec as an option

* Fri Nov 22 2019 Gerald Combs
- c-ares is a required package

* Thu Aug 15 2019 Gerald Combs
- Add zstd

* Mon Apr 22 2019 Daniel Bakai
- Added brotli (as an option, defaulting to not required).

* Fri Sep 28 2018 Gerald Combs
- Add sdjournal

* Thu Sep 27 2018 Jeff Morriss
- Have the qt package obsolute the old gnome and gtk packages.  This allows
  clean upgrades to the Qt version.
- Set install prefix based on original cmake call's prefix.
- Update capitalization of SUSE.

* Wed Sep 26 2018 Jeff Morriss
- Put development-related files in a new -devel RPM.

* Mon Sep 24 2018 Jeff Morriss
- Allow using ccache to (greatly) speed up rebuilds.

* Mon Sep 24 2018 Jeff Morriss
- Make the (optional) maxminddb dependencies actually work.

* Wed Apr 11 2018 Gerald Combs
- Make documentation installation conditional.

* Tue Mar 20 2018 Gerald Combs
- Migrate from Autotools to CMake.
- Remove Qt4, GTK+ 2, and GTK+ 3 sections.
- Require flex, bison, and libgcrypt.
- Optionally build with Ninja.

* Sat Dec  2 2017 Jeff Morriss
- Include the User Guide (now installed by default by autotools).

* Wed Jul 26 2017 Pascal Quantin
- Added bcg729 (as an option, defaulting to not required).

* Tue Apr  4 2017 Ahmad Fatoum
- Added libxml2 (as an option, defaulting to required).

* Tue Dec 20 2016 Anders Broman
- Add with extcap (as an option, defaulting to yes).

* Mon Dec  5 2016 Jeff Morriss
- Add spandsp (as an option, defaulting to not required).

* Tue Oct 18 2016 Benoit Canet
- Add LZ4 and snappy compression support.

* Mon Aug 29 2016 Jeff Morriss
- Add libnghttp2 (as an option, defaulting to required).

* Wed Aug 17 2016 Jeff Morriss
- wireshark.pc is now installed with Wireshark, include it in the RPM.

* Mon May  9 2016 Jeff Morriss
- Make autoconf, automake, flex, and bison optional: most users (who aren't
  patching Wireshark) don't need them to build an RPM.

* Tue Nov 10 2015 Jeff Morriss
- Rename the gnome package to gtk: Wireshark uses Gtk+ but isn't part of GNOME.

* Mon Sep 14 2015 Jeff Morriss
- Follow ./configure's decision on whether to configure Lua or not rather than
  forcing it to be enabled (and thus failing on some distros which don't ship
  a compatible version of Lua any more).

* Sat Sep 12 2015 Jeffrey Smith
- Begin support for Qt5

* Thu Jan 22 2015 Jeff Morriss
- Add appdata file.

* Tue Jan 20 2015 Jeff Morriss
- Make the license tag more specific: Wireshark is GPLv2+.

* Mon Jan 12 2015 Jeff Morriss
- Modernize the (base package) %%description.

* Wed Dec  3 2014 Jeff Morriss
- Don't run gtk-update-icon-cache when uninstalling the Qt package.  But do run
  it when installing the gnome package.
- Tell the loader where to find our libraries if we're being installed
  someplace other than /usr .
- Attempt to get RPMs working with a prefix other than /usr (now that the
  (free)desktop files are no longer always installed /usr).  Desktop
  integration doesn't work for prefixes other than "/usr" or "/usr/local".

* Fri Aug 29 2014 Gerald Combs
- The Qt UI is now the default. Update logic and prioritization to
  reflect this.

* Mon Aug 4 2014 Jeff Morriss
- Fix RPM builds with a prefix other than /usr: The location of
  update-alternatives does not depend on Wireshark's installation prefix:
  it's always in /usr/sbin/.

* Fri Aug  1 2014 Jeff Morriss
- Remove the old wireshark binary during RPM upgrades: this is needed because
  we now declare wireshark to be %%ghost so it doesn't get overwritten during an
  upgrade (but in older RPMs it was the real program).

* Tue Jul  1 2014 Jeff Morriss
- Get rid of rpath when we're building RPMs: Fedora prohibits it, we don't
  need it, and it gets in the way some times.

* Tue Nov 26 2013 Jeff Morriss
- Overhaul options handling to pull in the UI choice from ./configure.
- Make it possible to not build the GNOME package.

* Tue Nov 12 2013 Jeff Morriss
- Add a qt package using 'alternatives' to allow the administrator to choose
  which one they actually use.

* Fri Sep 20 2013 Jeff Morriss
- If we're not using gtk3 add --with-gtk2 (since Wireshark now defaults to gtk3)

* Thu Mar 28 2013 Jeff Morriss
- Simplify check for rpmbuild's version.

* Fri Mar  8 2013 Jeff Morriss
- Put all icons in hicolor
- Use SuSE's desktop-update macro.
- Actually update MIME database when Wireshark's prefix is not /usr .

* Thu Mar  7 2013 Jeff Morriss
- List more build dependencies.
- Update to work on SuSE too: some of their package names are different.

* Wed Mar  6 2013 Gerald Combs
- Enable c-ares by default

* Thu Feb  7 2013 Jeff Morriss
- Overhaul to make this file more useful/up to date.  Many changes are based
  on Fedora's .spec file.  Changes include:
  - Create a separate wireshark-gnome package (like Red Hat).
  - Control some things with variables set at the top of the file.
    - Allow the user to configure how dumpcap is installed.
    - Allow the user to choose some options including GTK2 or GTK3.
  - Greatly expand the BuildRequires entries; get the minimum versions of some
    things from 'configure'.
  - Install freedesktop files for better (free)desktop integration.

* Thu Aug 10 2006 Joerg Mayer
- Starting with X.org 7.x X11R6 is being phased out. Install wireshark
  and manpage into the standard path.

* Mon Aug 01 2005 Gerald Combs
- Add a desktop file and icon for future use

- Take over the role of packager

- Update descriptions and source locations

* Thu Oct 28 2004 Joerg Mayer
- Add openssl requirement (heimdal and net-snmp are still automatic)

* Tue Jul 20 2004 Joerg Mayer
- Redo install and files section to actually work with normal builds

* Sat Feb 07 2004 Joerg Mayer
- in case there are shared libs: include them

* Tue Aug 24 1999 Gilbert Ramirez
- changed to ethereal.spec.in so that 'configure' can update
  the version automatically

* Tue Aug 03 1999 Gilbert Ramirez <gram@xiexie.org>
- updated to 0.7.0 and changed gtk+ requirement

* Sun Jan 03 1999 Gerald Combs <gerald@zing.org>
- updated to 0.5.1

* Fri Nov 20 1998 FastJack <fastjack@i-s-o.net>
- updated to 0.5.0

* Sun Nov 15 1998 FastJack <fastjack@i-s-o.net>
- created .spec file
