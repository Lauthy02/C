#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
U39. Hacer un programa que muestre la raiz cuadrada de cualquer numero ingrezado
*/

int main()
{
    char a;
    do
    {
    setlocale(LC_ALL,"spanish"); system("color F0");
    float base;
    float indice;

    printf("Ingrese el número que quiera hacer la raíz: ");
    scanf("%f",&base);
    fflush(stdin);
    printf("Ingrese el índice de la raíz: ");
    scanf("%f",&indice);
    fflush(stdin);

    printf("La raíz %.2f de %.2f da como resultado: %.3f \n\n",indice,base,pow(base,(1.0/indice)));

    printf("\n\nSi desea salir presione s, si quere continuar presione c: ");
    scanf("%c",&a);
    fflush(stdin);

    } while(a=='c');
return 0;
}
