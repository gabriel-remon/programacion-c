#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;

    printf("Ingrese el primer numero ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero ");
    scanf("%d", &numero2);
    printf("Ingrese el tercer numero ");
    scanf("%d", &numero3);

    if(numero1>numero2 && numero1>numero3)
    {
        printf("El primer numero es el mayor");
    }
    else
    {
        if(numero2>numero3)
        {
            printf("El segundo numero es el mayor");
        }
        else
        {
            printf("El tercer numero es el mayor");
        }
    }
}
