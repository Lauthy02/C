//U15. Calcula el precio de un boleto de viaje, tomando en cuenta el número de kilómetros que se van a recorrer, siendo el precio de pesos 10,50 por Km. 
//El usuario ingresa cuántos kilómetros va a recorrer.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");

    float dinero,distancia;
    dinero=0;
    distancia=0;

    printf("Ingrese la cantidad de distancia que va a recorrer (en kilómetros): ");
    scanf("%f",&distancia);

    dinero=(distancia*10.50);

    printf("El boleto le saldrá $ %f \n \n",dinero);
    system("pause");
    return 0;
}
