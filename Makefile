CFLAGS=`pkg-config glib-2.0 --cflags`
CFLAGS+=`pkg-config gobject-2.0 --cflags`

LIBS=`pkg-config glib-2.0 --libs`
LIBS+=`pkg-config gobject-2.0 --libs`

all:
	gcc objects.c  base.c derived.c iface.c iface-implemented.c ${CFLAGS} ${LIBS} -o objects
clean:
	rm objects
