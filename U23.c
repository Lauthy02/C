//U23. Desarrolle un programa que, dado el número de horas trabajadas por un empleado y el sueldo por hora, calcule el sueldo total de ese empleado. 
//Tenga en cuenta que las horas extras se pagan el doble.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int sph, hs, hsex, paghs, paghsex, tot;
    printf("Ingrese el sueldo por hora: ");
    scanf("%i",&sph);
    fflush(stdin);

    printf("\n\n\nIngrese la cantidad de horas trabajadas: ");
    scanf("%i",&hs);

    printf("Ingrese la cantidad de horas extra trabajadas: ");
    scanf("%i",&hsex);

    paghs=(sph*hs);
    paghsex=((sph*2)*hsex);
    tot=(paghs+paghsex);

    printf("\n\n\nSu sueldo será de %i ARS \n\n",tot);
    system("pause");
    return 0;
}
