//U19. Calcular el nuevo salario de un empleado si obtuvo un incremento del 8% sobre su salario actual y un descuento de 2,5% por servicios. 
//El usuario ingresa el salario del empleado.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");

    float salario, nuevosalario, aumento, Tot;
    salario=0;
    nuevosalario=0;

    printf("Ingrese el salario: ");
    scanf("%f",&salario);

    aumento=(salario*1.08);
    Tot=(aumento/1.025);

    printf("El salario nuevo es %.3f ARS\n\n",Tot);
    system("pause");
    return 0;
}
