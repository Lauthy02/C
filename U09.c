//U9. Desarrollar un programa que permita ingresar un número y muestre en pantalla el resultado de calcular la raíz cuadrada de número ingresado.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float base;
    float indice;
    printf("Ingrese el número que quiera hacer la raíz: ");
    scanf("%f",&base);
    printf("Ingrese el índice de la raíz: ");
    scanf("%f",&indice);
    printf("La raíz %.2f de %.2f da como resultado: %.3f \n\n",indice,base,pow(base,(1.0/indice)));
    //la función pow hace lo de elevar un número por otro
    system("pause");
    return 0;
}
