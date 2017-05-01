/*
 * main.c
 * 
 * Copyright 2017 ElBorregoMixteco <borregs@yopmail.com>
 * 
 * 
 */




#include <stdio.h>
#include <ncurses.h>
#include <string.h>

#include "bgs.h"

int main(){
int op=0,cont=0,ch=0,cant=0,regcont=0;
char name[50];
float vt=0.0;

initscr();
do{
  clear();
  printw("MENU\n\n\t1) Registro De Articulos\n\t2) Consulta General\n\t3) Consulta Por Articulo\n\t4) Bajas\n\t5) Ventas\n\t6) Consulta de Facturas\n\t7) Consulta Por Nombre\n\t8) Salir\n\nIntroduce tu Eleccion:\n>>");
  scanw("%d",&op);
  switch(op){

    case 1:
      cont=registro();
    break;
    case 2:
      consultag(cont);
    break;
    case 3:
      printw("Introdusca el Codigo de Barras del articulo:\n>>");
      scanw("%d",&ch);
      consultab(ch,cont);
    break;
    case 4:
      printw("Introdusca el Codigo de Barras del articulo:\n>>");
      scanw("%d",&ch);
      bajio(ch,cont);
    break;
    case 5:
	  printw("Introdusca el Nombre del cliente:\n>>");
	  getstr(name);
      printw("\nIntrodusca el Codigo de Barras del articulo:\n>>");
      scanw("%d",&ch);
      printw("\nIntrodusca la cantidad a comprar:\n>>");      
	  scanw("%d",&cant);
	  vt+=ventas(ch,cant,name,&regcont,cont);
    break;
    case 6:
	  consultaf(vt,regcont);
    break;
    case 7:
      printw("Introdusca el Nombre del cliente a buscar:\n>>");
	  getstr(name);
	  consultan(name,regcont);
    break;
    case 8:
      clear();
      printw("Gracias por usar el programa, Vuelva pronto.\n\n");
      printw("[PRESIONE UNA TECLA]");
      getch();
    break;
  }}while(op!=8);
  endwin();
return 0;
}

