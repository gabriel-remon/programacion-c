#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "utn.h"

int utn_minMaxInt(int* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo)
{
    int retorno = -1;
    int bufferIn;
    int error;

    if(pResultado != NULL && pMensaje!= NULL && pMensajeError!= NULL && minimo<maximo)
    {
        while(1)
        {
            printf("%s ", pMensaje);
            __fpurge(stdin);
            error = scanf("%d", &bufferIn);
            if(bufferIn>=minimo && bufferIn<=maximo && error == 1)
            {
                *pResultado = bufferIn;
                retorno = 0;
                break;
            }
            else
            {
                printf("\n%s ", pMensajeError);
            }
        }
    }
    return retorno;
}

int utn_minMaxFloat(float* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo)
{
    int retorno = -1;
    float bufferIn;
    int error;

    if(pResultado != NULL && pMensaje!= NULL && pMensajeError!= NULL && minimo<maximo)
    {
        while(1)
        {
            printf("%s ", pMensaje);
            __fpurge(stdin);
            error = scanf("%f", &bufferIn);
            if(bufferIn>=minimo && bufferIn<=maximo && error == 1)
            {
                *pResultado = bufferIn;
                retorno = 0;
                break;
            }
            else
            {
                printf("\n%s ", pMensajeError);
            }
        }
    }
    return retorno;
}

int utn_getCharDos(char* pResultado, char* pMensaje, char* pMensajeError, char criterio1, char criterio2)
{
    int retorno = -1;
    char bufferIn;
    int error;

    if(pResultado != NULL && pMensaje!= NULL && pMensajeError!= NULL)
    {
        do
        {
            printf("%s ", pMensaje);
            __fpurge(stdin);
            error = scanf("%c", &bufferIn);
            if(error == 1 && (bufferIn == criterio1 ||bufferIn == criterio2))
            {
                *pResultado = bufferIn;
                retorno = 0;
                break;
            }
            else
            {
                printf("\n%s ", pMensajeError);
            }
        }while(1);
    }
    return retorno;
}



int utn_getInt(int* pResultado, char* pMensaje, char* pMensajeError)
{
    int retorno = -1;
    int bufferIn;
    int error;

    if(pResultado != NULL && pMensaje!= NULL && pMensajeError!= NULL)
    {
        do
        {
            printf("%s ", pMensaje);
            __fpurge(stdin);
            error = scanf("%d", &bufferIn);
            if(error == 1)
            {
                *pResultado = bufferIn;
                retorno = 0;
                break;
            }
            else
            {
                printf("\n%s ", pMensajeError);
            }
        }while(1);
    }
    return retorno;
}


int utn_getFloat(float* pResultado, char* pMensaje, char* pMensajeError)
{
    int retorno = -1;
    float bufferIn;
    int error;

    if(pResultado != NULL && pMensaje!= NULL && pMensajeError!= NULL)
    {
        do
        {
            printf("%s ", pMensaje);
            __fpurge(stdin);
            error = scanf("%f", &bufferIn);
            if(error == 1)
            {
                *pResultado = bufferIn;
                retorno = 0;
                break;
            }
            else
            {
                printf("\n%s ", pMensajeError);
            }
        }while(1);
    }
    return retorno;
}

int utn_getChar(char* pResultado, char* pMensaje, char* pMensajeError)
{
    int retorno = -1;
    char bufferIn;
    int error;

    if(pResultado != NULL && pMensaje!= NULL && pMensajeError!= NULL)
    {
        do
        {
            printf("%s ", pMensaje);
            __fpurge(stdin);
            error = scanf("%c", &bufferIn);
            if(error == 1)
            {
                *pResultado = bufferIn;
                retorno = 0;
                break;
            }
            else
            {
                printf("\n%s ", pMensajeError);
            }
        }while(1);
    }
    return retorno;
}

int utn_division(float* pResultado, int num1, int num2)
{
    float resultado;
    int retorno = -1;

    if(pResultado != NULL && num2 != 0)
    {
        resultado = (float) num1 / num2;
        *pResultado = resultado;
        retorno = 0;
    }

    return retorno;
}



int utn_operador(char tipoOperador,int* pResultado, int num1, int num2)
{

    int resultado;
    int retorno = -1;

    if(pResultado != NULL && (tipoOperador=='+' || tipoOperador=='-' || tipoOperador=='*'))
    {
        switch(tipoOperador)
        {
            case '+':
                resultado=num1+num2;
                retorno = 0;
            break;

            case '-':
                resultado=num1-num2;
                retorno = 0;
            break;

            case '*':
                resultado=num1*num2;
                retorno = 0;
            break;
        }
        *pResultado = resultado;
    }

    return retorno;

}

int utn_operadorFloat(char tipoOperador,float* pResultado, float num1, float num2)
{

    float resultado;
    int retorno = -1;

    if(pResultado != NULL && (tipoOperador=='+' || tipoOperador=='-' || tipoOperador=='*' || tipoOperador=='/'))
    {
        switch(tipoOperador)
        {
            case '+':
                resultado=num1+num2;
                retorno = 0;
                break;

            case '-':
                resultado=num1-num2;
                retorno = 0;
                break;

            case '*':
                resultado=num1*num2;
                retorno = 0;
                break;

            case '/':
                if(num2!=0)
                {
                    resultado=num1/num2;
                    retorno=0;
                }
                else
                {
                    retorno=1;
                }
                break;
        }
        *pResultado = resultado;
    }

    return retorno;

}

int utn_factorial( int num)
{
    int retorno;
    if(num==0)
    {
        retorno= 1;
    }
    else
    {
        retorno=num * utn_factorial(num-1);
    }
    return retorno;
}


void utn_clear()
{
    system("@cls||clear");
}

void utn_stop()
{
    printf("\n\nPrecione Enter para continuar");
    __fpurge(stdin);
    getchar();
}


int ordenarEnteros(int vec[], int tam, int criterio)
{
    int retorno=-1;
    if(vec!=NULL && tam>0 && (criterio ==1 || criterio ==0))
    {

        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j> tam; j++ )
            {
                    if((vec[i] > vec[j] && criterio) || (vec[i] < vec[j] && !criterio))
                    {
                        utn_swapInt(&vec[i], &vec[j]);
                    }
            }
        }
        retorno=0;
    }
    return retorno;
}

int utn_ordenarFloat(float vec[], int tam, int criterio)
{
    int retorno=-1;
    if(vec!=NULL && tam>0 && (criterio ==1 || criterio ==0))
    {
        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j> tam; j++ )
            {
                    if((vec[i] > vec[j] && criterio) || (vec[i] < vec[j] && !criterio))
                    {
                        utn_swapFloat(&vec[i], &vec[j]);
                    }
            }
        }
        retorno=0;
    }
    return retorno;
}

int utn_ordenarChar(char vec[], int tam, int criterio)
{
    int retorno=-1;
    if(vec!=NULL && tam>0 && (criterio ==1 || criterio ==0))
    {

        for(int i=0; i<tam-1; i++)
        {
            for(int j=i+1; j> tam; j++ )
            {
                    if((vec[i] > vec[j] && criterio) || (vec[i] < vec[j] && !criterio))
                    {
                        utn_swapChar(&vec[i], &vec[j]);
                    }
            }
        }
        retorno=0;
    }
    return retorno;
}

int utn_swapInt(int* num1, int* num2)
{
    int retorno=-1;
    int aux;
    if(num1!=NULL && num2!=NULL)
    {
        aux=*num1;
        *num1=*num2;
        *num2=aux;
        retorno=0;
    }
    return retorno;
}
int utn_swapFloat(float* num1, float* num2)
{
    int retorno=-1;
    float aux;
    if(num1!=NULL && num2!=NULL)
    {
        aux=*num1;
        *num1=*num2;
        *num2=aux;
        retorno=0;
    }
    return retorno;
}
int utn_swapChar(char* car1, char* car2)
{
    int retorno=-1;
    char aux;
    if(car1!=NULL && car2!=NULL)
    {
        aux=*car1;
        *car1=*car2;
        *car2=aux;
        retorno=0;
    }
    return retorno;
}

