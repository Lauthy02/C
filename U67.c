#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U67. Desarrollar un programa que permita ingresar un valor entero y determine si es par o impar.

2*n+1= impar
2*n-1= impar

n*2= par
Al ser divididos entre 2, todos los números pares darán como resto 0.
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    int numero=0;

    printf("Escribe un número: ");
    scanf("%i", &numero);

    if (numero % 2 == 0)
    {
        printf("Es par");
    }
    else
    {
        printf("Es impar");
    }
    return 0;
}
