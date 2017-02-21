#BorreMakeGlbl
OUT=promedioArregloYEvaluo
CC=gcc
CFLAGS=-t
LFLAGS=-lm -lncurses


$(OUT) : main.c 
	$(CC) $(CFLAGS) $^ -o $@ $(LFLAGS)

clean:
	rm *.o *~ $(OUT)
