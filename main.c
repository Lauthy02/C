#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int a;
    printf("Ingrese un número entero. ");
    scanf("%i",&a);
    printf("El número entero que escribió es: %i \n",a);
    system("pause");
    return 0;
}
