//U31. Una tienda ofrece un descuento del 25% sobre el total de la compra y un cliente desea saber cuánto deberá pagar finalmente por su compra.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//25% de descuento sobre el total de la compra
// saber cuanto será el pago final

int main()
{
    setlocale(LC_ALL,"spanish");
    int val, tot;
    printf("¿Cuánto es el monto total de la compra?: ");
    scanf("%i",&val);

    tot=(val-(val*0.25));

    printf("\n\nDeberá pagar %i ARS\n\n",tot);
    return 0;
}
