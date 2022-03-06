//U21. Ídem al anterior pero el usuario ingresa el porcentaje de cada área. También nos solicitan que se observe en la pantalla los porcentajes ingresados.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float pres, urg, ped, trau, Purg, Pped, Ptrau;
    printf("Ingrese el presupuesto anual: ");
    scanf("%f",&pres);
    fflush(stdin);

    printf("\n\n\nIngrese el porcentaje del preupuesto anual que desea destinar a Urgencias: ");
    scanf("%f",&Purg);

    printf("Ingrese el porcentaje del preupuesto anual que desea destinar a Pediatría: ");
    scanf("%f",&Pped);

    printf("Ingrese el porcentaje del preupuesto anual que desea destinar a Traumatología: ");
    scanf("%f",&Ptrau);

    urg=(pres*(Purg/100));
    ped=(pres*(Pped/100));
    trau=(pres*(Ptrau/100));

    printf("\n\n\nA Urgencias le corresponde %.2f ARS \nA Pediatría le corresponde %.2f ARS \nA Traumatología le corresponde %.2f ARS \n\n",urg,ped,trau);
    printf("\n\nEl porcentaje de Urgencias es de %.f, el porcentaje de Pediatría es de %.f y el porcentaje de Traumatolgía es de %.f \n\n",Purg,Pped,Ptrau);
    system("pause");
    return 0;
}
