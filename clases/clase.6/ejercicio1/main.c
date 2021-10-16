#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int auxiliar;

    printf("Ingrese el primer numero \n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero \n");
    scanf("%d", &numero2);

    auxiliar=numero1;
    numero1=numero2;
    numero2=auxiliar;

    printf("Primero %d segundo %d",numero1, numero2);

    return 0;
}
