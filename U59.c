#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
U59. Desarrollar un programa que posea una variable global y cambiarle el valor desde dos funciones distintas. 
Mostrar los valores que adopta en cada función luego de cambiarlo.
una variable global, cambiarle el valor en 2 funciones distintas.
mostrar el valor que toma.
1kg = 2.2046lib

*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    int VG=10; //VG = Variable Global
    do
    {
        system("cls"); //limpiar pantalla
        int Tot, val;
        char accion;

        printf("Ingrese que acción quere realizarle a la variable global; la acción s suma a la variable global el"
               "número que usted indique, la acción r resta a la variable global elnúmero que usted indique\n\n"
               "indique el número de acción (s = suma, r = resta). ");
        scanf("%c",&accion);
        fflush(stdin);

            switch(accion)
            {
                case 's':
                {
                    printf("la variable global tiene un valor de 10, cauanto desea sumar?. ");
                    scanf("%i",&val);
                    fflush(stdin);

                    Tot=(VG+val);

                    printf("\n\nLa VC pasó de ser 10 a ser: %i\n\n",Tot);
                    break;
                }
                case 'r':
                {
                    printf("la variable global tiene un valor de 10, cauanto desea restar?. ");
                    scanf("%i",&val);
                    fflush(stdin);

                    Tot=(VG-val);

                    printf("\n\nLa VC pasó de ser 10 a ser: %i\n\n",Tot);
                    break;
                }
            }
        printf("\n\nSi desea salir presione s, si desea continuar presione c. \n\n");
        scanf("%c",&a);
        fflush(stdin);
    }while(a=='c');
return 0;
}
