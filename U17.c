//U17. Calcular el cambio en dólares y euros al ingresar cierta cantidad en pesos. La cotización del dólar, la del euro y la cantidad en pesos a cambiar las ingresa el usuario.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"spanish");

    float Pesos, Dolar, Euro, Res;
    char conver;
    Pesos=0;
    Dolar=0;
    Euro=0;
    Res=0;

    printf("Si desea convetir pesos a dólares marque D.\nSi desea convetir pesos a euros marque E. \n");
    scanf("%c",&conver);
    fflush(stdin);

    switch(conver)
    {
        case 'D':
        {
            printf("Ingrese la cotizacicón del dólar: ");
            scanf("%f",&Dolar);
            fflush(stdin);
            printf("Ingrese la cantidad en pesos: ");
            scanf("%f",&Pesos);
            Res=Pesos/Dolar;
            printf("El el cambio total en dólares de %f USD \n\n",Res);
            break;
        }
        case 'E':
        {
            printf("Ingrese la cotizacicón del euro: ");
            scanf("%f",&Euro);
            fflush(stdin);
            printf("Ingrese la cantidad en pesos: ");
            scanf("%f",&Pesos);
            Res=Pesos/Euro;
            printf("El cambio total en euros es de %f EUR \n\n",Res);
            break;
        }
    }
    system("pause");
    return 0;
}
