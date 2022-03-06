//U26. Calcular el nuevo salario de un empleado si se le descuenta el 20% de su salario actual.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float sal, tot, des;
    sal=0;
    tot=0;
    des=0;

    printf("Ingrese au salario: ");
    scanf("%f",&sal);

    des=(sal*0.2);
    tot=(sal-des);

    printf("\n\n\nSu nuevo salario es %.2f ARS\n\n",tot);
    system("pause");
    return 0;
}
