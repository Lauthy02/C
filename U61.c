#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//U61. Desarrollar un programa que permita ingresar un string de 20 caracteres y lo muestre por pantalla.

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
        system("cls");
        char palabra[20];

        printf("Ingrese las palabras que quiera, tenga en cuenta que solo se mostrarán 20 caracteres\nSus palabras: ");
        fgets(palabra,20,stdin); //fgets(variable,la cantidad de caracteres,sdin = caracteres standard), gets no
        fflush(stdin);           //respeta los 20 caracteres

        printf("\n\nSe mostrará en pantalla: %s \n\n",palabra);

        printf("\n\nSi desea continuar escriba c si desea salir escriba s. \n\n");
        scanf("%c",&a);
        fflush(stdin);
    }while(a=='c');
return 0;
}
