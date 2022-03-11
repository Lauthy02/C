#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include <stdbool.h>

char matriz[5][5], matriz_1[5][5], matriz_2[5][5], matriz_3[5][5], matriz_4[7][3], matriz_5[5][5], matriz_6[5][5];
int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");

    printf("Matriz llena de asteriscos\n\n");
    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            matriz[a][b]='*';
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

//***********************************************************************************************************************************************************************

    printf("Matriz llena con asteriscos en diagonal (superior IZQUIERDA a inferiror DERECHA)\n\n");
    for(int a=0;a<5;a++)//fila
    {
        matriz_1[a][a]='*';
    }

    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            printf("%2c ", matriz_1[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");

//***********************************************************************************************************************************************************************

    printf("Matriz llena con asteriscos en diagonal (superior DERECHA a inferiror IZQUIERDA)\n\n");
    for(int a=0;a<5;a++)//fila
    {
        matriz_2[a][4-a]='*';
    }

    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            printf("%2c ", matriz_2[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");

//***********************************************************************************************************************************************************************

    printf("Matriz llena con asteriscos en diagonal (inferior IZQUIERDA a CENTRO)\n\n");
    for(int a=0;a<5;a++)//fila
    {
        if(a>2)
        {
            matriz_3[a][4-a]='*';
        }
        else
        {
            matriz_3[2][4-a]='*';
        }
    }

    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            printf("%2c ", matriz_3[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");

//***********************************************************************************************************************************************************************

    printf("Matriz llena con asteriscos en zigzag (empieza en superior DERECHA)\n\n");
    int fila_=0;
    for(int col=2; col >=0; col--)
    {
        matriz_4[fila_][col]='*';
        fila_++;
    }
    for(int col_1=0+1; col_1 <=2; col_1++)
    {
        matriz_4[fila_][col_1]='*';
        fila_++;
    }
    for(int col_2=2-1; col_2 >=0; col_2--)
    {
        matriz_4[fila_][col_2]='*';
        fila_++;
    }

    for(int a=0;a<7;a++)//fila
    {
        for(int b=0;b<3;b++)//columna
        {
            printf("%2c ", matriz_4[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");

//***********************************************************************************************************************************************************************

    printf("Matriz llena con asteriscos en forma de Y \n\n");
    for(int a=0; a<=1; a++)
    {
        matriz_5[a][a]='*';
    }
    for(int c=0; c<=1; c++)
    {
        matriz_5[c][4-c]='*';
    }
    int b=2;
    for(int a=2; a<=4; a++)//fila
    {
        matriz_5[a][b]='*';
    }
    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            printf("%2c ", matriz_5[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");

//***********************************************************************************************************************************************************************

    printf("Matriz llena con asteriscos en forma de TORRE \n\n");

    int b_=2;
    for(int a=0; a<=2; a++)//fila
    {
        matriz_6[a][b_]='*';
    }
    for(int a=3; a<=4; a++)
    {
        matriz_6[a][a]='*';
    }
    for(int c=3; c<=4; c++)
    {
        matriz_6[c][4-c]='*';
    }

    for(int a=0;a<5;a++)//fila
    {
        for(int b=0;b<5;b++)//columna
        {
            printf("%2c ", matriz_6[a][b]);
        }
        printf("\n");
    }
    printf("\n\n\n\n");
    return 0;
}
