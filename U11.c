//U11. Desarrollar un programa que permita ingresar una cantidad que represente la temperatura en grados centígrados (Celsius) 
//y muestre por pantalla cuál sería su equivalente en grados Kelvin. (Pista: investigar la relación entre las dos escalas de temperatura).
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float celsius;
    float kelvin;
    celsius=0;
    kelvin=0;
    printf("Ingrese los grados celsius (C): ");
    scanf("%f",&celsius);
    kelvin=celsius+(273.15);
    printf("El valor equivalente de %.2f celsius en kelvin (K) es: %.2f\n\n",celsius,kelvin);
    system("pause");
    return 0;
}
