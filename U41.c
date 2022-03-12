#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
U41. Elabore un programa que realice la conversión de cm. a pulgadas. 1cm = 0.39737 pulgadas.
Conversión de Cm a pulgadas
1cm = 0.39737pul

*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
        float Cm=0, pul=0;
        system("cls");

        printf("Ingrese una distancia en cenntímetros (Cm) para hacer la conversión a pulgadas (pul). ");
        scanf("%f",&Cm);
        fflush(stdin);

        pul=(Cm*0.39737);

        printf("\n\n%.2f centímetros son %f pulgadas\n\n",Cm,pul);

        printf("\n\nSi desea salir presione s, si desea continuar presione c. \n\n");
        scanf("%c",&a);
        fflush(stdin);

    } while(a=='c');
return 0;
}
