all:connections

connections:main.o my_mat.o
	gcc -g -Wall -o connections main.o my_mat.o

my_mat.o:my_mat.c my_mat.h
	gcc -g -Wall -c my_mat.c

main.o:main.c my_mat.h
	gcc -g -Wall -c main.c

.PHONY: clean all 

clean:
	rm -f *.o *.a *.so connections
