#Makefile 
CC=gcc
DEPS=bgs.h
CFLAGS=-std=c99 -t
LFLAGS=-lm -lncurses
OUT=mart

$(OUT): main.c $(DEPS) 
	$(CC) -o $@ $^ $(CFLAGS) $(LFLAGS)
clean:
	rm *.o *~ $(OUT)
#as told by borregs
