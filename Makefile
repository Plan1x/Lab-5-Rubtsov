all: main.o lib.o
	gcc -o executable main.o lib.o -lm

main.o : main.c lib.h
	gcc -c main.c
lib.o: lib.c lib.h
	gcc -c lib.c

clean:
	rm executable main.o