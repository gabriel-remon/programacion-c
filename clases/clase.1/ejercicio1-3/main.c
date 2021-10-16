#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    int numeroMedio;

    printf("Ingrese el primer numero ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero ");
    scanf("%d", &numero2);
    printf("Ingrese el terce numero ");
    scanf("%d", &numero3);

    if(numero1== numero2 || numero1==numero3 || numero2==numero3)
    {
        printf("No hay numero del medio");
    }
    else
    {
        if(numero1>numero2 && numero1>numero3)
        {
            if(numero2>numero3)
            {
                numeroMedio=numero2;
            }
            else
            {
                numeroMedio=numero3;
            }
        }
        else
        {
            if(numero2>numero3)
            {
                if(numero1>numero3)
                {
                    numeroMedio=numero1;
                }
                else
                {
                    numeroMedio=numero3;
                }
            }
            else
            {
                if(numero1>numero2)
                {
                    numeroMedio=numero1;
                }
                else
                {
                    numeroMedio=numero2;
                }
            }
        }

        printf("El numero del medio es %d", numeroMedio);
    }
}
