#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U68. Desarrollar un programa que permita ingresar un valor entero al usuario y determine si es positivo o negativo.
si es menor que 0 es negativo
si es mayor a 0 es positivo
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    int numero=0;

    printf("Escribe un número: ");
    scanf("%i", &numero);


    if(numero>0)
    {
        printf("Es positivo");
    }
    else
    {
        if(numero==0)
        {
            printf("Es neutro");
        }
        else
        {
            printf("Es negativo");
        }

    }
    return 0;
}
