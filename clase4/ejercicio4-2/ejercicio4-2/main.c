#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int inputFahrenheit;
    int inputCelsius;
    int error;
    float convercionCF;
    float convercionFC;

    error = utn_getTemp(&inputCelsius, "Ingrese una temperatura entre 0 y 100 grados celcius", "Error", 0, 100);
    if(error != 0)
    {
        printf("Error en carga de funcion\n");
    }

    error = utn_getTemp(&inputFahrenheit, "Ingrese una temperatura entre 32 y 212 grados Fahrenheit", "Error", 32, 212);
    if(error != 0)
    {
        printf("Error en carga de funcion\n");
    }

    error = utn_convercionTemp(&convercionCF, inputCelsius, 0);
    if(error != 0 )
    {
        printf("Error en carga de funcion\n");
    }

    error = utn_convercionTemp(&convercionFC, inputFahrenheit, 1);
    if(error != 0 )
    {
        printf("Error en carga de funcion\n");
    }

    printf("La temperatura ingresada en celcius es %d y su convercion a fahrenheit es %.2f \n", inputCelsius, convercionCF);
    printf("La temperatura ingresada en fahrenheit es %d y su convercion a celcius es %.2f \n", inputFahrenheit, convercionFC);

    return 0;
}
