all: lib_math.o
	gcc main.c lib_math.o -Wall -lm -export-dynamic `pkg-config --cflags --libs gtk+-3.0` -o main

lib_math.o: lib_math.c
	gcc lib_math.c  -c -lm -o lib_math.o

clean:
	rm -f *.o main
