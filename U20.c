/*U20. En un hospital existen 3 áreas: Urgencias, Pediatría y Traumatología. El presupuesto anual del hospital se reparte de la siguiente manera: 

  Área           Presupuesto 
Urgencias           37% 
Pediatría           42% 
Traumatología       21% 
  
 Si el usuario ingresa el presupuesto anual, mostrar cuánto dinero le corresponde a cada área.
 */

#include <stdio.h>
#include <locale.h>
#include <math.h>

// Urgencias, 37%
// Pediatría, 42%
// Traumatología, 21%
int main()
{
    setlocale(LC_ALL,"spanish");

    int pres, urg, ped, trau;

    printf("Ingrese el presupuesto anual: ");
    scanf("%d",&pres);
    fflush(stdin);

    urg=(pres*0.37);
    ped=(pres*0.42);
    trau=(pres*0.21);

    printf("A Urgencias le corresponde %d ARS \nA Pediatría le corresponde %d ARS \nA Traumatología le corresponde %d ARS \n\n",urg,ped,trau);
    system("pause");
    return 0;
}
