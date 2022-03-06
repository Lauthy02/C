//U29. Obtener la edad de una persona en meses, si se ingresa su edad en años y meses.
//Ejemplo: Ingresado 3 años 4 meses debe mostrar 40 meses.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//1 año = 12 meses

int main()
{
    setlocale(LC_ALL,"spanish");
    int edad, edA, edM;

    printf("Ingrese los años: ");
    scanf("%i",&edA);
    fflush(stdin);
    printf("Ingrese los meses: ");
    scanf("%i",&edM);
    fflush(stdin);

    edad=((edA*12)+edM);

    printf("\n\nSu edad en meses es: %i ",edad);
    return 0;
}
