#include <stdio.h>
#include <stdlib.h>

/*
U36. Convertir una distancia en metros a centímetros y pulgadas.

1M = 39,37008‬‬pulgadas
1M = 100cm
1cm = 0.01M
1cm = 0.393701pulgadas
1pulgada = 0.0254M
1pulgada = 2.54cm
*/

int main()
{
    float met, cm, pul;
    char dis, a;
    met=0;
    cm=0;
    pul=0;

        printf("Si la distancia que quiere convertir esta en metros escriba M.\nSi la distancia que quiere convertir esta en centimetros escriba C.\nSi la distancia que quiere convertir esta en pulgadas escriba P.\n");
        scanf("%c",&dis);
        fflush(stdin);

        switch(dis)
        {
            case 'M': case 'm':
                {
                 printf("Cuantos son los metros que desea convertir?");
                 scanf("%f",&met);
                 fflush(stdin);
                 pul=(met*39,37008);
                 cm=(met*100);
                 printf("\n\n%f metros es igual a %f centimetos y es igual a %f pulgadas\n\n",met,cm,pul);
                 break;
                }
            case 'C': case'c':
                {
                 printf("Cuantos son los centímeteros que desea convertir? ");
                 scanf("%f",&cm);
                 fflush(stdin);
                 pul=(cm*0.393701);
                 met=(cm*0.01);
                 printf("\n\n%f centimetros es igual a %f metros y es igual a %f pulgadas\n\n",cm,met,pul);
                 break;
                }
            case 'P': case'p':
                {
                 printf("Cuantos son las pulgadas que desea convertir?");
                 scanf("%f",&pul);
                 fflush(stdin);
                 cm=(pul*2.54);
                 met=(pul*0.0254);
                 printf("\n\n%f pulgadas es igual a %f metros y es igual a %f centimetros\n\n",pul,met,cm);
                 break;
                }
            default:
                {
                 printf("\n\nOperación incorrecta\n\n");
                }
        }
return 0;
}
