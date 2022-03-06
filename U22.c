//U22. Desarrolle un programa que dada la cantidad de billetes de 2-5-10-20-50-100-200 y 500 indique la cantidad
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    int valor, quinientos, doscientos, cien, cincuenta, veinte, diez, cinco, dos;
    quinientos = 0;
    doscientos = 0;
    cien = 0;
    cincuenta = 0;
    veinte = 0;
    diez = 0;
    cinco = 0;
    dos = 0;
    printf("Ingrese un valor: ");
    scanf("%i",&valor);

    if(valor>=500){
        quinientos = valor/500;
        valor -= 500*quinientos;
    }
    if(valor>=200){
        doscientos=valor/200;
        valor -= 200*doscientos;
    }
    if(valor>=100){
        cien=valor/100;
        valor -= 100*cien;
    }
    if(valor>=50){
        cincuenta=valor/50;
        valor -=50*cincuenta;
    }
    if(valor>=20){
        veinte=valor/20;
        valor -= 20*veinte;
    }
    if(valor>=10){
        diez=valor/10;
        valor -= 10*diez;
    }
    if(valor>=5){
        cinco=valor/5;
        valor -= 5*cinco;
    }
    if(valor>=2){
        dos=valor/2;
        valor -= 2*dos;
    }
    printf("Se usaron:\n %i billetes de 500,\n %i billetes de 200,\n %i billetes de 100,\n %i billetes de 50,\n %i billetes de 20,\n %i billetes de 10,\n %i billetes de 5,\n %i billetes de 2\n",quinientos,doscientos,cien,cincuenta,veinte,diez,cinco,dos);
}
