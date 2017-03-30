/*
 *  La floreria NATZ requiere de un programa que le permita llevar el control de arreglos florales solicitados por sus clientes. El programa debera tener las siguientes
 *  Funciones.
 *    -Registrar Cliente
 *      *captura Num de cliente,nombre,numero de arreglos solicitados en el mes
 *    -Consulta General
 *    -Cliente Distinguido
 *    -Salir
 *
 */
static int arr[20],nums[20],i=0,s=0,f=0,m=0;
static char names[20][20];
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>

int menu();
void cliente();
void consulta();
void registra();

void main(){

  initscr();
  box(stdscr,0,0);
  printw("Bienvenido, Este programa lleva el control de pedidos de arreglos florales solicitados por nuestros clientes\n");
  getch();
  do{
    clear();
    m=menu();
    switch(m){
      case 1:
        registra();
      break;
      case 2:
        consulta();
      break;
      case 3:
        cliente();
      break;
      case 4:
        printw("Gracias por usar el programa, porfavor vuelva pronto\n");
        getch();
      break;}
  }while(m!=4);

  endwin();
}
void registra(){

  int opt=0;
  //static char names[20][20];
  //static int arr[20],nums[20];

    cbreak();
    printw("Acontinuacion se le pedira ingresar algunos datos relacionados al cliente para el registrro\n");
    getch();
  do{
    printw("Favor de ingresar la clave del cliente:\n>>");
    scanw("%d",&nums[i]);
    getc(stdin);
    printw("Favor de ingresar el nombre del cliente #%d",i+1);
    getstr(names[i]);
    printw("ingrese el numero de arreglos solicitados en el mes");
    scanw("%d",&arr[i]);
    i++;
    printw("Desea ingresar otro cliente?\n\n\t0) NO\n\t1) SI\nIntrodusca su eleccion\n>>");
    scanw("%d",&opt);
    clear();
  }while(opt);
}

int menu(){
  static int m;
  printw("MENU:\n\n\t1) Registrar Cliente\n\t2) Consulta General\n\t3) Cliente Distinguido\n\t4) Salir\n\nIntroduce tu eleccion\n>>");
  scanw("%d",&m);
  return m;
}
void consulta(){
  clear();
  printw("Acontinuacion se despliega el Registro resultante:\n");
  printw("#)\tNombre\tarreglos\t\n\n");
  for(int x=0;x<i;x++)
    printw("%d)\t%s\t%d\n",nums[x],names[x],arr[x]);
  getch();
  printw("Ahora ordenados por numero de control:\n");
  for(int x=0;x<i;x++){
    bool swp=0;
    int temp=0;
    char none[20];
    for(int y=0;y<i-1;y++)
     {
        if(nums[y]>nums[y+1]){
          temp=nums[y];
          nums[y]=nums[y+1];
          nums[y+1]=temp;
          strcpy(none,names[y]);
          strcpy(names[y],names[y+1]);
          strcpy(names[y+1],none);
          temp=arr[y];
          arr[y]=arr[y+1];
          arr[y+1]=temp;
        }
     }
  }
  for(int x=0;x<i;x++)
    printw("%d)\t%s\t%d\n",nums[x],names[x],arr[x]);
  getch();
}

void cliente(){
  clear();
  printw("Acontinuacion se despliega el cliente que compro el mayor numero de arreglos\n");
  for(int x=0;x<i;x++)
    if(arr[x]>s){
      s=arr[x];
      f=x;}
  printw("Cliente ganador de un arreglo: %s\nuds compro %d arreglos este mes, felicidades",names[f],arr[f]);
  getch();
}
