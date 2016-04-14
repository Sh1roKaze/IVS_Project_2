
all: main

main:
	gcc main.c -Wall  -export-dynamic `pkg-config --cflags --libs gtk+-3.0` -o main


