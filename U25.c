//U25. Escriba un programa donde se ingrese el tiempo necesario para un cierto proceso en horas, minutos y segundos. 
//Se calcule el costo total del proceso sabiendo que el costo por segundo es 0,25 pesos.
#include <stdio.h>
#include <locale.h>
#include <math.h>
 /*
costo por segundo es de 0.25
ingresar hs, min y sec
calcular costo total

1hs = 3600sec
1min = 60sec
1sec = 1sec
 */
int main()
{
    setlocale(LC_ALL,"spanish");
    float hs, min, sec, hss, mins, tot;

    printf("Ingrese las horas: ");
    scanf("%f",&hs);
    fflush(stdin);
    printf("Ingrese los minutos: ");
    scanf("%f",&min);
    fflush(stdin);
    printf("Ingrese los segundos: ");
    scanf("%f",&sec);
    fflush(stdin);

    hss=hs*3600;
    mins=min*60;

    tot=((hss*0.25)+(mins*0.25)+(sec*0.25));

    printf("\n\n\nEl costo toal es de %.2f ARS\n\n",tot);
    system("pause");
    return 0;
}
