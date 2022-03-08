/*
U35. Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"spanish");
    int sal, saltotal;

    printf("Ingrese su salario: ");
    scanf("%i",&sal);
    fflush(stdin);

    saltotal=(sal+(sal*0.25));

    printf("Su salario es de %i ARS\n\n",saltotal);

    return 0;
}
