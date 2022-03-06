//U12. Desarrollar un programa que permita ingresar una cantidad que represente la temperatura en grados centígrados (Celsius) y muestre por pantalla cuál sería su equivalente en grados Fahrenheit. 
//(Pista: investigar la relación entre las dos escalas de temperatura)
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float celsius;
    float fahrenheit;
    celsius=0;
    fahrenheit=0;
    printf("Ingrese los grados celsius (C): ");
    scanf("%f",&celsius);
    fahrenheit=((celsius*9/5)+32);
    printf("El valor equivalente de %.2f Celsius (C) en Fahrenheit (F) es: %.2f\n\n",celsius,fahrenheit);
    system("pause");
    return 0;
}
