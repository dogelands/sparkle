#  Copyright 2005 Adam Jackson.
#
#  Permission is hereby granted, free of charge, to any person obtaining a
#  copy of this software and associated documentation files (the "Software"),
#  to deal in the Software without restriction, including without limitation
#  on the rights to use, copy, modify, merge, publish, distribute, sub
#  license, and/or sell copies of the Software, and to permit persons to whom
#  the Software is furnished to do so, subject to the following conditions:
#
#  The above copyright notice and this permission notice (including the next
#  paragraph) shall be included in all copies or substantial portions of the
#  Software.
#
#  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
#  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
#  FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL
#  ADAM JACKSON BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
#  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
#  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


# this is obnoxious:
# -module lets us name the module exactly how we want
# -avoid-version prevents gratuitous .0.0.0 version numbers on the end
# _ladir passes a dummy rpath to libtool so the thing will actually link
# TODO: -nostdlib/-Bstatic/-lgcc platform magic, not installing the .a, etc.

AM_CFLAGS = $(XORG_CFLAGS)
AM_CPPFLAGS = -I../../were/include -I../..

sparkle_drv_la_LTLIBRARIES = sparkle_drv.la
sparkle_drv_la_LDFLAGS = -module -avoid-version -lXFree86
sparkle_drv_la_LIBADD = $(XORG_LIBS) ../../were/src/libwere.la
sparkle_drv_ladir = @moduledir@/drivers

sparkle_drv_la_SOURCES = \
         compat-api.h				\
         dummy_cursor.c				\
         dummy_driver.c				\
         dummy.h				\
         sparkle_c.cpp				\
         sparkle_c.h				\
         ../../common/sparkle_surface_ashmem.cpp	\
         ../../common/sparkle_surface_ashmem.h	\
         ../../common/sparkle_connection.cpp	\
         ../../common/sparkle_connection.h	\
         ../../common/sparkle_protocol.cpp	\
         ../../common/sparkle_protocol.h

