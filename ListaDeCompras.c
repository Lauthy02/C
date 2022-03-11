#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
/*
una lista de la compra de distintos tipos de productos. Que pueda sumar el total de precios.
Pedir un nombre de usuario
*/
int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    char SiNo, DejarDeElegir, TerminarSeguir;
    int Total= 0, NumDeChuhu=0;
    bool Volver=true, Volver2=false;
    char* DirTerminar= &TerminarSeguir;

    printf("Bienvenido/a.\n\n¿Desea ver la lista de productos? (S para SÍ o cualquer otra letra para NO): ");
    scanf("%c",&SiNo);
    fflush(stdin);
    if(SiNo=='s'||SiNo=='S')
    {
        do
        {
            fflush(stdin);
            NumDeChuhu= 0;
            system("cls");
            printf("\n1) Milka oreo__________$150");
            printf("\n\n2) Fantoche x3 (triple)__________$500");
            printf("\n\n3) Bon o Bon__________$190");
            printf("\n\n4) Capitán del espacio__________$200");
            printf("\n\n5) Fulbito__________$100");
            printf("\n\n6) Nutella chica__________$230");
            printf("\n\n7) Nutella grande__________$330");
            printf("\n\nPara dejar de elegir y mostrar el total escriba la letra N, si quiere seguir eligiendo presione cualquier letra: ");
            scanf("%c",&DejarDeElegir);
            fflush(stdin);
            if(DejarDeElegir=='N'||DejarDeElegir=='n')
            {
                do
                {
                    printf("\nEl total de su compra es de: %i",Total);
                    printf("\n\nSi desea terminar la compra presione T, si desea seguir comprando presione S: ");
                    fflush(stdin);
                    scanf("%c",&TerminarSeguir);
                    switch(TerminarSeguir)
                    {
                        case 'T': printf("\n\n\nGracias por elegirnos.\n"); Volver=false; system("PAUSE"); Volver2=false; break;
                        case 'S': printf("\n\n\A SEGUIR COMPRANDO!!!\n"); Volver=true; system("PAUSE"); Volver2=false; break;
                        default:
                        {
                            printf("\n\n\La letra que eleigió no está en las opciones pedidas. Vuelva a intentarlo.\n");
                            Volver2=true;
                            system("PAUSE");
                            system("cls");
                            break;
                        }
                    }
                }while(Volver2==true);
            }
            else
            {
                printf("\n\nPara elegir que producti quiere agregar a su lista de la compra indique el número del producto: ");
                scanf("%i",&NumDeChuhu);
                fflush(stdin);
                switch(NumDeChuhu)
                {
                    case 1:
                    {
                        printf("\n\n\nUsted eligió Milka oreo.\n");
                        Total=Total+150;
                        Volver=true;
                        system("PAUSE");
                        fflush(stdin);
                        break;
                    }
                    case 2:
                    {
                        printf("\n\n\nUsted eligió Fantoche x3 (triple).\n");
                        Total=Total+500;
                        Volver=true;
                        system("PAUSE");
                        fflush(stdin);
                        break;
                    }
                    case 3:
                    {
                        printf("\n\n\nUsted eligió Bon o Bon.\n");
                        Total=Total+190;
                        Volver=true;
                        system("PAUSE");
                        fflush(stdin);
                        break;
                    }
                    case 4:
                    {
                        printf("\n\n\nUsted eligió Capitán del espacio.\n");
                        Total=Total+200;
                        Volver=true;
                        system("PAUSE");
                        fflush(stdin);
                        break;
                    }
                    case 5:
                    {
                        printf("\n\n\nUsted eligió Fulbito.\n");
                        Total=Total+100;
                        Volver=true;
                        system("PAUSE");
                        fflush(stdin);
                        break;
                    }
                    case 6:
                    {
                        printf("\n\n\nUsted eligió Nutella chica.\n");
                        Total=Total+230;
                        Volver=true;
                        system("PAUSE");
                        fflush(stdin);
                        break;
                    }
                    case 7:
                    {   printf("\n\n\nUsted eligió Nutella grande.\n");
                        Total=Total+330;
                        Volver=true;
                        system("PAUSE");
                        fflush(stdin);
                        break;
                    }
                    default:
                    {
                        printf("El número que eleigió no se encuentra en la lista. Vuelva a intentarlo.");
                        Volver=true;
                        system("PAUSE");
                        fflush(stdin);
                        break;
                    }
                }
            }
        }while(Volver==true);
    }
    else
    {
        printf("\n\nGracias por venir.");
    }

    return 0;
}
