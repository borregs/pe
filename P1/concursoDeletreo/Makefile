CC=gcc
CFLAGS=-std=c99 -t
OUT=spellingBee

$(OUT): main.o 
	cc $(CFLAGS) $^ -o $@
main.o: main.c
	cc -c -g $^
clean:
	rm *.o *~ $(OUT)
