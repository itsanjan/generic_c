CC=gcc
CFLAGS=-I.
DEPS = ./lib_mylib.h ./lib_mylib.c ./driver.c
OBJ = lib_mylib.o driver.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
base: $(OBJ)
	${CC} -o $@ $^ $(CFALGS)
clean:
	rm -f *.so *.o
