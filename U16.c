//U16. Calcular el monto a pagar en una cabina de Internet si el costo por hora es de pesos 15. Por cada 5 horas te dan una hora de promoción gratis. 
//El usuario ingresa cuántas horas desea contratar.
#include <stdio.h>
#include <locale.h>
#include <math.h>

//1 hora es = a $15
//la bonificación es del 7% 7/100= 0.07

int main()
{
    setlocale(LC_ALL,"spanish");

    int CantDescuento,ValorHora,Horas,ValorDescuento,Total;
    ValorDescuento=2;
    ValorHora=15;

    printf("Cada hora tiene un valor de $15.\n");
    printf("Cada 5 horas se le otorgará una bonificación de $2.\n");
    printf("Ingrese la cantidad de horas que desea contratar: ");
    scanf("%i",&Horas);

    CantDescuento=(Horas/5);
    Total=((ValorHora*Horas)-(ValorDescuento*CantDescuento));

    printf("El total a pagar es %i en %i horas.\n\n",Total,Horas);
    system("pause");
    return 0;
}
