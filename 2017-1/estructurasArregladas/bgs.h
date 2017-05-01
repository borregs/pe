#ifndef bgs_h
#define bgs_h

#include <stdio.h>
#include <ncurses.h>
#include <string.h>

typedef struct{
  char ct[50];
  float p;
  char desc[30];
}factura;

typedef struct{
  int cb;
  char desc[30];
  float pu;
  int ext;
}art;

art lista[200];
art null={0,"NULL",0.0,0};
factura regists[200];
int valida(int,int);
int registro(){

 static int x=0;
 int op=0,v=0;

  do{
    clear();
    printw("Introduce la descripcion del articulo:\n>>");
    getstr(lista[x].desc);
    printw("Introduce el codigo de barras:\n>>");
    scanw("%d",&v);
    lista[x].cb=valida(v,x);
    printw("Introduce el precio unitario:\n>>");
    scanw("%f",&lista[x].pu);
    printw("Introduce la existencia del articulo\n>>");
    scanw("%d",&lista[x].ext);
    
    printw("Desea introducir otro articulo?\n\t0) No\n\t1) Si\n>>");
    scanw("%d",&op);

    printw("[PRESIONE UNA TECLA]");
    getch();
    x++;
  }while(op);
return x;

};

int valida(int cbs,int i){
  
do{

  int x=0,op=0,flag=0;
  
  for(x=0;x<i;x++)
    if(cbs==lista[x].cb)
      flag=1;
  
  if(flag){
    printw("codigo de barras existe. digite otro:\n>>");
    scanw("%d",&cbs);
  }else{
    return cbs;
}}while(1);    

};

void consultag(int z){
  
  int x=0, y=0;
  art ordenada[200],temp;
  
  
  for(x=0;x<z;x++){
   ordenada[x]=lista[x];
  }
  
  for(x=1;x<z;x++){
    for(y=1;y<z;y++){
      if(strcasecmp(ordenada[y-1].desc,ordenada[y].desc)>0){
             temp=ordenada[y-1];
             ordenada[y-1]=ordenada[y];
             ordenada[y]=temp;

      }}}
  
  printw("Acontinuacion se despliega el registro ordenado\n\n");
  
  for(x=0;x<z;x++)
    printw("%s\t%d\t%d\t%.2f\n",ordenada[x].desc,ordenada[x].cb,ordenada[x].ext,ordenada[x].pu);
    
  printw("[PRESIONE UNA TECLA]");
  getch();

};

void consultab(int cbs, int c){

  int x=0, y=0;

  for(x=0;x<c;x++){
    if(cbs==lista[x].cb){
      printw("%s\t%d\t%d\t%.2f\n",lista[x].desc,lista[x].cb,lista[x].ext,lista[x].pu);
    }}
  
  printw("[PRESIONE UNA TECLA]");
  getch();
};

void bajio(int cbs, int c){
  int x=0,dabflag=0;
  
  for(x=0;x<c;x++){
	  if(cbs==lista[x].cb && lista[x].ext==0){
	    dabflag=1;
	    for(x=x;x<c-1;x++)
			lista[x]=lista[x+1];
	  }}	
	  
  if(dabflag){
	lista[c-1]=null;
	c--;
  }
  
  printw("Acontinuacion se despliega el registro resultante\n\n");  
  for(x=0;x<c;x++)
    printw("%s\t%d\t%d\t%.2f\n",lista[x].desc,lista[x].cb,lista[x].ext,lista[x].pu);
  
  printw("[PRESIONE UNA TECLA]");
  getch();

};
	
float ventas(int cbs, int cant, char clt[50], int *n,int c){
	int x=0,rekt=1;
	static int facts=0;
	float m;	

	
	for(x=0;x<c;x++){
	  if(cbs==lista[x].cb && lista[x].ext>=cant){
	    m=((lista[x].pu*cant)*1.00);
	    strcpy(regists[facts].ct,clt);
	    regists[facts].p=m;
	    strcpy(regists[facts].desc,lista[x].desc);
	    lista[x].ext-=cant;
	    printw("Se genero una factura con folio #%d para el cliente %s\n\n'",facts+1,clt);
	    (*n)++;
	    rekt=0;
	  }
	}
	
	if(rekt)
		printw("El articulo con codigo de barras %d no fue hallado o no existen suficientes unidades para satisfacer la venta\n",cbs);
	else
		facts++;
	
	printw("[PRESIONE UNA TECLA]");
    getch();
	
	return m;

};

void consultaf(float t, int c){
	
	int x=0;
	
	printw("Acontinuacion se imprimen las facturas registradas:\n\n");
	printw("Folio)\tNombre\tSubTotal\tDescripcion\n");
	
	for(x=0;x<c;x++)
		printw("  %d)\t%s\t%.2f\t\t%s\n",x+1,regists[x].ct,regists[x].p,regists[x].desc);
		
	printw("\nEl monto total de las ventas registradas fue de: %.2f\n",t);
    
    printw("[PRESIONE UNA TECLA]");
    getch();


};

void consultan(char nom[50], int c){
	int x=0,flagman=1;
	
	for(x=0;x<c;x++)
	  if(strcasecmp(nom,regists[x].ct)==0){
		printw("  %d)\t%s\t%.2f\t%s\n",x+1,regists[x].ct,regists[x].p,regists[x].desc);
	    flagman=0;
	  }
	  
	if(flagman)
	  printw("No se encontro al cliente %s en el registro de facturas. \n Verifique su ortografia\n",nom);
    printw("[PRESIONE UNA TECLA]");
    getch();		
	
};

#endif
