# Al inciar definimos las librerias, compiladores y dependencias en variables $env
# Esto solo para no escribir tanto
# Cabe mencionar q el syntaxis de un makefile comprende muchos MACROS. los mas importantes son:
#       $<  Significa solo la primer dependencia(archivo) despues de los dos puntos 
#       $@  Significa todo lo q hay de lado izq de los dos puntos
#       $^  Significa todas las dependencias o archivos del lado derecho de los dos puntos

CC=gcc
OUTPUT=floatArraySearch
CFLAGS=-std=c99
VFLAGS=-t -Wall -Wextra
LDFLAGS=-lm


all: floatSearch.o
	$(CC) $(CFLAGS) -o $(OUTPUT) $^ $(LDFLAGS)


floatSearch.o: p2.c
	cc -c -g $< -o $@
