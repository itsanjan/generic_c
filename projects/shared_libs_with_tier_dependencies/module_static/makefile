driver: driver.o lib_mylib.o
	gcc -o driver driver.o -L. -l_mylib

driver.o: driver.o
	gcc -c driver.c -o driver.o

lib_mylib.o: lib_mylib.o
	gcc -c lib_mylib.c -o lib_mylib.o
	ar rcs lib_mylib.a lib_mylib.o



