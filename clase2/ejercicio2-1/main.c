#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numeroIngresado;
   int contador;
   int sumaNumeros;
   float promedio;

   sumaNumeros=0;
   contador=0;

   while(contador<5)
   {
        contador++;
        printf("Ingrese el %dº numero ",contador);
        scanf("%d", &numeroIngresado);
        sumaNumeros=sumaNumeros+numeroIngresado;
   }

   promedio= sumaNumeros / contador;

   printf("El promedio de los numeros es %.2f", promedio);

}
