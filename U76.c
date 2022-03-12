#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
U76. Desarrollar un programa que permita ingresar la temperatura que posee el agua y en función 
a esta mostrar en pantalla su estado. Si es negativa el estado será sólido, si es menor que 100 será líquido 
y si es mayor o igual que 100 será gaseoso.
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
        system("cls");
        int temper=0;

        printf("Ingrese la temperatura del agua: ");
        scanf("%i",&temper);
        fflush(stdin);

        if(temper>100)
            {
                printf("\nEl agua está en estado GASEOSO.");
            }
        if(temper>0 && temper<100)
            {
                printf("\nEl agua está en estado LÍQUIDO.");
            }
        if(temper<=0)
            {
                printf("\nEl agua está en estado SÓLIDO.");
            }

        printf("\n\nSi desea continuar escriba c si desea salir escriba s. \n\n");
        scanf("%c",&a);
        fflush(stdin);
    }while(a=='c');
return 0;
}
