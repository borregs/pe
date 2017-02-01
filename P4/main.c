/*
 *
 *  Programa para el registro de las carteras de clientes de una empresa.
 *  Menu: 1) regustro de clientes, 2) consultas 3) salir
 *
 *  ORDENACION AUN FALLA
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){

int reg[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
char rz[50][20],name[50][20],campana[50][20],fecha[50][20],temp[50];
float cobro[20],swap;
int x=0,y,z,swp,flag=1,op,opb,opt,i;

do{
printf("Bienvenido, menu: \n\t1) Registro de Clientea\n\t2) Consultas\n\t3) Salir\n");
printf("Introduce tu eleccion >> ");
scanf("%d",&op);
getc(stdin);
switch(op){

case 1:

if(flag){
	do{
	printf("introdusca el Nombre del cliente con num de registro %d\n",x+1);
	fgets(name[x],50,stdin);
	printf("Ahora razon social\n");
	fgets(rz[x],49,stdin);
	printf("campania afiliada\n");
	fgets(campana[x],50,stdin);
	printf("fecha\n");
	fgets(fecha[x],50,stdin);
	printf("ahora introduce el cobro total:\n");
	scanf("%f",& cobro[x]);
	getc(stdin);
  printf("Desea registrar otro cliente?\n\t0) NO\n\t1) SI\n>>");
  scanf("%d",&opt);
  getc(stdin);
  x++;
	}while(opt);
	flag=0;
}else
	printf("el registro ya esta lleno\n");

i=x;

break;

case 2:

if(flag)
	printf("El registro esta vacio!\nFavor de capturar en menu\n");
else{
	printf("\nMenu de Consultas: \n\t1) ordenada por AZ\n\t2) ordenada por cobros\n\t3) por Razon Social\n\t4) por # de reg\n\t5) Salir\n\nIntrodusca su opcion\n>> ");
	scanf("%d",& opb);switch(opb){

		case 1:
			for(x=0;x<i;x++)
        for(y=1;y<i-x;y++)
        {
			    if(name[x]>name[x+1]){
			      strcpy(name[x],temp);
			      strcpy(name[x+1],name[x]);
			      strcpy(temp,name[x+1]);
			      strcpy(campana[x],temp);
			      strcpy(campana[x+1],campana[x]);
			      strcpy(temp,campana[x+1]);
  			    strcpy(rz[x],temp);
	  		    strcpy(rz[x+1],rz[x]);
		  	    strcpy(temp,rz[x+1]);
			      strcpy(fecha[x],temp);
			      strcpy(fecha[x+1],fecha[x]);
  			    strcpy(temp,fecha[x+1]);
	  		    swp=reg[x];
		  	    reg[x]=reg[x+1];
			      reg[x+1]=swp;
			      swap=cobro[x];
  			    cobro[x]=cobro[x+1];
			      cobro[x+1]=swap;
			    
			      }
			    }
      for(x=0;x<i;x++){
			   printf("\t\tCliente #%d\n",reg[x]);
 			   printf("\tRazon Social: %s \n",rz[x]);
 			   printf("\tNombre: %s \n",name[x]);
 			   printf("\tCampania: %s \n", campana[x]);
 			   printf("\tTotal: %.2f$ \n\n\n",cobro[x]);
			}
			
		break;
		case 2:
			for(x=0;x<i;x++)
        for(y=1;y<i-x;y++){
			  if(cobro[x]<cobro[x+1]){
			    strcpy(name[x],temp);
			    strcpy(name[x+1],name[x]);
			    strcpy(temp,name[x+1]);
			    strcpy(campana[x],temp);
			    strcpy(campana[x+1],campana[x]);
			    strcpy(temp,campana[x+1]);
			    strcpy(rz[x],temp);
			    strcpy(rz[x+1],rz[x]);
			    strcpy(temp,rz[x+1]);
			    strcpy(fecha[x],temp);
			    strcpy(fecha[x+1],fecha[x]);
			    strcpy(temp,fecha[x+1]);
			    swp=reg[x];
			    reg[x]=reg[x+1];
			    reg[x+1]=swp;
			    swap=cobro[x];
  			    cobro[x]=cobro[x+1];
			    cobro[x+1]=swap;
			    
			  }
			}for(x=0;x<i;x++){
			   printf("\t\tCliente #%d\n",reg[x]);
 			   printf("\tRazon Social: %s \n",rz[x]);
 			   printf("\tNombre: %s \n",name[x]);
 			   printf("\tCampania: %s \n", campana[x]);
 			   printf("\tTotal: %.2f$ \n\n\n",cobro[x]);
			}

		break;
		case 3:
			for(x=0;x<i;x++)
			printf("\t%d) %s \n",reg[x],rz[x]);

			printf("ingrese el # de la razon social para mas info\n");
			scanf("%d",&x);
			getc(stdin);
			printf("\t\tCliente #%d\n",reg[x]);
 			printf("\tRazon Social: %s \n",rz[x]);
 			printf("\tNombre: %s \n",name[x]);
 			printf("\tCampania: %s \n", campana[x]);
 			printf("\tTotal: %.2f$ \n\n\n",cobro[x]);

			
		break;
		case 4:
			for(x=0;x<i;x++)
			printf("\t%d) %s \n",reg[x],name[x]);

			printf("ingrese el # de cliente para mas info\n");
			scanf("%d",&x);
			getc(stdin);
			printf("\t\tCliente #%d\n",reg[x]);
 			printf("\tRazon Social: %s \n",rz[x]);
 			printf("\tNombre: %s \n",name[x]);
 			printf("\tCampania: %s \n", campana[x]);
 			printf("\tTotal: %.2f$ \n\n\n",cobro[x]);


		break;
		case 5:
			printf("Regresando a menu principal...\n\n");
		break;

}
break;

case 3:
	printf("gracias por usar el programa\nvuelva promto\n");
break;



}}}
while(op!=3);
}

