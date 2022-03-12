#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>

/*
U82. Desarrollar un programa que permita ingresar una fecha (dd/mm/aaaa) y comprobar si es correcta.
Para que una fecha sea correcta es necesario:
    a. Que el mes esté entre 1 y 12.
    b. Dependiendo del mes que sea, el día debe estar dentro de los límites válidos.
        Los meses que tienen 31 días son 1, 3, 5, 7, 8, 10 y 12. Los meses de 30 días son 4, 6, 9 y 11.
        El mes de 28 días es 2.
    c. Opcional: Considerar que si el año es bisiesto el mes 2 puede tener 29 días.


que ingrese dia mes año y comprobar si es correcto.
--> el mes debe estar entre 1 y 12
dependiendo del mes que sea, el dia debe estar dentro de los limites validos
--> los meses con 31 días son 1, 3, 5, 7, 8, 10 y 12.
--> los meses con 30 días son 4, 6, 9, y 11
--> el mes con 28 días es 2
Opcional: cosiderar que si el año es bisiesto el mes 2 puede tener 29 días
*/

int dia=0, mes=0, ano=0, resto1=0, resto2=0, resto3=0, restoTot=0, Dmax=0;

bool EsBisiesto(ano)
{
    resto1=(ano%4);
    resto2=(ano%100);
    resto3=(ano%400);
    restoTot=(resto1+resto2+resto3);
    if(restoTot==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int DiaMax(mes)
{
    if(mes>=1 && mes<=12)
    {
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        {
            Dmax=31;
        }
        else
        {
            if(mes==2)
            {
                if(EsBisiesto)
                {
                    Dmax=29;
                }
                else
                {
                    Dmax=28;
                }
            }
            else
            {
               Dmax=30;
            }
        }
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char let;
    do
    {
        system("cls");
        dia=0, mes=0, ano=0, resto1=0, resto2=0, resto3=0, restoTot=0, Dmax=0;

        printf("\nIndique el día: ");
        scanf("%i",&dia);
        fflush(stdin);
        printf("\nIndique el mes: ");
        scanf("%i",&mes);
        fflush(stdin);
        printf("\nIndique el año: ");
        scanf("%i",&ano);
        fflush(stdin);

        if(ano>0)
        {
            EsBisiesto(ano);
            DiaMax(mes);
            if(dia>=1 && dia<=Dmax)
            {
                printf("\nCORRECTO\n\n\n");
            }
            else
            {
                printf("\nERROR\n\n\n");
            }
        }
        else
        {
            printf("\nAño no válido.\n\n\n");
        }
     printf("Si desea continuar presione c, si desea salir presione s.\n");
     scanf("%c",&let);
     fflush(stdin);
    }while(let=='c');
    return 0;
}
