#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    int a;
    printf("Ingrese un n�mero entero. ");
    scanf("%i",&a);
    printf("El n�mero entero que escribi� es: %i \n",a);
    system("pause");
    return 0;
}
