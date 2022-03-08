/*
U31 Un vendedor recibe un sueldo base, más un 10% extra por comisión de sus ventas,
el vendedor desea saber cuánto dinero obtendrá por concepto de comisiones por
las ventas que realiza en el mes y el total que recibirá en el mes tomando
en cuenta su sueldo base y comisiones.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int Sbase, vtas, comex, tot;
    Sbase=10000;

    printf("¿Cuantas ventas realizó?: ");
    scanf("%i",&vtas);

    comex=((10000*0.10)*vtas);
    tot=(Sbase+comex);

    printf("\n\nRecibirá un total de comisiones extras de %i ARS.\nDando así un sueldo total de %i ARS.\n",comex,tot);
    return 0;
}
