CC=gcc
CFLAGS=-std=c99 -t
LFLAGS=-lncurses
OUT=vivero


$(OUT): main.c
	$(CC) -o $@ $^ $(CFLAGS) $(LFLAGS)

clean:
rm *.o *~ $(OUT)
