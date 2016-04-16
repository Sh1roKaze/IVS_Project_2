
all: math.o
	gcc main.c math.o -Wall -lm  -export-dynamic `pkg-config --cflags --libs gtk+-3.0` -o main

math.o: math.c
	gcc math.c  -c -lm -o math.o

