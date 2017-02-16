CC=gcc
CFLAGS=-lncurses -std=c99
OUT=enmarcaCadena


$(OUT): main.c
	cc $(CFLAGS) $^ -o $@

clean:
	rm *.o *~ $(OUT)
