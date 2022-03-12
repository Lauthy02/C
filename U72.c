#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U72. Desarrollar un programa que permita ingresar tres números enteros y mostrarlos por pantalla de mayor a menor.
    3 valores: abc acb bac bca cab cba
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    int a=0, b=0, c=0;
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
        printf("\nIngrese el 3er valor: ");
        scanf("%i",&c);
        fflush(stdin);

        if(a>b && b>c) //abc
        {
            printf("\n\nMayor a menor: %i, %i, %i",a,b,c);
        }
        else if(a>c && c>b) //acb
        {
            printf("\n\nMayor a menor: %i, %i, %i",a,c,b);
        }
        else if(b>a && a>c) //bac
        {
            printf("\n\nMayor a menor: %i, %i, %i",b,a,c);
        }
        else if(b>c && c>a) //bca
        {
            printf("\n\nMayor a menor: %i, %i, %i",b,c,a);
        }
        else if(c>a && a>b) //cab
        {
            printf("\n\nMayor a menor: %i, %i, %i",c,a,b);
        }
        else if(c>b && b>a) //cba
        {
            printf("\n\nMayor a menor: %i, %i, %i",c,b,a);
        }
        printf("\n\n\nSi desea salir presione s, si desea continuar presione c. \n\n");
        scanf("%c",&a2);
        fflush(stdin);
    }while(a2=='c');
    return 0;
}
