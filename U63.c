#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//U63. Desarrollar un programa que permita ingresar dos string y muestre en pantalla cuanto mide cada uno en bytes.

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    int y=0, x=0;
    char a;
    do
    {
        system("cls");
        char palabra1[20], palabra2[20];
        int y, x;

        printf("Ingrese la primer palabra: ");
        gets(palabra1);
        fflush(stdin);

        printf("\n\nIngrese la segunda palabra: ");
        gets(palabra2);
        fflush(stdin);

        y=sizeof(palabra1);
        x=sizeof(palabra2);

        printf("\n\nLa primer palabra mide %i bytes\nLa segunda palabra mide %i bytes",y,x);

        printf("\n\nSi desea continuar escriba c si desea salir escriba s. \n\n");
        scanf("%c",&a);
        fflush(stdin);
    }while(a=='c');
return 0;
}
