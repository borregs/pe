/*  in  < nombre,edad,lugardenac.
 *  out > nombre de mayor edad nacido en mxli
 *  out > nombre de menor edad nacido en durango
 */
#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <ncurses.h>
#include <string.h>

void main(){

  initscr();
  box(stdscr,'*','*');

  char names[20][20],places[20][20],cachaniggas[20][20],duranguense[20][20];
  int edad[5]={0},d=0,c=0,opt=0,r=0,swp=0,iM=0,im=0;

  printw("Bienvenido Usuario.\nEste programa lee una lista de nombres, edades y lugares de nacimiento e imprime una estadistica del mismo\n");

  do{
    printw("\t\tREGISTRO #%d\n\n",r+1);
    printw("Favor de introducir su nombre:\n>>");
    getstr(names[r]);
    printw("Favor de introducir su Lugar de Nacimiento:\n>>");
    getstr(places[r]);
    printw("Favor de introducir su edad:\n>>");
    scanw("%d",&edad[r]);
    getchar();
    r++;
    printw("Desea ingresar a otra persona al registro?\n\t0) NO\n\t1) SI\n>>");
    scanw("%d",&opt);
    getchar();
    scrl(7);
  }while(opt);

  clear();

  for(int x=0;x<r;x++){
    if(edad[x]>swp){
      swp=edad[x];
      iM=x;}
    else if(strcasecmp(places[x],"mexicali")==0){
      strcpy(names[x],cachaniggas[c]);
      c++;
    }}

  for(int x=0;x<r;x++){
    if(edad[x]<swp){
      swp=edad[x];
      im=x;
    }
    else if(strcasecmp(places[x],"durango")==0){
      strcpy(names[x],duranguense[d]);
      d++;
    }
  }
  printw("Acontinuacion se imprime el registro resultante: [Presione Enter]\n\n");
  getch();

  printw("NOMBRE|EDAD|CIUDAD\n");

  for(int x=0;x<r;x++)
    printw("%s\t%d\t%s\n",names[x],edad[x],places[x]);

  printw("\nLa persona mayor en la lista es:\n\n\tNombre:%s\n\tEdad:%d\n\tLugar Natal:%s\n",names[iM],edad[iM],places[iM]);
  printw("\nLa persona menor en la lista es:\n\n\tNombre:%s\n\tEdad:%d\n\tLugar Natal:%s\n",names[im],edad[im],places[im]);

  printw("\nLas personas nacidas en Mexicali son:\n");
  for(int x=0;x<c;x++)
    printw("\t%d) %s\n",x+1,cachaniggas[x]);
  
   printw("\nLas personas nacidas en Durango son:\n");
  for(int x=0;x<d;x++)
    printw("\t%d) %s\n",x+1,duranguense[x]);
 
  
  getch();
  endwin();
}
