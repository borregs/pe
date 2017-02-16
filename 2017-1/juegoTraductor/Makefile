CC=gcc
CFLAGS=-std=c99 -t
LFLAGS=-lncurses
OUT=juegoDePalabras


$(OUT): main.c
	$(CC) -o $@ $^ $(CFLAGS) $(LFLAGS)

clean:
	rm *.o *~ $(OUT)
