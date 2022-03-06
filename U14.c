//U14. Una persona recibe un préstamo en pesos de un banco y desea saber cuánto pagará de interés, si el banco le cobra una tasa del 27% anual. 
//El usuario ingresa cuánto dinero desea solicitar y la cantidad de años que tardará en retornarlo.
#include <stdio.h>
#include <locale.h>
#include <math.h>

// 1 año = 12 meses = 360 días
int main()
{
    setlocale(LC_ALL,"spanish");

    float dinero,tiempo,tasa,interes,total;
    dinero=0;
    tiempo=0;
    tasa=0;
    interes=0;
    total=0;

    printf("Ingrese el dinero que desea calcular: ");
    scanf("%f",&dinero);
    printf("Ingrese en cuanto tiempo lo va a devlolver (en meses): ");
    scanf("%f",&tiempo);
    printf("Ingrese la tasa anual del banco: ");
    scanf("%f",&tasa);
    interes=((dinero*tiempo*tasa)/(100*12));
    printf("Usted tendrá que pagar $ %f de intereses en %f días.\n",interes,tiempo);
    total=(interes+dinero);
    printf("Lo que da una suma total de $ %f.\n\n",total);
    system("pause");
    return 0;
}
