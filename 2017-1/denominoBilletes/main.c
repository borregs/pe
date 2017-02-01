/* 
 * Programa que lee una cantidad entera en pesos e imprime la minima cantidad de billetes y monedas en los q se puede dividir
 */

#include <stdio.h>
#include <string.h>

void main(){

char name[20];
int x=0,feria[10]={1,2,5,10,20,50,100,200,500,1000},total[10]={0},n=0,i=0;

puts("este programa determina el minimo conjunto de billetes necesarios para lograr la cifra monetaria deseada en pesos mexicanos");

printf("Usuario, para empezar favor de introducir su nombre:\n>>");
scanf("%s",name);

printf("Muy bien %s, Ahora introdusca la cantidad entera a denominar en MXN\n>>$", name);
scanf("%d",& n);



for(x=9;x>=0;x--)
{
  while(n>0&&n/feria[x]>=1)
  {

    //printf("%d,%d,%d,%d\n",n,feria[x],x,i);
    total[i]++;
    n-=feria[x];
   
  }
  i++;
}

puts("se requieren billetes en las siguientes cantidades y denominaciones:\n\t[cant] ---- [Denom]\n\n");

for(x=0;x<i;x++)
{
    printf("\n\t%dx -------- $%d\n",total[x],feria[9-x]);
}}
