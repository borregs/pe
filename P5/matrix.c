#include <stdio.h>
#include <string.h>
#include <math.h>

void main(void){

int f,p=0,c,x,y,z=0;


printf("Bienvenido usuario\n Para empezar favor de indicar cuantas filas tendra la matriz\n");
scanf("%d",&f);
printf("Ahora favor de indicar cuantas columnas tendra la matriz\n");
scanf("%d",&c);
int matriz[f][c];
printf("bn, aconyinuacion capturaremos datos enteros hasta llenar la matriz\n");
for(x=0;x<f;x++)
for(y=0;y<c;y++){
  printf("\nvalor a ingresar en fila:%d columna:%d\n>>",x+1,y+1);
  scanf("%d",&matriz[x][y]);
}
printf("\nAhora se despliegan todos los numeros impares capturados, asi como su posicion\n");
for(x=0;x<f;x++)
for(y=0;y<c;y++){
  if(matriz[x][y]%2!=0){
    printf("[%d,%d]=%d\n",x+1,y+1,matriz[x][y]);
    z+=matriz[x][y];
  }else
    p+=matriz[x][y];
}

printf("La sumatoria de todos los elementos pares en la matriz equivale a: %d\n",p);
if(fmod(sqrt(p),1)!=0)
printf("La sumatoria de los elementos pares no es un numero primo\nImposible calcular raiz\n"); 
else
printf("La raiz cuadrada de la  sumatoria de todos los elementos pares en la matriz equivale a: %f \n",sqrt(p));
}
