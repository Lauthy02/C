#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    char caracter;
    printf("Ingrese un caracter. ");
    caracter=getchar();
    printf("El caracter que escribió es: %c \n\n",caracter);
    system("pause");
    return 0;
}
