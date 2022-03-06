/*U27. Leer dos números y encontrar:
    a. La suma del doble del primero más el cuadrado del segundo.
    b. El promedio de sus cubos.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float x1, x2, a, b;
    x1=0;
    x2=0;
    a=0;
    b=0;

    printf("Ingrese el primero: ");
    scanf("%f",&x1);
    fflush(stdin);
    printf("Ingrese el segundo: ");
    scanf("%f",&x2);
    fflush(stdin);

    a=((x1*2)+(pow(x2,2)));
    b=(((pow(x1,3))+(pow(x2,3)))/2);

    printf("\n\n\na. La suma del doble del primero más el cuadrado del segundo = %.2f\n",a);
    printf("b. El promedio de sus cubos = %.2f \n\n\n",b);
    system("pause");
    return 0;
}
