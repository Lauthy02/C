//U13. Desarrollar un programa que permita ingresar una cantidad que represente la temperatura en grados centígrados (Celsius) y 
//muestre por pantalla cuál sería su equivalente en grados Rankine. (Pista: investigar la relación entre las dos escalas de temperatura).
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float celsius;
    float rankie;
    celsius=0;
    rankie=0;
    printf("Ingrese los grados celsius (C): ");
    scanf("%f",&celsius);
    rankie=celsius*9/5+491.67;
    printf("El valor equivalente de %.2f Celsius (C) en Rankie (R) es: %.2f\n\n",celsius,rankie);
    system("pause");
    return 0;
}
