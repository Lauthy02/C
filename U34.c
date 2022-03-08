/*
U34. Un maestro desea saber qué porcentaje de hombres
y que porcentaje de mujeres hay en un grupo de estudiantes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"spanish");
    float Cm, Ch, porM, porH, tot;

    printf("¿Qué cantidad de mujeres hay en el curso?: ");
    scanf("%f",&Cm);
    fflush(stdin);
    printf("¿Qué cantidad de hombres hay en el curso?: ");
    scanf("%f",&Ch);
    fflush(stdin);

    tot=(Cm+Ch);
    porM=((Cm/100)*tot);
    porH=((Ch/100)*tot);

    printf("\n\nEl procentaje de mujeres es de %.2f%% y el porcentaje de hombres es de %.2f%%",porM, porH);
    return 0;
}
