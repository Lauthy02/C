#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U77. Desarrollar un programa que permita ingresar un año y determinar si es bisiesto. 
Un año es bisiesto si es divisible por 4 y no lo es por 100, o si es divisible por 400.

    1- Si el año es uniformemente divisible por 4, vaya al paso 2. De lo contrario, vaya al paso 5.
    2- Si el año es uniformemente divisible por 100, vaya al paso 3. De lo contrario, vaya al paso 4.
    3- Si el año es uniformemente divisible por 400, vaya al paso 4. De lo contrario, vaya al paso 5.
    4- El año es un año bisiesto (tiene 366 días).
    5- El año no es un año bisiesto (tiene 365 días).

    Si el año es uniformemente divisible por 4, por 100 y por 400, es un año bisiesto.
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
        system("cls");
        int ano=0, resto1=0, resto2=0, resto3=0;;

        printf("Ingrese el año que desea calcular: ");
        scanf("%i",&ano);
        fflush(stdin);

        resto1=(ano%4);
        resto2=(ano%100);
        resto3=(ano%400);

        if(resto1==0)
            {
                if(resto2==0)
                    {
                        if(resto3==0)
                            {
                                printf("\nEs un año bisiesto.");
                            }
                        else
                            {
                                printf("\nNo es un año bisiesto.");
                            }
                    }
                else
                    {
                        printf("\nNo es un año bisiesto.");
                    }
            }
        else
            {
                printf("\nNo es un año bisiesto.");
            }
        printf("\n\nSi desea continuar escriba c si desea salir escriba s. \n\n");
        scanf("%c",&a);
        fflush(stdin);
    }while(a=='c');
return 0;
}
