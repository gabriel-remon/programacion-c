#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numeroINgreso[6];
    int resultado;

    utn_ingresoVector(&numeroINgreso[0], "Engrese un numero ", "Error", 5);
    if(utn_sumaVector(&resultado, &numeroINgreso[0], 5))
    {
        printf("Error en la operacion");
    }
    else
    {
        printf("La suma de todos los numeros es: %d", resultado);
    }

    return 0;
}
