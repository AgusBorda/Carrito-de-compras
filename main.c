#include <stdio.h>
#include <stdlib.h>
void menu();
int opc;
float sumaTotal;
float listaPrecios[]={50,10,80,0};
char cupon[15]= "verano";
char cuponuser[15];

void detallesCompra();
void menu();

int main()
{
    menu();
    return 0;
}
void menu(){

   printf("0. Monitor \t$50 USD ");
   printf("\n1. Teclado \t$10 USD ");
   printf("\n2. Impresora \t$80 USD");
   printf("\n3. Finalizar la compra");
   do
    {
   printf("\nDigite el numero del articulo: ");
   scanf("%i", &opc);
   sumaTotal+= listaPrecios[opc];
   }
   while (opc!=3);
   if (opc==3){
   detallesCompra();}

}
detallesCompra(){
 int tieneCupon;
 printf("\nTenes un cupon de descuento?: SI-1 | NO-0");
 scanf("%i", &tieneCupon);
 if(tieneCupon==0){
    printf("\nNo tienes un cupon, debes pagar el total de %f ", sumaTotal);
 }
 if (tieneCupon==1){
    printf("\nDigite el cupon de descuento: ");
    scanf("%s", &cuponuser);

    if(strcmp(cupon,cuponuser)==0){
    float sumatotalDescuento = sumaTotal * 0.90;
    printf("\nTu descuento a sido aplicado, recibiras un descuento del 10 porciento");
    printf("\nPrecio anterior: %f   Nuevo precio: %f", sumaTotal, sumatotalDescuento);
 }
 else{
    printf("\nEl cupon digitado es INVALIDO, Precio a pagar :%f", sumaTotal);
 }
}
}
