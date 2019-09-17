CC=gcc
CFLAGS=-Wall -I. -shared -fPIC
SHARED_DEPS	= -I./shared
SHARED_LIBS = -lrary
SHARED_LIBS_PATH		= -L./shared
DEPS = ./application.c
SOBJ = library.so
OBJ = application.o
OUTPUT_FILENAME = base

base: $(OBJ)
	${CC} $(CFLAGS) $(DEPS) $(SHARED_DEPS) -o $(OUTPUT_FILENAME) $(SHARED_LIBS_PATH) $(SHARED_LIBS)
clean:
	rm -f *.so *.o
