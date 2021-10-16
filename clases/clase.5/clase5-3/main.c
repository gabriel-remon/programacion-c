#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numeroIngreso[11]={0,0,0,0,0,0,0,0,0,0};
    int posicion;
    utn_minMax(&posicion, "Ingrese el espacio donde se guardara el dato (entre el 0 al 9) ","Error, ", 0,9);



    return 0;
}
