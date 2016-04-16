
all: math.o
	gcc main.c math.o -Wall  -export-dynamic `pkg-config --cflags --libs gtk+-3.0` -o main

math.o: math.c
	gcc math.c -nostartfiles -lm -o math.o

