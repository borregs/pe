#include <stdio.h>
#include <string.h>

void main(void){
int op, flag1=0,x=0;
char dir[20][50], rz[20][50];
int n[50],bg[50],b[50],total[50],yn;

do{
printf("Menu:\n\t1) Registro de surtido\n\t2) Consulta general\n\t3) Consulta razon social\n\t4)salir\nintrodusca su opcion\n>>");
scanf("%d",&op);
getc(stdin);
switch(op){
case 1:
if(flag1)
 printf("El registro de surtidos ya esta lleno\n");
else{
 flag1=1;
 for(x=0;x<20;x++){
	printf("introdusca la razon social del cliente con num de registro %d\n>>",x+1);
	fgets(rz[x],50,stdin);
	//scanf("%s", rz[x]);
	//getc(stdin);
	printf("Ahora Dirreccion\n>>");
	fgets(dir[x],50,stdin);
	//scanf("%s", dir[x]);
	//getc(stdin);
	printf("Cantidad de Pantalones negros\n>>");
	scanf("%d", & n[x]);
	//getc(stdin);
	if(n[x]<10){
	 printf("Cantidad debe ser mayor a 10 para procesar pedido\n");
	 n[x]=0;
	 printf("Desea pedir el minimo de 10 pantalones negros para cliente.\n\t1) si\n\t0) no\n>>");
	 scanf("%d",&yn);
	 getc(stdin);
	 if(yn)
	  n[x]=10;
	 else
	  printf("0 pantalones Negros para el cliente #%d\n",x+1);
	 }
	printf("Cantidad de pantalones beige\n>>");
	scanf("%d",& bg[x]);
	getc(stdin);
	 if(bg[x]<10){
	 printf("Cantidad debe ser mayor a 10 para procesar pedido\n");
	 bg[x]=0;
	 printf("Desea pedir el minimo de 10 pantalones beige para cliente.\n\t1) si\n\t0) no\n>>");
	 scanf("%d",& yn);
	 getc(stdin);
	 if(yn)
	  bg[x]=10;
	 else
	  printf("0 pantalones beige para el cliente #%d\n",x+1);
	 }
	printf("Cantidad de pantalones blancos\n>>");
	scanf("%d",& b[x]);
	getc(stdin);
	 if(b[x]<10){
	 printf("Cantidad debe ser mayor a 10 para procesar pedido\n");
	 b[x]=0;
	 printf("Desea pedir el minimo de 10 pantalones blancos para cliente.\n\t1) si\n\t0) no\n>>");
	 scanf("%d",&yn);
	 getc(stdin);
	 }
	 if(yn)
	  b[x]=10;
	 else
	  printf("0 pantalones blancos para el cliente #%d\n",x+1);
	 total[x]=n[x]+b[x]+bg[x];}}
break;

case 2:
if(flag1){
 printf("Acontinuacion se despliegan los registros de surtido y el total de cada cliente\n\n");
 for(x=0;x<20;x++){
  printf("\t\tCliente #%d\n",x+1);
  printf("\tRazon Social: %s \n",rz[x]);
  printf("\tDireccion: %s \n",dir[x]);
  printf("\tPedido: %d Blancos, %d Beige y %d Negros \n", b[x],bg[x],n[x]);
  printf("\tTotal: %d$ \n\n\n",total[x]*200);
	}}
 else
  printf("El registro de surtido esta vacio!\nfavor de capturar registro en menu\n");
break;
case 3:
if(flag1){
 printf("Acontinuacion se listan las Razones Sociales incluidas en los registros\n");
 for(x=0;x<20;x++){
  printf("%d) %s\n",x+1,rz[x]);
  }
 printf("\n\nIntrodusca el num de la Razon Social para ver mas info \n>>");
 scanf("%d",&x);
 getc(stdin);
 x--;
 printf("\t\tCliente #%d\n",x+1);
 printf("\tRazon Social: %s \n",rz[x]);
 printf("\tDireccion: %s \n",dir[x]);
 printf("\tPedido: %d Blancos, %d Beige y %d Negros \n", b[x],bg[x],n[x]);
 printf("\tTotal: %d$ \n\n\n",total[x]*200);
}
else
 printf("El registro de surtido no ha sido capturado!\nfavor de capturar\n");
break;
case 4:
 printf("Gracias por usar el programa. Vuelva pronto \n");
break;
}}while(op!=4);}
