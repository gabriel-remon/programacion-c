#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int num1;
    int num2;
    int suma;
    int resta;
    int multiplicar;
    float divicion;
    int errorDiv;
    int factorial1;
    int factorial2;
    int continuar = 1;
    int flagA = 1;
    int flagB = 1;
    int flagOperacion = 1;

    do
    {
        utn_clear(); //limpia pantalla

        switch(utn_menu()) //Imprime el menu de opciones, valida y devuelve el numero elegido
        {
            case 1:
                if(flagA==0 && flagOperacion==0) //si el usuario cambia el numero luego de realizar las operaciones
                {
                    flagOperacion=1;
                }
                utn_inputNum(&num1, "Ingrese el primer numero (A) ", "Error "); //toma del primer numero y validacion de entero
                flagA=0;
            break;

            case 2:
                if(flagB==0 && flagOperacion==0) //Imprime el menu de opciones, valida y devuelve el numero elegido
                {
                    flagOperacion=1;
                }
                utn_inputNum(&num2, "Ingrese el segundo numero (B) ", "Error "); //toma del segundo numero y validacion de entero
                flagB=0;
            break;

            case 3:
                if(flagA==0 && flagB==0) //solo ingresa si previamente se engresaron los numeros A y B
                {
                    utn_operador('+', &suma, num1, num2); //operacion suma
                    utn_operador('-', &resta, num1, num2); //operacion resta
                    utn_operador('*', &multiplicar, num1, num2); //operacion multiplicacion
                    errorDiv = utn_division(&divicion, num1, num2); //operacion divicion
                    utn_factorial(&factorial1, num1);//operacion factoreal A
                    utn_factorial(&factorial2, num2);//operacion factoreal B
                    flagOperacion=0;
                    printf("Operaciones realizadas con exido\n");
                }
                else
                {
                    printf("Error primero deve ingresar los operadores A y B\n");
                }
                utn_stop(); //pausa del programa hasta que se precione enter
            break;

            case 4:
                if(flagA==0 && flagB==0) //solo ingresa si se ingresaron los numeros A y B
                {
                    if(flagOperacion==0) //solo ingresa si se realizaron las operaciones
                    {
                        printf("El resultado de A+B es: %d\n", suma);
                        printf("El resultado de A-B es: %d\n", resta);
                        printf("El resultado de A*B es: %d\n", multiplicar);
                        if(errorDiv == 0)
                        {
                            printf("El resultado de A/B es: %.2f\n", divicion);
                        }
                        else
                        {
                            printf("No es posible dividir por cero\n");
                        }
                        printf("El factorial de A es: %d\n", factorial1);
                        printf("El factorial de B es: %d\n", factorial2);
                    }
                    else
                    {
                        printf("Error primero deve calcular las operaciones\n");
                    }

                }
                else
                {
                    printf("Error primero deve ingresar los operadores A y B\n");
                }
                utn_stop(); //pausa del programa hasta que se precione enter
            break;

            case 5:
                continuar=0;
            break;
        }
    }while(continuar); // El programa se repetira hasta que el usuario ingrese 5

    return 0;
}




