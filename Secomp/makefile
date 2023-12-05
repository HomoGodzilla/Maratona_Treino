all: main

main: Elementos.o
	gcc -g Elementos.o -o main

Elementos.o: Elementos.c
	gcc -c Elementos.c -g

clean:
	rm -rf *.o
