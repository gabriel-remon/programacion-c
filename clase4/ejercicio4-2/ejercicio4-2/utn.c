#include <stdio.h>
#include <stdlib.h>

int utn_getTemp(int* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo)
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



int utn_convercionTemp(float* pResultado, int temp, int tipo)
{
    int retorno = -1;
    float resultado;

    if(pResultado != NULL)
    {
        if(tipo == 0) //si de celcus a farengeit
        {
            resultado = (float) (temp * 9)/5 + 32;
        }
        else
        {
            resultado = (float) ((temp-32)*5)/9;
        }

        *pResultado = resultado;
        retorno=0;
    }

    return retorno;

}
