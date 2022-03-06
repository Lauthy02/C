//U3. Desarrollar un programa que permita ingresar su nombre y visualizar por pantalla un saludo que exprese “Buen día” más el nombre ingresado.
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"spanish");
    char Nombre[30];
    printf("Ingrese su nombre: ");
    gets(Nombre);
    printf("Buen día %s \n\n",Nombre);
    system("pause");
    return 0;
}
