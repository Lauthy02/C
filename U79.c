#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

/*
U79. Desarrollar un programa que permita ingresar un mes (número) y mostrar el nombre del mes.
Ingresar número de mes y soltar el nombre
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");

    char let;

    do
    {
        system("cls");

        int num=0;

        //system("cls");

        printf("Ingrese el número del mes: ");
        scanf("%i",&num);
        fflush(stdin);

        switch(num)
        {
            case 1:
            {
                printf("El mes es enero.");
                break;
            }
            case 2:
            {
                printf("El mes es febrero.");
                break;
            }
            case 3:
            {
                printf("El mes es marzo.");
                break;
            }
            case 4:
            {
                printf("El mes es abril.");
                break;
            }
            case 5:
            {
                printf("El mes es mayo.");
                break;
            }
            case 6:
            {
                printf("El mes es junio.");
                break;
            }
            case 7:
            {
                printf("El mes es julio.");
                break;
            }
            case 8:
            {
                printf("El mes es agosto.");
                break;
            }
            case 9:
            {
                printf("El mes es septiembre.");
                break;
            }
            case 10:
            {
                printf("El mes es octubre.");
                break;
            }
            case 11:
            {
                printf("El mes es noviembre.");
                break;
            }
            case 12:
            {
                printf("El mes es diciembre.");
                break;
            }
            default:
            {
                printf("Número no válido.");
                break;
            }
        }
        printf("\n\n\nSi desea salir presione s, si desea continuar presione c. \n\n");
        scanf("%c",&let);
        fflush(stdin);
    }while(let=='c');
return 0;
}
