#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroIngreso;
    int contador;
    int resultado;

    printf("Ingrese el numero a factorear ");
    scanf("%d", &numeroIngreso);
    resultado=numeroIngreso;
    contador=numeroIngreso;

    while(contador>1)
    {
        contador--;
        resultado=resultado*contador;
    }

    printf("\n El resultado del factoreo es: %d", resultado);
}
