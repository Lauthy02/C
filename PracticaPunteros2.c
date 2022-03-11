#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>

    //VARIABLES
    char Nombre[30], LetraAuxMinuscula, LetraAuxMayuscula;
    int Contador= 0, NumPrograma= 0, CantDeNumEnElVector= 0, NumeroParaVector= 0, VectorMenorA100[],VectorMayorA1000[];
    bool Volver= false, VolverAux= false;

    //VARIABLES TIPO PUNTERO
    char* DirNombre= &Nombre; //*DirNombre solo pasa la primera posición de la cadena.

int main()
{
    setlocale(LC_ALL,"spanish"); system("color F0");
    //El & me da la dirección de memoria de la variable.
    //El * hace que el valor que tiene adentro la variable sea interpretado como una dirección de memoria

    do
    {
        NumPrograma= 0;
        system("cls");
        printf("Ingrese el úmero de programa al que desea entrar.");
        printf("\n1- Contador de vocales. \n2- Identificar números menores a 100 y mayores a 1000 con punteros. \n");
        scanf("%i",&NumPrograma);
        fflush(stdin);

        switch(NumPrograma)
        {
            case 1:
            {
                //Pedir un nombre al usuario y devolver la cantidad de vocales que tiene
                //Usar punteros

                Contador= 0;
                system("cls");
                printf("Ingrese el nombre: ");
                gets(Nombre); //scanf("%s",&Nombre);
                fflush(stdin);
                printf("\n\nNombre ingresado: %s",Nombre);

                //Para contar las vocales necesito tener el nombre en todas mayúsculas o en todas minúsculas
                //porque si no necesito verificar las letras para mayúsculas y minúsculas
                strupr(Nombre); //Paso a mayúsculas la cadena
                printf("\n\nNombre ingresado en mayúsculas: %s",Nombre);

                while(*DirNombre)
                {
                    switch(*DirNombre)
                    {
                        case 'A':
                        case 'E':
                        case 'I':
                        case 'O':
                        case 'U': Contador++;
                    }
                    DirNombre++;
                }
                printf("\n\nLa cantidad de vocales es: %i", Contador);
                break;
            }
            case 2:
            {
                /*
                1- Que el usuario ingrese la cantidad de números que tenga un vector
                2- Que muestre los menores a 100 y mayores a 1000
                3- Para este programa usar punteros en una función y que retorne valores, que no se imprima en la función
                */
                system("cls");
                printf("Ingrese la cantidad de números que desea ingresar en el vector: ");
                scanf("%i",&CantDeNumEnElVector);
                fflush(stdin);
                int Vector[CantDeNumEnElVector];

                for(int a=0; a<CantDeNumEnElVector; a++)
                {
                    printf("Ingrese el número para la posición [%i] del vector: ",a);
                    scanf("%i",&NumeroParaVector);
                    fflush(stdin);
                    Vector[a]=NumeroParaVector;
                }
                //Imprimir vector
                for(int b=0; b<CantDeNumEnElVector; b++)
                {
                    printf("\nEl número que está en la posición [%i] del vector es: %i ",b,Vector[b]);
                }

                break;
            }
            default:
            {
                printf("No ingresó nungún número de la lista.");
                break;
            }
        }
        do
        {
            printf("\n\n\n\nSi quiere volver a elegir el programa marque ""S"", de lo contrario marque ""N"": ");
            scanf("%c",&LetraAuxMinuscula);
            fflush(stdin);
            if (LetraAuxMinuscula >= 'a' && LetraAuxMinuscula <= 'z')
            {
                LetraAuxMayuscula= LetraAuxMinuscula-'a'+'A';
            }
            else
            {
                printf("La letra ya es mayúscula");
                LetraAuxMayuscula=LetraAuxMinuscula;
            }
            if(LetraAuxMayuscula=='S'||LetraAuxMayuscula=='N')
            {
                if(LetraAuxMayuscula=='S')
                {
                    Volver=true;
                }
                else if(LetraAuxMayuscula=='N')
                {
                    Volver=false;
                }
            }
            else
            {
                printf("\n\nNo ingresó el caracter solicitado.\n");
                system("pause");
                fflush(stdin);
                VolverAux= true;
                system("cls");
            }
        }while(VolverAux==true);
    }while(Volver==true);
    printf("\n\n\n¡¡Gracias por elegirnos!!");
    return 0;
}

void AveriguarNum()
{
    int* DirNumEnVector= &Vector; //*DirNumEnVector solo me da la primer posición del vector Vector.

    for(int c=0; c<CantDeNumEnElVector; c++)
    {
        if(*DirNumEnVector<100)
        {
            VectorMenorA100[c]=*DirNumEnVector;
            *DirNumEnVector++

        }
        else if(*DirNumEnVector>1000)
        {
            VectorMenorA100[c]=*DirNumEnVector;
            *DirNumEnVector++
        }
    }
}
