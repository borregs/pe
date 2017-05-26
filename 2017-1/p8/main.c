#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>

char *tipos[]={"NULL","Comun","XVs","Bodas","Especial"};

int menu();
void registra(int *ids[100], int *tipos[],int *cants[],float *costos[],char sabors[]);
void consultas();
void modifica();
void venta();
int main(){

  int yy=0,xx=0,op=0,id[100]={0},tipo[100]={0},cant[100]={0};
  float costo[100]={0.00},precio[100]={0.00};
  char sabor[50][100];
  
  getmaxyx(stdscr,yy,xx);
  box(stdscr,0,0);

  do{
    op=menu();
    clear();
    switch(op){
      case 1:
        registra(&id[],&tipo[],&cant[],&costo[],&sabor[]);
      break;
      case 2:
        consultas();
      break;
      case 3:
        modifica();
      break;
      case 4:
        venta();
      break;
      case 5:
        printw("Gracias por usar el programa.\n Vuelva Pronto.\n\n");
      break;
    }
  }while(op!=5);
return 0;
}
int menu(){
  int m=0;
  clear();
  printw("Menu:\n\n\t1) Registrar Pasteles\n\t2) Consultas\n\t3) Modificaciones\n\t4) Ventas\n\t5) salir\n\nIntroduce tu Eleccion:\n>>");
  scanw("%d",&m);
  return m;
}
void registra(int *ids[],int *tipos[],int *cants[],float *costos[],char *sabors[]){
  static int x=0;
  int opo=0;
  
  do{

  clear();
  printw("introduce el id del pastel:\n>>");
  scanw("%d", ids[x]);
  printw("Indique el tipo de pastel:\n\t1) Comun\n\t2) XVs\n\t3) Bodas\n\t4) Especial\n\n>>");
  scanw("%d", tipos[x]);
  printw("Introduce la cantidad en existencia:\n>>");
  scanw("%d", *cants[x]);
  printw("Introduce el costo del producto:\n>>");
  scanw("%f", *costos[x]);

  cbreak();
  getc(stdin);

  printw("Indica el sabor del pastel:\n>>");
  getstr(sabors[x]);
  
  printw("desea ingresar otro?:\n\n\t0) NO\n\t1) SI\n\n>>");
  scanw("%d",&opo);
  x++;
  }while(opo);

}

void consultas(){ 
  int op=0;


  clear();
  printw("\t\t\tMENU CONSULTAS\n\n\t1) Consulta General\n\t2) Consulta por tipo\n\t3) Listado de sabores\n\t4) Menu Principal\n\nIntroduce tu eleccion:\n>>");
  scanw("%d",&op);
  switch(op){
  
    case 1:
    break;
    case 2:
    break;
    case 3:
    break;
    case 4:
    break;

  }




}
