//U8. Desarrollar un programa que permita ingresar dos números y muestre en pantalla el resultado de elevar el primer número a la potencia representada por el segundo.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float base;
    float exponente;
    printf("Ingrese el número que quiera elevar (la base): ");
    scanf("%f",&base);
    printf("Ingrese el exponente: ");
    scanf("%f",&exponente);
    printf("El número %.2f elevado a %.2f da como resultado: %.3f \n\n",base,exponente,pow(base,exponente));
    //la función pow hace lo de elevar un número por otro
    system("pause");
    return 0;
}
