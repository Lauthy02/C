#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
U40. Hacer un programa que halle el área de un círculo.
area de un circulo = pi*r^2

pi = 3,1415
r?
*/


int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
     system("cls");
     float pi=3.1415, r=0, area=0;
     int exp=2;

     printf("para averiguar el área de un círculo se necestia que ingrese el radio del mismo, este programa aplicará la fórmula "
            "pi*r^2 (r es el radio). \n\nIngrese el radio. ");
     scanf("%f",&r);
     fflush(stdin);

     area=(pi*(pow(r,exp)));

     printf("\n\nEl área de su círculo es %f",area);

     printf("\n\nSi desea salir presione s, si quere continuar presione c: ");
     scanf("%c",&a);
     fflush(stdin);

    }while(a=='c');

return 0;
}
