#include <ncurses.h>
#include <stdlib.h>
#include <strings.h>

char *estaciones[]={
  "NULL"
  "Primavera",
  "Verano",
  "Otono",
  "Invierno"
};
void main(){

int x,op=0,i=0,stat[50],opt=0;
char name[50][50],planta[50];
float in[50],mxn[50];

initscr();
box(stdscr,0,0);
do{
  clear();
  printw("Menu:\n\n\t1) Registro de Plantas\n\t2) Consulta General\n\t3) Consulta por Nombre\n\t4) Salir\nIntroduce tu Eleccion:\n>>");
  scanw("%d",&op);
  switch(op){
    case 1:
    do{ 
      clear();
      printw("Ingrese el nombre de la planta:\n>>");
      getstr(name[i]);      
      printw("Ingrese el tamano en pulgadas:\n>>");
      scanw("%f",&in[i]);
      printw("Ingrese el precio en pesos:\n>>");
      scanw("%f",&mxn[i]);
      printw("Seleccione la estacion del año en que se siembra:\n\n\t1) Primavera\n\t2) Verano\n\t3) Otoño\n\t4) Invierno\nIntroduce tu eleccion\n >>");
      scanw("%d",&stat[i]);
      i++;
      printw("Deseas ingresar otra planta al registro?\n\t0) no\n\t1) si\n>>");
      scanw("%d",&opt);
    }while(opt);

    break;
    case 2:
      clear();
      printw("Acontinuacion se imprimira el registro en su totalidad:\n\n");
      printw("#)\tNombre\tPulgadas\tPrecio\tEstacion ideal\n\n");
      for(x=0;x<i;x++)
        printw("%d)\t%s\t%.2f\t%.2f\t%s\n",x+1,name[x],in[x],mxn[x],estaciones[stat[x]]);
      getch();
    break;
    case 3:
      clear();
      printw("Acontinuacion ingrese el nombre de la planta que busca\n");
      getstr(planta);
      for(x=0;x<i;x++)
        if(strcasecmp(name[x],planta)==0){

          printw("#)\tNombre\tPulgadas\tPrecio\tEstacion ideal\n\n");
          printw("%d)\t%s\t%.2f\t%.2f\t%s\n",x+1,name[x],in[x],mxn[x],estaciones[stat[x]]);
          getch();
        }
    break;
    case 4:
          printw("Gracias por usar el programa. Vuelva pronto\n");
          getch();
    break;
 }
}while(op!=4);
endwin();
}
