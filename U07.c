//U7. Desarrollar un programa que permita ingresar dos números y muestre en pantalla la multiplicación de ambos.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int a,b,c;
    printf("Ingrese dos números enteros que quiera multiplicar con el formato \"a,b\": ");
    scanf("%i,%i",&a,&b);
    c=a*b;
    printf("El resultado es: %i \n",c);
    system("pause");
    return 0;
}
