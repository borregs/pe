#include <stdio.h>
#include <ctype.h>
#include <string.h>


void main(void){

char casa[]="house", carro[]="car", silla[]="chair", mesa[]="table", escuela[]="school";
char name[]=" ",userOpt[]=" ";
int count=0,punt=0;

printf("Bienvenido usuario; para iniciar. Favor de ingresar tu nombre \n>>");
//fgets(name,100,stdin);
scanf("%s",name);


do{

printf("\nPerfecto %s, Ahora podemos iniciar. Este programa asiste en la ensenansa del Ingles usando preguntas interactivas.\n",name);
printf("\n\tPregunta 1:\n");

printf("\tIntrodusca el equivalente en ingles de la palabra: Casa\n");
//fgets(userOpt,5,stdin);
scanf("%s", userOpt);
if(strcasecmp(casa,userOpt)!=0){
	count++;
	if(count>=2){
	break;}
	printf("%s, Te queda una oportunidad. Por favor intenta de nuevo\n",name);
}else{
	printf("Felicidades %s, Tu respuesta es correcta\n",name);
  punt++;
}

printf("\n\tPregunta 2:\n");
printf("\tIntrodusca el equivalente en ingles de la palabra: Carro\n");
//fgets(userOpt,5,stdin);
scanf("%s",userOpt);
if(strcasecmp(carro,userOpt)!=0){
	count++;
	if(count>=2){
	break;}

	printf("%s, Te queda una oportunidad. Por favor intenta de nuevo\n",name);
}else{
	printf("Felicidades %s, Tu respuesta es correcta\n",name);
  punt++;
}

printf("\n\tPregunta 3:\n");
printf("\tIntrodusca el equivalente en ingles de la palabra: Silla\n");
//fgets(userOpt,5,stdin);
scanf("%s",userOpt);

if(strcasecmp(silla,userOpt)!=0){
	count++;
	if(count>=2){
	break;}

	printf("%s, Te queda una oportunidad. Por favor intenta de nuevo\n",name);
}else{
	printf("Felicidades %s, Tu respuesta es correcta\n",name);
  punt++;
}

printf("\n\tPregunta 4:\n");
printf("\tIntrodusca el equivalente en ingles de la palabra: Mesa\n");
//fgets(userOpt,5,stdin);
scanf("%s",userOpt);

if(strcasecmp(mesa,userOpt)!=0){
	count++;
	if(count>=2){
	break;}

	printf("%s, Te queda una oportunidad. Por favor intenta de nuevo\n",name);
}else{
	printf("Felicidades %s, Tu respuesta es correcta\n",name);
  punt++;
}

printf("\n\tPregunta 5:\n");
printf("\tIntrodusca el equivalente en ingles de la palabra: Escuela\n");
//fgets(userOpt,5,stdin);
scanf("%s",userOpt);

if(strcasecmp(escuela,userOpt)!=0){
	count++;
	if(count>=2){
	break;}

	printf("%s, Te queda una oportunidad. Por favor intenta de nuevo\n",name);
}else{
	printf("Felicidades %s, Tu respuesta es correcta\n",name);
  punt++;
}

}while(count>=2);
printf("\n\n\tPuntuacion:\n\t\taciertos=%d\n\t\terrores=%d\n\nGracias por participar %s. Vuelva pronto",punt,count,name);
}
