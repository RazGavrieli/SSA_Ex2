.PHONY: clean all

CC = gcc
AR = ar -rcs
FLAGS = -Wall -g

main.o: main.c
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o
	ranlib my_mat.a

connections: my_mat.a main.o 
	$(CC) $(FLAGS) main.o my_mat.a -o connections -lm

all: connections

clean: 
	rm -f *.a *.o connections