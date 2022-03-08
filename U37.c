#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
U37. Desplegar el peso dado en kilos de una persona en gramos, toneladas y libras

1K = 1000Gr (se multiplica por 1000)
1K = 2,20462Libr(se multiplica por 2,205)
1K = 0,001Ton(se divide por 1000)
*/

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char a;
    do
    {
     float K=0, Lib=0, Ton=0, Gr=0;

     printf("Ingrese el peso en kilos, este programa se lo dará en gramos (Gr), toneladas (Ton) y libras (Lib). ");
     scanf("%f",&K);
     fflush(stdin);

     Gr=(K*1000);
     Ton=(K/1000);
     Lib=(K*2,205);

     printf("\n\n%.2f Kg es igual a %.2f Gr, %f Ton, %.2f Lib \n\n",K,Gr,Ton,Lib);

     printf("\n\nSi desea salir presione s, si quere continuar presione c: ");
     scanf("%c",&a);

    } while(a=='c');
    return 0;
}
