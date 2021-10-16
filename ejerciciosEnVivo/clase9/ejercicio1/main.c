#include <stdio.h>
#include <stdlib.h>
/*
int utn_ordenarEnteros(int vec[], int tam, int criterio);
int utn_ordenarFloat(float vec[], int tam, int criterio);
int utn_ordenarChar(char vec[], int tam, int criterio);
int utn_swapInt(int* num1, int* num2);
int utn_swapFloat(float* num1, float* num2);
int utn_swapChar(char* car1, char* car2);
*/
int main()
{
    //int vector[7]= {5,8,7,6,9,7,1};
        //           ordenarEnteros(vector, 7);


    return 0;
}

/*
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
            retorno=0;
        }
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
            retorno=0;
        }
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
            retorno=0;
        }
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
*/
