#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letraIngresada;
    int contadorP;
    int contador;

    contador=0;
    contadorP=0;

    while(contador<5)
    {
        contador++;
        printf("Ingrese el %dº caracter ", contador);
        __fpurge(stdin);
        scanf("%c", &letraIngresada);

        if(letraIngresada=='p')
        {
            contadorP++;
        }
    }

    if(contadorP==0)
    {
        printf("No se ingreso ninguna letra p (minuscula)");
    }
    else
    {
        printf("Se ingresaron %d letra p (minuscula)", contadorP);
    }
}
