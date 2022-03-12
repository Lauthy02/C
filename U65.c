#include<stdio.h>
#include<string.h>

//U65. Desarrollar un programa que permita ingresar dos string y muestre cual es menor alfabéticamente.

int main()
{
    char nombre1[31], nombre2[31];

    printf("Ingrese primer nombre: ");
    gets(nombre1);

    printf("\nIngrese segundo nombre: ");
    gets(nombre2);

    if (strcmp(nombre1,nombre2)==0)
    {
        printf("\nLos dos nombres son iguales");
    }
    else
    {
        if (strcmp(nombre1,nombre2)<0)
        {
            printf("\n%s es menor alfabeticamente",nombre1);
        }
        else
        {
            printf("\n%s es menor alfabeticamente",nombre2);
        }
    }
    getch();
    return 0;
}
