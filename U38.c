#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
U38. Elabore un programa que permita ingresar el precio y la cantidad de un artículo a comprar. 
Calcular el total a pagar. (Considerar el IVA 21%).
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
     int PrecUni=0, Tot=0, cant=0, totalprod=0;

     printf("Ingrese el precio unitario de lo que va a comprar (se le sumará IVA 21%%). ");
     scanf("%i",&PrecUni);
     fflush(stdin);
     printf("\nIngrese la cantidad que va a comprar de ese producto. ");
     scanf("%i",&cant);
     fflush(stdin);

     totalprod=(PrecUni*cant);
     Tot=(totalprod*1.21);

     printf("\n\nEl precio total a pagar es: %i \n\n",Tot);

     printf("\n\nSi desea salir presione s, si quere continuar presione c: ");
     scanf("%c",&a);

    } while(a=='c');
    return 0;
}
