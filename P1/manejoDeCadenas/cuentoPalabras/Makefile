#	En este Makefile en particular nos saltamos la creacion de un archivo objeto '*.o'. Esto para emfatizar
#	el hecho de q el archivo objecto solo es necesario cuando el programa final comprende mas de 1 dependencia.
# 

CC=gcc
OUT=wordCounter
CFLAGS=-std=c99 -t
LFLAGS=-lncurses

$(OUT): main.c
	$(CC) $(CFLAGS) $^ -o $@ $(LFLAGS)

clean: 
	rm *.o *~ $(OUT)
