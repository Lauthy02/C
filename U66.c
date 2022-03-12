#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U66. Desarrollar un programa que permita ingresar dos string y un número n que representa la cantidad de caracteres a considerar
en el cálculo que permite determinar y mostrar cual en mayor alfabéticamente.
*/

int longitud=0;
char nombre1[31], nombre2[31], nombre1pros[31], nombre2pros[31];


int ProcesoNombre1()
{
    for(int x=0;x<=longitud;x++)
    {
        nombre1pros[x] = nombre1[x];
    }
    return 0;
}

int ProcesoNombre2()
{
    for(int y=0;y<=longitud;y++)
    {
        nombre2pros[y] = nombre2[y];
    }
    return 0;
}


int ProcesoComparacion()
{
    if (strcmp(nombre1pros,nombre2pros)==0)
    {
        printf("\nLos dos nombres son iguales");
    }
    else
    {
        if (strcmp(nombre1pros,nombre2pros)>0)
        {
            printf("\n%s es mayor alfabeticamente",nombre1pros);
        }
        else
        {
            printf("\n%s es mayor alfabeticamente",nombre2pros);
        }
    }
    getch();
    return 0;
}

int main()
{


    printf("Escriba el nombre 1: ");
    gets(nombre1);

    printf("Escriba el nombre 2: ");
    gets(nombre2);

    printf("Cual quiere que sea la longitud: ");
    scanf("%i",&longitud);

    if(longitud!=0)
    {
        longitud--;
        ProcesoNombre1();
        ProcesoNombre2();
        ProcesoComparacion();
    }
    return 0;
}
