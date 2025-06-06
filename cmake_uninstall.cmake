#
# Wireshark - Network traffic analyzer
# By Gerald Combs <gerald@wireshark.org>
# Copyright 1998 Gerald Combs
#
# SPDX-License-Identifier: BSD-3-Clause
#

if(NOT EXISTS "/root/wireshark/install_manifest.txt")
	message(FATAL_ERROR "Cannot find install manifest: /root/wireshark/install_manifest.txt")
endif(NOT EXISTS "/root/wireshark/install_manifest.txt")

file(READ "/root/wireshark/install_manifest.txt" files)
string(REGEX REPLACE "\n" ";" files "${files}")
foreach(file ${files})
	message(STATUS "Uninstalling $ENV{DESTDIR}${file}")
	if(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
		exec_program(
		    "/usr/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
		    OUTPUT_VARIABLE rm_out
		    RETURN_VALUE rm_retval
		)
		if(NOT "${rm_retval}" STREQUAL 0)
			message(FATAL_ERROR "Problem when removing $ENV{DESTDIR}${file}")
		endif(NOT "${rm_retval}" STREQUAL 0)
	else(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
		message(STATUS "File $ENV{DESTDIR}${file} does not exist.")
	endif(IS_SYMLINK "$ENV{DESTDIR}${file}" OR EXISTS "$ENV{DESTDIR}${file}")
endforeach(file)

#
# Editor modelines  -  https://www.wireshark.org/tools/modelines.html
#
# Local variables:
# c-basic-offset: 2
# tab-width: 2
# indent-tabs-mode: nil
# End:
#
# vi: set shiftwidth=2 tabstop=2 noexpandtab:
# :indentSize=8:tabSize=8:noTabs=false:
#
