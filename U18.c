//U18. Calcular el descuento y el monto a pagar por un medicamento cualquiera en una farmacia si todos los medicamentos tienen un descuento del 35%. 
//El usuario ingresa el valor del medicamento.
#include <stdio.h>
#include <locale.h>
#include <math.h>

// descuento de 35%
// 0.35

int main()
{
    setlocale(LC_ALL,"spanish");

    float Precio, Descuento, Tot;
    Precio=0;
    Descuento=0;

    printf("Ingrese el precio del medicamento: ");
    scanf("%f",&Precio);

    Descuento=(Precio*0.35);
    Tot=Precio-Descuento;

    printf("El valor total a pagar es %f ARS \n \n",Tot);
    system("pause");
    return 0;
}
