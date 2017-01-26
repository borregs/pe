/*
 * array10FloatSqrt.c
 * 
 * LEER UN VECTOR DE 10  ELEMENTOS DE TIPO FLOTANTE, 
 * MOSTRAR SOLO AQUELLOS QUE TENGAN UNA RAIZ CUADRADA SIN DECIMALES.
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
	float array[10]={0}; //Arreglo flotante con cap=10 inicializado en 0
	char name[20];
	int i;
	
	
	printf("usuario, Favor de introducir su nombre \n >>");
	scanf("%s", name);
	
	printf("Bien %s, Ahora porfavor introduce 10 numeros aleatorios \n", name);
	
	for(i=0;i<10;i++)
		scanf("%f", & array[i]);
	
	for(i=0;i<10;i++){

		if(fmod(sqrt(array[i]),1.00)){
          // fmod es division modular, mas funciona cuando las variables no son del mismo tipo
			
			printf("%s, el numero ingresado en la posicion %d no tiene raiz cuadrada perfecta\n",name,i+1);
		}else{
			
			printf("%s, Encontre un numero cuya raiz cuadrada no tiene decimales en la posicion %d del arreglo \n>>",name,i+1);
			printf("\t\t %.2f\n",array[i]);
		
		}
	}	
		
	return 0;
}
