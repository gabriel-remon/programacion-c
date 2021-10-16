#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int i;
    int numeroIngreso[11];
    int numerosPares[11];
    int PocicionNumerosImpares[11];
    int contadorImpar=0;
    int contadorPar=0;
    int positivo=0;
    int negativo=0;
    int sumaPar=0;
    int maxImpar;

    utn_getVecMaxMin(&numeroIngreso[0], "Ingrese un numero del -1000 al 1000", "Error", 10, -1000, 1000);
    for(i=0; i<10; i++)
    {
        if(numeroIngreso[i]>=0)
        {
            positivo++;
        }
        else
        {
            negativo++;
        }

        if ((numeroIngreso[i]%2) == 0)
        {
            numerosPares[contadorPar]=numeroIngreso[i];
            sumaPar=sumaPar+numeroIngreso[i];
            contadorPar++;
        }
        else
        {
            PocicionNumerosImpares[contadorImpar]=i;
            if(contadorImpar==0 || numeroIngreso[i]>maxImpar)
            {
                maxImpar=numeroIngreso[i];
            }
            contadorImpar++;
        }

    }


    utn_clear();
    utn_printVector(&numeroIngreso, "numero ingresado es ", 10);
    printf("\nHay %d numeros positivos y %d numeros negativos", positivo, negativo);

    if(contadorImpar==0)
    {
        printf("\nNo se ingresaron numeros impares");
    }
    else
    {
        printf("\nEl mayor numero impar es %d", maxImpar);
        utn_printVector(&PocicionNumerosImpares, "numero impar tiene pocicion ", contadorImpar);
    }

    if(contadorPar==0)
    {
        printf("\nNo se ingresaron numeros pares");
    }
    else
    {
        utn_printVector(&numerosPares, "numero par es ", contadorPar);
        printf("\nLa suma de todos los pares es %d",sumaPar);
    }

    return 0;
}
