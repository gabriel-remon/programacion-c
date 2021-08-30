#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primero;
    int segundo;
    int resultado;

    printf("Ingrese el primer numero ");
    scanf("%d", &primero);
    __fpurge(stdin);
    printf("Ingrese el segundo numero ");
    scanf("%d", &segundo);

    resultado = primero + segundo;

    printf("El resultado de %d y %d, es %d", primero, segundo, resultado);

    return 0;
}
