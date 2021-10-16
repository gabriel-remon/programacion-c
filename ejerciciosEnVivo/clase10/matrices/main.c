#include <stdio.h>
#include <stdlib.h>
#include "../../../bibliotecas/utn.h"

int cargarMatriz(int matriz[][5], int fila);

int main()
{
    int matriz[3][5];
    int i;

    utn_getInt(&i,"ingrese numero","error", 0,10,5);
    printf("%d", i);


    //cargarMatriz(matriz, 3);

    return 0;
}

int cargarMatriz(int matriz[][5], int fila)
{
    int retorno=-1;

    if(matriz!=NULL)
    {
    for(int i=0; i<fila; i++)
    {
        for(int j=01
        ; j<5 ; j++)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    retorno=0;
    }
    return retorno;
}
