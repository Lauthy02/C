//U24. Un constructor sabe que necesita 0,5 metros cúbicos de arena por metro cuadrado de revoque a realizar. 
//Hacer un programa donde ingrese las medidas de una pared (largo y alto) expresada en metros y obtenga la cantidad de arena necesaria para revocarla.
#include <stdio.h>
#include <locale.h>
#include <math.h>
 /*
 sabe que se necesita 0.5m^3 de arena por metro cuadrado

 1m^2 por 0.5m^3
 xm^2 por ?m^3

 m^2 = alto*largo

 */
 
int main()
{
    setlocale(LC_ALL,"spanish");
    float largo, alto, mcua, mcub; //mcua = Metro cuadrado y mcub = Metro cúbico

    printf("Ingrese el largo en metros: ");
    scanf("%f",&largo);

    printf("Ingrese el alto en metros: ");
    scanf("%f",&alto);

    mcua=(largo*alto);
    mcub=(mcua*0.5);

    printf("\n\n\nSe necesitan %.2f m^3 de arena para una pared de %.2f m^2 \n\n",mcub, mcua);
    system("pause");
    return 0;
}
