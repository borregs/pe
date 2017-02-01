#	En este Makefile en particular nos saltamos la creacion de un archivo objeto '*.o'. Esto para emfatizar
#	el hecho de q el archivo objecto solo es necesario cuando el programa final comprende mas de 1 dependencia.
# 

CC=gcc
OUT=stringCaseConverter
CFLAGS=-std=c99 -t

$(OUT): main.c
	$(CC) $(CFLAGS) $^ -o $@

clean: 
rm *.o *~ $(OUT)
