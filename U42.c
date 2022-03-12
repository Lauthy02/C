#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
U42. Elabore un programa que realice la conversión de libras a kilogramos 1 Kg. = 2.2046 libras.
Conversión de libras a kilogramos
1kg = 2.2046lib

*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
        float K=0, Lib=0;
        system("cls"); //limpiar pantalla

        printf("Ingrese un valr en kilogramos para hacer la conversión a libras. ");
        scanf("%f",&K);
        fflush(stdin);

        Lib=(K*2.2046);

        printf("\n\n%.2f Kilogramos son %f libras\n\n",K,Lib);

        printf("\n\nSi desea salir presione s, si desea continuar presione c. \n\n");
        scanf("%c",&a);
        fflush(stdin);
    }while(a=='c');
return 0;
}
