CC=gcc
OUTPUT=fabricaPantalonera
CFLAGS=-std=c99
VFLAGS=-t -Wall -Wextra

all: pichirillo.o
	$(CC) $(CFLAGS) -o $(OUTPUT) $^

verbose: pichirillo.o
	$(CC) $(CFLAGS) $(VFLAGS) -o $(OUTPUT) $^

pichirillo.o: p3.c
	cc -c -g $< -o $@ 
