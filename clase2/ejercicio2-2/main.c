#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroIngresado;
    int cantidadPares;
    int cantidadImpares;
    int resto;
    int numeroMenor;
    int paresMayor;
    int sumaPositivos;
    int sumaNegativos;
    int cantidadNegativos;
    float productoNegativos;
    int contador;

    contador=0;
    sumaPositivos=0;
    paresMayor=0;
    cantidadImpares=0;
    cantidadPares=0;
    numeroMenor=0;
    sumaNegativos=0;
    cantidadNegativos=0;
    productoNegativos=0;

    while(contador<10)
    {
        contador++;
        printf("Ingrese el %d º numero ",contador);
        scanf("%d", &numeroIngresado);

        resto= numeroIngresado%2;
        if(resto==0)
        {
            cantidadPares++;
            if(numeroIngresado>paresMayor || paresMayor==0)
            {
                paresMayor=numeroIngresado;
            }
        }
        else
        {
            cantidadImpares++;
        }

        if(numeroIngresado<numeroMenor || numeroMenor==0)
        {
            numeroMenor=numeroIngresado;
        }

        if(numeroIngresado>0)
        {
            sumaPositivos=sumaPositivos+numeroIngresado;
        }
        else
        {
            cantidadNegativos++;
            sumaNegativos=sumaNegativos+numeroIngresado;
        }

    }

    if(cantidadPares)
    {
        printf("El mayor numero par es %d \n", paresMayor);
    }
    printf("Hay %d numeros pares \n",cantidadPares);
    printf("Hay %d numeros impares \n", cantidadImpares);
    printf("El menor numero ingresado es %d \n", numeroMenor);
    printf("La suma de los positivos es %d \n", sumaPositivos);
    if(productoNegativos==0)
    {
        printf("No se ingresaron numeros negativos");
    }
    else
    {
        productoNegativos=sumaNegativos/cantidadNegativos;
        printf("El producto de los negativos es %.2f", productoNegativos);
    }
}
