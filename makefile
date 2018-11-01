CC = gcc
CFLAGS = -Wall -g -Iinclude -std=c11

all: main

#------------------------------------------------------------------------------------

#main - main.exe -> scaffold.o, iostr.a, opstr.a


main: lib/libiostr.a lib/libopstr.a scaffold.o
	$(CC) $(CFLAGS) scaffold.o -o bin/main -L./lib/ -liostr -lopstr

#------------------------------------------------------------------------------------

#iostr - iostr.a -> iostr.o -> iostr.c, iostr.h


iostr: lib/libiostr.a

lib/libiostr.a: iostr.o
	ar cr lib/libiostr.a iostr.o

iostr.o: src/iostr.c
	$(CC) $(CFLAGS) -c src/iostr.c

#------------------------------------------------------------------------------------

#opstr - opstr.a -> opstr.o -> opstr.c


opstr: lib/libopstr.a

lib/libopstr.a: opstr.o
	ar cr lib/libopstr.a opstr.o

opstr.o: src/opstr.c
	$(CC) $(CFLAGS) -c src/opstr.c

#------------------------------------------------------------------------------------ 

#scaffold - scaffold.o -> iostr.h, opstr.h


scaffold: scaffold.o

scaffold.o: src/scaffold.c
	$(CC) $(CFLAGS) -c src/scaffold.c

#------------------------------------------------------------------------------------

#Utility Funtions

clean:
	rm *.o
	rm lib/*.a
	rm bin/main

run:
	./bin/main

cclear:
	clear
	clear

r: cclear clean main run

