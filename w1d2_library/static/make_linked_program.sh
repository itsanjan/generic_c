gcc -c driver.c -o driver.o
gcc -o driver driver.o -L. -l_mylib
