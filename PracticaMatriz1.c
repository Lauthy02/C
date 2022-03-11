#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <stdbool.h>

char matriz[5][5], matriz1[5][5], matriz2[5][5];
int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");

    printf("Matriz llena de asteriscos\n\n");
    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            matriz[a][b]=("*");
        }
    }

    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            printf("%2c ", matriz[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");

    printf("Matriz llena con asteriscos en diagonal (superior IZQUIERDA a inferiror DERECHA)\n\n");

    for(int a=0;a<5;a++)//fila
    {
        matriz1[a][a]=("*");
    }

    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            printf("%2c ", matriz1[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");

    printf("Matriz llena con asteriscos en diagonal (superior DERECHA a inferiror IZQUIERDA)\n\n");
    for(int a=0;a<5;a++)//fila
    {
        matriz2[a][4-a]=("*");
    }

    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            printf("%2c ", matriz2[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");
    return 0;
}
