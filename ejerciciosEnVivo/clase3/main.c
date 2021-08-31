#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    float resultado;

    printf("Ingrese el primer numero ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero ");
    scanf("%d", &numero2);

    resultado = (float) (numero1 + numero2)/2;


    printf("El resultado del promedio de %d y %d es %.2f", numero1, numero2, resultado);
}
