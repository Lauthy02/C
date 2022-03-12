#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U75. Desarrollar un programa que permita ingresar cuatro números enteros y mostrarlos por pantalla de menor a mayor.
        4 valores: abcd abdc acbd acdb adcb adbc
                   bacd badc bcda bcad bdca bdac
                   cdab cdba cabd cadb cbad cbda
                   dabc dacb dbac dbca dcba dcab
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a2;

    do
    {
        int a=0, b=0, c=0, d=0;

        system("cls");

        printf("Ingrese el 1er valor: ");
        scanf("%i",&a);
        fflush(stdin);
        printf("\nIngrese el 2do valor: ");
        scanf("%i",&b);
        fflush(stdin);
        printf("\nIngrese el 3er valor: ");
        scanf("%i",&c);
        fflush(stdin);
        printf("\nIngrese el 4to valor: ");
        scanf("%i",&d);
        fflush(stdin);
//------------------------CON A---------------------------------------------------------
        if(a<b && b<c && c<d) //abcd
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",a,b,c,d);
        }
        else if(a<b && b<d && d<c) //abdc
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",a,b,c,d);
        }
        else if(a<c && c<b && b<d) //acbd
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",a,c,b,d);
        }
        else if(a<c && c<d && d<b) //acdb
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",a,c,d,b);
        }
        else if(a<d && d<c && c<b) //adcb
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",a,d,c,b);
        }
        else if(a<b && d<b && b<c) //adbc
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",a,d,b,c);
        }
//------------------------CON B---------------------------------------------------------
        else if(b<a && a<c && c<d) //bacd
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",b,a,c,d);
        }
        else if(b<a && a<d && d<c) //badc
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",b,a,d,c);
        }
        else if(b<c && c<d && d<a) //bcda
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",b,c,d,a);
        }
        else if(b<c && c<a && a<d) //bcad
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",b,c,a,d);
        }
        else if(b<d && d<c && c<a) //bdca
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",b,d,c,a);
        }
        else if(b<d && d<a && a<c) //bdac
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",b,d,a,c);
        }
//------------------------CON C---------------------------------------------------------
        else if(c<d && d<a && a<b) //cdab
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",c,d,a,b);
        }
        else if(c<d && d<b && b<a) //cdba
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",c,d,b,a);
        }
        else if(c<a && a<b && b<d) //cabd
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",c,a,b,d);
        }
        else if(c<a && a<d && d<b) //cadb
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",c,a,d,b);
        }
        else if(c<b && b<a && a<d) //cbad
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",c,b,a,d);
        }
        else if(c<b && b<d && d<a) //cbda
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",c,b,d,a);
        }
//------------------------CON D---------------------------------------------------------
        else if(d<a && d<a && a<b) //dabc
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",d,a,d,c);
        }
        else if(d<a && d<b && b<a) //dacb
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",d,a,c,d);
        }
        else if(d<b && a<b && b<d) //dbac
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",d,b,a,c);
        }
        else if(d<b && a<d && d<b) //dbca
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",d,b,c,a);
        }
        else if(d<c && b<a && a<d) //dcba
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",d,c,b,a);
        }
        else if(d<c && b<d && d<a) //dcab
        {
            printf("\n\nMenor a mayor: %i, %i, %i, %i",d,c,a,b);
        }

        printf("\n\n\nSi desea salir presione s, si desea continuar presione c. \n\n");
        scanf("%c",&a2);
        fflush(stdin);
    }while(a2=='c');
    return 0;
}
