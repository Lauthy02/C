//U28. Leer tres números enteros de un dígito y almacenarlos en una sola variable que contenga a esos tres dígitos.
//Por ejemplo si A=8 y B=6 y C=1 entonces X=861.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
A centena
B decena
C unidad
*/

int main()
{
    setlocale(LC_ALL,"spanish");
    int A, B, C, D;
    printf("Ingrese tres números enteros\nEl primero: ");
    scanf("%i",&A);
    fflush(stdin);

    printf("El segundo: ");
    scanf("%i",&B);
    fflush(stdin);

    printf("El tercero: ");
    scanf("%i",&C);
    fflush(stdin);

   printf("El número es: %i%i%i",A,B,C);
    return 0;
}
