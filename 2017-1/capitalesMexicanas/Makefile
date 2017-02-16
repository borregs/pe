# BORREMAKE-GLOBL-TEMPLATE
# [www.github.com/borregs]
CC=gcc
CFLAGS=-std=c99 -t
LFLAGS=-lncurses
OUT=capitalesInteractivas


$(OUT): main.c
	$(CC) -o $@ $^ $(CFLAGS) $(LFLAGS)

clean:
	rm *.o *~ $(OUT)
