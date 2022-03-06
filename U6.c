#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    float a,b,c;
    printf("Ingrese dos números enteros que quiera dividir con el formato \"a,b\": ");
    scanf("%f,%f",&a,&b);
    fflush(stdin);
    c=a/b;
    printf("El resultado es: %f \n",c);
    system("pause");
    return 0;
}
