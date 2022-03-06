//U30. Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero ganará después de un año 
//si el banco paga a razón de 5,5% mensual.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//5.5% mensual
// saber cuanto ganará después de un año

int main()
{
    setlocale(LC_ALL,"spanish");
    int D, Dint;
    printf("¿Cuánto dinero desea invertir?: ");
    scanf("%i",&D);

    Dint=(D+(D*0.055));

    printf("Al plazo de un año usted obtendrá %i ARS\n\n",Dint);
    return 0;
}
