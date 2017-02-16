CC=gcc
CFLAGS=-std=c99 -t
LFLAGS=-lncurses
OUT=agrupoPersonas


$(OUT): main.c
	$(CC) -o $@ $^ $(CFLAGS) $(LFLAGS)

clean:
	rm *.o *~ $(OUT)
