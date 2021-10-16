#include <stdio.h>
#include <stdlib.h>
/*
int sumar(int a, int b, int *c);
int dividir(int a, int b, float *pResultado);
int cambio(int *a, int *b);
int factorial(int a);

int main()
{
    int num1=5;
    int num2=5;
    //float resultado;

    num1=factorial(num1);

    printf("%d",num1);



    switch(dividir(num1, num2,&resultado))
    {
        case 0:
            printf("El resultado es: %.2f",resultado);
            break;

        case -1:
            printf("Error al realizar la operacion");
            break;

        case -2:
            printf("No se puede dividir por 0");
            break;

    }


    return 0;
}

int sumar(int a, int b, int *c)
{
    int retorno = 1;

    if(c != NULL)
    {
        *c=a+b;
        retorno=0;
    }

    return retorno;
}

int dividir(int a, int b, float *pResultado)
{
    int retorno = -1;

    if(pResultado!=NULL)
    {
        if(b!=0)
        {
            *pResultado=(float)a/b;
            retorno=0;
        }
        else
        {
            retorno =-2;
        }
    }
    return retorno;
}

int cambio(int *a, int *b)
{
    int retorno=-1;
    int temp;
    if(a!=NULL && b!=NULL)
    {
        temp=*a;
        *a=*b;
        *b=temp;
        retorno=0;
    }

    return retorno;
}

int factorial(int a)
{

 //   int b=a;


        if(a==0)
        {
            return 1;
        }
        return a * factorial(a-1);

}

*/

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define PASO 0
#define NO_PASO 1
#define SUMA 0
#define RESTA 1
#define MULTIPLICACION 2
#define DIVISION 3
#define FACTORIAL_1 4
#define FACTORIAL_2 5
#define FLAG_NUM_1 0
#define FLAG_NUM_2 1
#define FLAG_OPERASION 3
#define FLAG_DIVISION 4


int utn_menu();
void ingresoNumero(float* pIngreso, char* pMensaje, int* pFlagNum, int *flapOperacion);
void calculos(float num1, float num2,int flagNum1, int flagNum2, int* flagOperacion,int* flagErrorDivision , float* suma,float* resta, float* multiplicacion,int* errorDivision, float* division, int* factorial1, int* factorial2);
void resultados(int flagNum1, int flagNum2, int flagOperacion, int flagErrorDivision, float suma, float resta, float multiplicasion,float divicion,int factorial1, int factorial2);

int main()
{
    float numeroIngreso1;
    float numeroIngreso2;
    int seguir=1;

    float operaciones[7];
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorial1;
    int factorial2;

    int flag[5];
    int flagErrorDivision;
    int flagNum1 = NO_PASO;
    int flagNum2 = NO_PASO;
    int flagOperacion = NO_PASO;

    do
    {
    switch (utn_menu())
    {
        case 1:
            ingresoNumero(&numeroIngreso1, "Ingrese el primer operador: ", &flagNum1, &flagOperacion);
            break;

        case 2:
            ingresoNumero(&numeroIngreso2, "Ingrese el segundo operador: ", &flagNum2, &flagOperacion);
            break;

        case 3:
            calculos(numeroIngreso1,numeroIngreso2,flagNum1,flagNum2,&flagOperacion,&flagErrorDivision,&suma,&resta,&multiplicacion,&flagErrorDivision,&division,&factorial1,&factorial2);
            break;

        case 4:
            resultados(flagNum1,flagNum2,flagOperacion,flagErrorDivision,suma,resta,multiplicacion,division,factorial1,factorial2);
            break;

        case 5:
            seguir=0;
            break;
    }

    }while(seguir);

    return 0;
}

int utn_menu()
{
    float seleccion;

    printf("Ingrese la opcion deseada \n\n");
    printf("1 - Inngresar el primer operador\n");
    printf("2 - Inngresar el segundo operador\n");
    printf("3 - Calcular todas las operaciones\n");
    printf("4 - Informar resultados\n");
    printf("5 - Salir\n\n");

    utn_minMax(&seleccion, "Indique opcion: ", "Error", 1,5);
    utn_clear();

    return seleccion;

}

void ingresoNumero(float* pIngreso, char* pMensaje, int* pFlagNum, int *flapOperacion)
{
    if(*pFlagNum == PASO && *flapOperacion == PASO)
    {
        *flapOperacion = NO_PASO;
    }

    if(utn_minMax(pIngreso, pMensaje, "Error", -16777215,16777215) == 0)
    {
        utn_clear();
        printf("El operador fue cargado correctamente");
        *pFlagNum = PASO;
        utn_stop();
        utn_clear();
    }
    else
    {
        printf("Error en la carga del operador");
    }
}

void calculos(float num1, float num2,int flagNum1, int flagNum2, int* flagOperacion,int* flagErrorDivision , float* suma,float* resta, float* multiplicacion,int* errorDivision, float* division, int* factorial1, int* factorial2)
{
    int noDivision;
    int intNum1 = num1;
    int intNum2 = num2;
    if (flagNum2==PASO && flagNum2==PASO)
    {
        utn_operador('+',suma, num1, num2);
        utn_operador('-',resta, num1, num2);
        utn_operador('*',multiplicacion, num1, num2);
        noDivision = utn_operador('/',division,num1,num2);
        if(noDivision==1)
        {
            printf("No se puede dividir por 0\n");
        }
        if(num1-intNum1 && num1<0)
        {
            printf("No se puede realizar el factorial del primer operador\n");
            *factorial1=-1;
        }
        else
        {
            *factorial1=utn_factorial(intNum1);
        }

        if(num1-intNum1 && num1<0)
        {
            printf("No se puede realizar el factorial del segundo operador\n");
            *factorial1=-1;
        }
        else
        {
            *factorial2=utn_factorial(intNum2);
        }
        printf("Operaciones realizadas");
        *flagErrorDivision=noDivision;
        *flagOperacion=PASO;
    }
    else
    {
        printf("Primero deve ingresar los dos operadores ");

    }

    utn_stop();
    utn_clear();
}

void resultados(int flagNum1, int flagNum2, int flagOperacion, int flagErrorDivision, float suma, float resta, float multiplicasion,float divicion,int factorial1, int factorial2)
{
    if(flagNum1==PASO && flagNum2==PASO)
    {
        if(flagOperacion==PASO)
        {
            printf("La suma es %.2f\n", suma);
            printf("La resta es %.2f\n",resta);
            printf("La multiplicasion es %.2f\n",multiplicasion);
            if(flagErrorDivision==1)
            {
                printf("No se puede dividir por 0\n");
            }
            else
            {
                printf("El resultado de la division es %.2f\n", divicion);
            }
            if(factorial1==-1)
            {
                printf("No se puede factoriar este numero\n");
            }
            else
            {
                printf("La factorial del primer numero es %.d\n",factorial1);
            }

            if(factorial2==-1)
            {
                printf("No se puede factoriar este numero");
            }
            else
            {
                printf("La factorial del segundo numero es %.d\n",factorial2);
            }
        }
        else
        {
            printf("Primero deve realicar las operaciones");
        }
    }
    else
    {
        printf("Primero deve ingresar los dos operadores");
    }

    utn_stop();
    utn_clear();
}


