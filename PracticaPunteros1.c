#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    //El & me da la dirección de memoria de la variable.
    //El * hace que el valor que tiene adentro la variable sea interpretado como una dirección de memoria

    //VARIABLES
    int X = 0;
    int Z = 0;
    int Res = 0;
    //VATIABLES TIPO PUNTERO
    int* DirX = &X;
    int* DirZ = &Z;
    int* DirRes= &Res;

    printf("Su mar X con Z \n");
    printf("Ingrese el valor de X: ");
    fflush(stdin);
    scanf("%i",&X);
    printf("Ingrese el valor de Z: ");
    fflush(stdin);
    scanf("%i",&Z);

    printf("\n\nEl valor que tiene X es: %i\n",X);
    printf("El valor donde está X en memoria es: %u\n\n",DirX);

    printf("El valor que tiene Z es: %i\n",Z);
    printf("El valor donde está Z en memoria es: %u\n\n",DirZ);

    Res= *DirX+*DirZ;

    printf("La suma de los dos valores es: %i\n",Res);
    printf("El valor donde está Res en memoria es: %u\n\n",DirRes);
    return 0;
}
