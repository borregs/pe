CC=gcc
OUTPUT=nameLengthSearch
CFLAGS=-std=c99
VFLAGS=-t -Wall -Wextra
LDFLAGS=-lm

all: classStrArrSrch.o
	$(CC) $(CFLAGS) -o $(OUTPUT) $^ $(LDFLAGS)

verbose: classStrArrSrch.o
	$(CC) $(CFLAGS) $(VFLAGS) -o $(OUTPUT) $^ $(LDFLAGS)

classStrArrSrch.o: p2_1.c
	cc -c -g $< -o $@ 
