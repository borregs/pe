#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <ncurses.h>


void main(void){
char baja[]="mexicali", nuevoleon[]="monterrey", sonora[]="hermosillo", chihuahua[]="chihuahua", aguascalientes[]="aguascalientes";
char name[]=" ",userOpt[]=" ";
int count=0,punt=0,useroptn=0,cont=0;

initscr();
box(stdscr,'#','#');

printw("Bienvenido usuario; para iniciar. Favor de ingresar tu nombre \n>>");
//fgets(name,100,stdin);
scanw("%s",name);

printw("\nPerfecto %s, Ahora podemos iniciar. Este programa asiste en la ensenansa de estados usando preguntas interactivas.\n",name);
  

  do{
printw("\n\tPregunta 1:\n");
printw("\tIntrodusca la capital de: Baja California\n");
//fgets(userOpt,5,stdin);
scanw("%s", userOpt);
if(strcasecmp(baja,userOpt)!=0){
cont++;
printw("%s, Fallaste!\nIntentos Restantes: %d\n",name,3-cont);
}else{
printw("Felicidades %s, Tu respuesta es correcta\n",name);
punt++;
break;
}
}while(cont<3);

count+=cont;
cont=0;
clear();

do{
printw("\n\tPregunta 2:\n");
printw("\tIntrodusca la capital de: nuevo leon\n");
//fgets(userOpt,5,stdin);
scanw("%s",userOpt);
if(strcasecmp(nuevoleon,userOpt)!=0){
cont++;
printw("%s, Fallaste!\nIntentos Restantes: %d\n",name,3-cont);

}else{
printw("Felicidades %s, Tu respuesta es correcta\n",name);
punt++;
break;
}}
while(cont<3);

count+=cont;
cont=0;
clear();

do{
printw("\n\tPregunta 3:\n");
printw("\tIntrodusca la capital de: sonora\n");
//fgets(userOpt,5,stdin);
scanw("%s",userOpt);
if(strcasecmp(sonora,userOpt)!=0){
cont++;
printw("%s, Fallaste!\nIntentos Restantes: %d\n",name,3-cont);

}else{
printw("Felicidades %s, Tu respuesta es correcta\n",name);
punt++;
break;}
}while(cont<3);


count+=cont;
cont=0;
clear();

do{
printw("\n\tPregunta 4:\n");
printw("\tIntrodusca la capital de: chihuahua\n");
//fgets(userOpt,5,stdin);
scanw("%s",userOpt);
if(strcasecmp(chihuahua,userOpt)!=0){
cont++;
printw("%s, Fallaste!\nIntentos Restantes: %d\n",name,3-cont);

}else{
printw("Felicidades %s, Tu respuesta es correcta\n",name);
punt++;
break;}
}while(cont<3);


count+=cont;
cont=0;
clear();

do{
printw("\n\tPregunta 5:\n");
printw("\tIntrodusca la capital: de aguascalientes\n");
//fgets(userOpt,5,stdin);
scanw("%s",userOpt);
if(strcasecmp(aguascalientes,userOpt)!=0){
cont++;
printw("%s, Fallaste!\nIntentos Restantes: %d\n",name,3-cont);

}else{
printw("Felicidades %s, Tu respuesta es correcta\n",name);
punt++;
break;}
}while(cont<3);


count+=cont;
cont=0;

scrl(20);

printw("\n\n\tPuntuacion:\n\t\taciertos=%d\n\t\terrores=%d\n\nGracias por participar %s. Vuelva pronto",punt,count,name);
getch();
endwin();
}
