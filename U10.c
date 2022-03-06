#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float kilogramos;
    float gramos;
    kilogramos=0;
    gramos=0;
    printf("Ingrese el valor en kilogramos: ");
    scanf("%f",&kilogramos);
    gramos=kilogramos*1000;
    printf("El valor equivalente en gramos es: %.2f\n\n",gramos);
    system("pause");
    return 0;
}
