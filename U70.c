#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U70. Desarrollar un programa que permita ingresar dos números enteros y mostrarlos por pantalla de mayor a menor.

    2 valores: ab ba
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    int a=0, b=0;
    char a2;

    do
    {
        system("cls");

        printf("Ingrese el 1er valor: ");
        scanf("%i",&a);
        fflush(stdin);
        printf("\nIngrese el 2do valor: ");
        scanf("%i",&b);
        fflush(stdin);

        if(a>b) //ab
        {
            printf("\n\nMayor a menor: %i, %i",a,b);
        }
        else if(b>a) //ba
        {
            printf("\n\nMayor a menor: %i, %i",b,a);
        }

        printf("\n\n\nSi desea salir presione s, si desea continuar presione c. \n\n");
        scanf("%c",&a2);
        fflush(stdin);
    }while(a2=='c');
    return 0;
}
