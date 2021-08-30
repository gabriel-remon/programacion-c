#include <stdio.h>
#include <stdlib.h>

int main()
{

    int edad; // declara un numero entero (4B)
    float altura; //declara un numero con decimal (4B)
    char sexo ; //declara un solo caracter (1B)
    char nombre [20]; //reserva 20 caracteres en espacio de memoria (20B)

    printf("Ingrese edad: ");
    scanf("%d", &edad);

    printf("Ingrese altura: ");
    scanf("%f", &altura);

    printf("Ingrese su sexo: ");
    __fpurge(stdin);
    scanf("%c", &sexo);

    printf("Ingrese su nombre: ");
    __fpurge(stdin);
    gets(nombre);


    printf("Su edad es %d \n", edad);
    printf("Su altura es %.2f M \n", altura);
    printf("sexo: %c \n", sexo);
    printf("Usted se llama %s", nombre);


    return 0;
}
