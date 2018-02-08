SOURCES =
HEADERS =

CXXFLAGS = \
-Wall -I.

LIBS = -lX11 -lEGL -lGLESv2 were/libwere.a

SOURCES += main.cpp


SOURCES += platform/x11/platform_x11.cpp
HEADERS += platform/x11/platform_x11.h

SOURCES += compositor/gl/compositor_gl.cpp
HEADERS += compositor/gl/compositor_gl.h

SOURCES += compositor/gl/texture.cpp
HEADERS += compositor/gl/texture.h

SOURCES += common/sparkle_packet.c
HEADERS += common/sparkle_packet.h

SOURCES += common/sparkle_surface_file.cpp
HEADERS += common/sparkle_surface_file.h

SOURCES += common/sparkle_server.cpp
HEADERS += common/sparkle_server.h

all: test


test: ${SOURCES} ${HEADERS}
	${CXX} -o test ${SOURCES} ${CXXFLAGS} ${LIBS}

