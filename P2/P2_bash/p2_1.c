/*
 * classmateStrArray.c
 * 
 * LEER UN VECTOR DE CADENAS QUE CONTEGA LOS NOMBRES DE SU COMPAnEROS 
 * DE CLASE DE PROGRAMACION, DE ELLOS OBTENER EL NUMERO DE LETRAS QUE 
 * CONTIENEN, IMPRIMA POR SEPARADO LOS NOMBRES QUE TIENEN UNA CANTIDAD DE 
 * LETRAS MAYORES AL PROMEDIO DE LOS QUE TIENEN UNA CANTIDAD DE LETRAS 
 * MENORES AL PROMEDIO, LOS QUE SEAN IGUALES AL PROMEDIO NO LOS IMPRIMA
 * 
 * 
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

	printf("A continuacion se imprimira la lista de alumnos actualmente en LSC \n [Press Enter To Continue]");
	getchar();



  system("ls -l /externos/home/alumnos/ | cut -d' ' -f4 | sort -u | sed -e 86,147d | tee al.lst");
  printf("Se a Creado el listado: al.lst  \n [Press Enter To Continue]");
  getchar();


  system("./re.sh");




  printf("A continuacion una lista de nombres de alumnos con nombres mas largos que el promedio \n  [Press Enter To Continue]");
  getchar();	
  system("./re.sh | cut -d ' ' -f5 | sed 1,3d | sed 3~3d | awk '{if($1 ~ /[[:alpha:]].*/ && length($1) >= 8 ) print}'");



  printf("y ahora; lista de nombres de alumnos con nombres mas cortos que el promedio: \n [Press Enter To Continue] ");
  getchar();
  system("./re.sh | cut -d ' ' -f5 | sed 1,3d | sed 3~3d | awk '{if($1 ~ /[[:alpha:]].*/ && length($1) < 8 ) print}'");
	
	return 0;
}
