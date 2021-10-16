#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define TAM 10

int cargarEnteros(int vector[],int vector2[], int espacio);
int calcularPromedio(int vector[], int espacio, float* promedio);
int buscarCaracter(char x, char vector[], int espacio);
int buscarUbicasionCaracter(char x, char vector[], int espacio);
int contadorMayuscula(char vector[], int espacio);
void mostrarInvertidos(int vector[],int espacio);
int totalizarEnteros(int vector[],int espacio);

int main()
{
    int negativos[TAM]={};
    int positivos[TAM]={};
    int temp;

    cargarEnteros(positivos,negativos, TAM);
    for(int i=0; i<10; i++)
    {
        for(int b=0; b<10; b++)
        {

            if(positivos[b]>=positivos[b+1])
            {
                temp=positivos[b];
                positivos[b]=positivos[b+1];
                positivos[b+1]=temp;

            }

            if(negativos[b]<=negativos[b+1])
            {
                temp=negativos[b];
                negativos[b]=negativos[b+1];
                negativos[b+1]=temp;
            }
        }

    }

    printf("\nLa lista de numeros es: ");
    for(int i=0; i<TAM; i++)
    {
        if(positivos[i]!=0)
        {
            printf("%d, ",positivos[i]);
        }
    }

    printf("\nLa lista de numeros es: ");
    for(int i=0; i<TAM; i++)
    {
        if(positivos[i]!=0)
        {
            printf("%d, ",negativos[i]);
        }
    }




    return 0;
}

int cargarEnteros(int vector[],int vector2[], int espacio)
{
    int retorno=-1;
    int contadorPositivo=0;
    int contadorNegativo=0;
    int temporal;
    if(vector!=NULL && espacio > 0)
    {
        for(int i=0; i<espacio; i++)
        {
            utn_inputNum(&temporal, "Ingrese un numero ", "Error ");
            if(temporal>0)
            {
                vector[contadorPositivo]=temporal;
                contadorPositivo++;
            }
            else
            {
                vector2[contadorNegativo]=temporal;
                contadorNegativo++;
            }
        }
        retorno=0;
    }
    return retorno;
}

int calcularPromedio(int vector[], int espacio, float* promedio)
{
    int suma=0;
    int retorno=1;

    if(vector!=NULL && promedio!=NULL&& espacio>0)
    {
        for(int i=0; i<espacio; i++)
        {
            suma=suma+vector[i];
        }
        *promedio=(float) suma/espacio;
        retorno=0;
    }
    return retorno;
}

int buscarCaracter(char x, char vector[], int espacio)
{
    int retorno=-1;
    if(vector!=NULL && espacio>0)
    {
        retorno=1;
        for(int i=0; i<espacio; i++)
        {
            if(vector[i] == x)
            {
                retorno=0;
                break;
            }
        }
    }

    return retorno;
}

int buscarUbicasionCaracter(char x, char vector[], int espacio)
{
    int retorno=-2;
    if(vector!=NULL && espacio>0)
    {
        retorno=-1;
        for(int i=0; i<espacio; i++)
        {
            if(vector[i] == x)
            {
                retorno=i;
                break;
            }
        }
    }

    return retorno;
}

int contadorMayuscula(char vector[], int espacio)
{
    int retorno=-1;
    int contador=0;
    if(vector!=NULL && espacio>0)
    {
        for(int i=0; i<espacio; i++)
        {
            if(vector[i] >= 65 && vector[i] <= 90)
            {
                contador++;
            }
        }
        retorno=contador;

    }

    return retorno;
}

void mostrarInvertidos(int vector[],int espacio)
{
    if(vector!=NULL && espacio>0)
    {
        printf("La lista de numeros es: ");
        for(int i=espacio-1; i>=0; i--)
        {
            printf("%d, ", vector[i]);
        }

    }
    else
    {
        printf("Error en la carga de datos");
    }

}

int totalizarEnteros(int vector[],int espacio)
{
    int retorno=-1;
    int suma=0;

    if(vector!=NULL && espacio>0)
    {
        for(int i=0; i<espacio-1; i++)
        {
            suma=suma+vector[i];
        }
        vector[espacio-1]=suma;
        retorno=0;

    }
    return retorno;
}
