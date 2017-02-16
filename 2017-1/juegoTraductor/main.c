#include <stdio.h>
#include <ncurses.h>
#include <ctype.h>
#include <string.h>

void main(){

char carro[10], casa[10], silla[10], meza[10], escuela[10];
int ce=0, a=0,e=0;

initscr();
box(stdscr,'*','*');

printw("Favor de introducir el equivalente en ingles de las siguientes palabras:\n");

while(1){
printw("Palabra #1: Casa\n>>");
getstr(casa);

if(strcasecmp(casa,"house")==0){
  a++;
  break;}
else if(ce>=1){
  printw("Lo siento intente mas tarde");
  getch();
  break;
}
else{
  printw("intenta de nuevo");
  ce++;}
}
e+=ce;
ce=0;
while(1){
printw("Palabra #2: Carro\n>>");
getstr(carro);

if(strcasecmp(carro,"car")==0){
  a++;
  break;
}
else if(ce>=1){
  printw("Lo siento intente mas tarde");
  getch();
  break;
}
else{
  printw("intenta de nuevo");
  ce++;
}}
e+=ce;
ce=0;
while(1){
printw("Palabra #3: Silla\n>>");
getstr(silla);

if(strcasecmp(silla,"chair")==0){
  a++;
  break;}
else if(ce>=1){
  printw("Lo siento intente mas tarde");
  getch();
  break;
}
else{
  printw("intenta de nuevo");
  ce++;
}}
e+=ce;
ce=0;
while(1){
printw("Palabra #4 Mesa\n>>");
getstr(meza);

if(strcasecmp(meza,"table")==0){
  a++;
  break;}
else if(ce>=1){
  printw("Lo siento intente mas tarde");
  getch();
  break;
}
else{
  printw("intenta de nuevo");
  ce++;
}}
e+=ce;
ce=0;
while(1){
printw("Palabra #5: Escuela\n>>");
getstr(escuela);

if(strcasecmp(escuela,"school")==0){
  a++;
  break;
  }
else if(ce>=1){
  printw("Lo siento intente mas tarde");
  getch();
  break;
}
else{
  printw("intenta de nuevo");
  ce++;
}}
e+=ce;
printw("La cantidad total fue de:\n\t%d aciertos",a);
getch();
endwin();
}
