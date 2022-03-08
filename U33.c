/*
U33. Un alumno desea saber cuál será su calificación promedio final en la
materia Programación Estructurada. Dicha calificación se compone de
tres exámenes parciales.

igresar nota de 3 parciales y sacar promedio
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float P1, P2, P3, prom;

    printf("¿Cuánto se sacó en el primer parcial?: ");
    scanf("%f",&P1);
    fflush(stdin);
    printf("¿Cuánto se sacó en el segundo parcial?: ");
    scanf("%f",&P2);
    fflush(stdin);
    printf("¿Cuánto se sacó en el tercer parcial?: ");
    scanf("%f",&P3);
    fflush(stdin);

    prom=((P1+P2+P3)/3);

    printf("\n\nUsted tiene una nota final de %.2f.\n",prom);
    return 0;
}
