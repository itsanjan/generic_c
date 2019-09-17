CC=gcc
CFLAGS=-Wall -I. -shared -fPIC
DEPS = ./library.c
SOBJ = library.so
OBJ = application.o
OUTPUT_FILENAME = base

base: $(OBJ)
	${CC} $(CFLAGS) -o $(SOBJ) $(DEPS) 
clean:
	rm -f *.so *.o
