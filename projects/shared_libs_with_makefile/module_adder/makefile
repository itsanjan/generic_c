
app: application.o adder.o
	gcc -o app application.o adder.o

application.o: application.c
	gcc -c -o application.o application.c

adder.o: adder.o
	gcc -c -o adder.o adder.c
