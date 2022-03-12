#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U64. Desarrollar un programa que permita ingresar el nombre y apellido de una persona y muestre concatenado el nombre y el apellido,
así como el apellido y el nombre.
En ambos casos los valores deben estar separados por un espacio en blanco
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");

    char nombre[31];
    char apellido[31];
    char nomape[62];
    char apemnom[62];

    printf("Ingrese el nombre: ");
    gets(nombre);

    printf("Ingrese el apellido: ");
    gets(apellido);

    strcpy(nomape,nombre);
    strcat(nomape," ");
    strcat(nomape,apellido);

    strcpy(apemnom,apellido);
    strcat(apemnom," ");
    strcat(apemnom,nombre);

    printf("%s",nomape);
    printf("\n%s",apemnom);
    getch();
    return 0;
}
