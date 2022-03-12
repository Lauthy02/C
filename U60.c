#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//U60. Dibujar en la consola un rectángulo de “*” utilizando las funciones de posicionamiento en pantalla.

int main()
{
    system("color F0");

	int alto, ancho;

	printf("Indique el alto del rectangulo: ");
	scanf("%i",&alto);

	printf("Indique el ancho del rectangulo: ");
	scanf("%i",&ancho);

	printf("\n");

	  	for(int sdr = 1; sdr <= alto; sdr++) // sdr = salto de renglon.
	  	{
	  	  for(int linea = 1 ; linea <=ancho; linea++)
			{
				printf("*"); 
		    }
		    printf("\n");
		}

	return 0;
}
