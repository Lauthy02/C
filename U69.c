#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U69. Desarrollar un programa que permita ingresar un valor, si el valor es positivo, pedir un segundo valor
y calcular la suma, resta y producto de ambos. Mostrar los resultados por pantalla.

si es menor que 0 es negativo
si es mayor a 0 es positivo
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    int numero[5];
    char a;

    do
    {
        system("cls");

        for(int x=0;x<5;x++)
        {
            numero[x]=0;
        }

        printf("Escribe un número: ");
        scanf("%i", &numero[0]);
        fflush(stdin);

        if(numero[0]>0)
        {

            printf("Es positivo");

            printf("\n\nIngrese un valor mas para calcular la suma, la resta y el producto de ambos: ");
            scanf("%i",&numero[1]);
            fflush(stdin);

            numero[2]= (numero[0]+numero[1]);
            numero[3]= (numero[0]-numero[1]);
            numero[4]= (numero[0]*numero[1]);

            printf("\n\nLa suma de ambos es %i, la resta de ambos es %i, el producto de ambos es %i.\n\n",numero[2],numero[3],numero[4]);

        }
        else
        {
            if(numero[0]==0)
            {
                printf("Es neutro");
            }
            else
            {
                printf("Es negativo");
            }

        }
        printf("\n\nSi desea salir presione s, si desea continuar presione c. \n\n");
        scanf("%c",&a);
        fflush(stdin);
    }while(a=='c');
    return 0;
}
