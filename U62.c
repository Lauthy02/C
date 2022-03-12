#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

//U62. Desarrollar un programa que permita ingresar dos string y muestre en pantalla cuanto mide cada uno.

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
        system("cls");
        char palabra1[20], palabra2[20];
        int y=0, x=0;

        printf("Ingrese la primer palabra, tenga en cuenta que solo se mostrarán 20 caracteres.\nSu palabra: ");
        fgets(palabra1,20,stdin);
        fflush(stdin);

        printf("\n\nIngrese la segunda palabra, tenga en cuenta que solo se mostrarán 20 caracteres.\nSu palabra: ");
        fgets(palabra2,20,stdin);
        fflush(stdin);

        y=strlen(palabra1);
        x=strlen(palabra2);

        printf("\n\nLa primer palabra mide %i dígitos\nLa segunda palabra mide %i dígitos\nTenga en cuenta que en el string se guarda el caracter de finalización, entonces contará 1 dígito más.",y,x);
        printf("\n\nLa primer palabra mide %i dígitos\nLa segunda palabra mide %i dígitos",y-1,x-1);

        printf("\n\nSi desea continuar escriba c si desea salir escriba s. \n\n");
        scanf("%c",&a);
        fflush(stdin);
    }while(a=='c');
return 0;
}
