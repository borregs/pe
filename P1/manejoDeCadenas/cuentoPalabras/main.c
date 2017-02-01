/*  Escriba un programa que lea una cadena de maximo 80 char. Determine e imprima cuantas palabras forman la cadena. 
 *  Considere que cada palabra puede estar separada por punto(excepto si es al final de la cadena), punto y coma o espacio en 
 *  blanco. Usé ncurses para abrir el programa en una ventana nueva.
 */
 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <ncurses.h>

void main(void){

char name[100];
char daStr[80]=""; 
int i,count=1;


initscr();
clear();
printw("Bienvenido Usuario. Para empezar porfavor introdusca su nombre\n>>");
getstr(name);

puts("Este programa lee y evalua todos los caracteres de una cadena de hasta 80 caracteres \n");
puts("Al terminar de evaluar la cadena se determina y despliega el numero de palabras que forman la cadena \n");

printw("%s, Porfavor introduce una cadena para ser evaluada \n>>",name);
getstr(daStr);

for(i=0;i<strlen(daStr);i++)
  if(isspace(daStr[i])||ispunct(daStr[i])){
    count++;}

if(ispunct(daStr[strlen(daStr)-1])){
count--;}

printw("%s, Su cadena consiste de %d palabras\n",name,count);
getch();
endwin();
}

 
