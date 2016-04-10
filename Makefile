
all: main.c
	gcc main.c -Wall -g  -export-dynamic `pkg-config --cflags --libs gtk+-3.0` -o main

