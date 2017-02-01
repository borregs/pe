/* Este programa lee y evalua todos los caracteres de una cadena de hasta 80 caracteres.
 * Al terminar de evaluar, la cadena se imprimira en pantalla todas las letras mayusculas en minusculas y vice-versa
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void main(void){

char name[100];
char daStr[80]=""; 
int i;

printf("Bienvenido Usuario. Para empezar porfavor introdusca su nombre\n>>");
fgets(name,100,stdin);

puts("Este programa lee y evalua todos los caracteres de una cadena de hasta 80 caracteres");
puts("Al terminar de evaluar la cadena se imprimira en pantalla todas las letras mayusculas en minusculas y vice-versa");

printf("%s, Porfavor introduce una cadena para ser evaluada \n>>",name);
fgets(daStr,80,stdin);

for(i=0;i<strlen(daStr);i++){

	if(isalnum(daStr[i])!=0){
		
		if(isalpha(daStr[i])!=0){

			if(isupper(daStr[i])!=0){

				daStr[i]=tolower(daStr[i]);

			}else{
				daStr[i]=toupper(daStr[i]);
		}}else{

	}}else{
}}

puts("Acontinuacion se Desplegara la Cadena Resultante:\n [Press any Key to Continue]\n");
//system("pause");
getchar();
puts(daStr);

}
