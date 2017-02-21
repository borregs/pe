/*
 *    Este programa lee un vector de 10 Elementos enteros, los promedia e 
 *    Imprime los valores identicos al promedio elevados al cubo.
 *
 * */

#include <ncurses.h>
#include <math.h>

int main(){
  
  int x,y=0,v1[10]={0},suma=0;
  float prom=0.00;

  initscr();
  printw("\t\nBienvenido, Este programa suma los elementos de un arreglo.\nDespues imprime el promedio asi como los numeros iguales al promedio elevados al cubo\n");
  printw("\n\tIntroduce 10 numeros enteros aleatorios\n");

  for(x=0;x<10;x++)
    scanw("%d",&v1[x]);

  for(x=0;x<10;x++)
    suma+=v1[x];
  
  prom=1.00*(suma/10);

  printw("El promedio que resulta de sus 10 num es: %.2f\n",prom);
  printw("Aconticuacion se despliegan los numeros del arreglo q son iguales al promedio, asi como el resultado de elevar dicho numero al cubo\n");


  for(x=0;x<10;x++)
    if(v1[x]==prom){
      y=pow(v1[x],3);
      printw("\t%d)\t%d^3=%d\n",x+1,v1[x],y);
      }
  getch();
  endwin();
  return 0;
}
