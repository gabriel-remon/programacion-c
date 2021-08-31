/*
se necesita llevar el registro de un vacunatorio para ello se necesita

nombre (la inicial)
edad (mayor igual a 12 años)
vacuna (r rusa, c china, a america)
si la edad esta entre 12 y 17 solo americana
dosis (p primera dosis o s segunda)
sexo (f o m)

a- promedio de edad rusa
b nombre y edad mujer mas grande
c personas de americana que porcentajen son mayores de edad
d que porcentaje de los que estan vacunados con dos dosis
e vacuna menos aplicada

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombreIngresado;
    int edadIngresada;
    char vacunaIngresada;
    char dosisIngresada;
    char sexoIngresado;
    char continuar;

    int sumaEdadRusa = 0;
    float PromedioEdadRusa;

    int edadMujerGrande;
    char nombreMujerGrande;
    int banderaMujer = 1;

    int contadorAmericanaMenores = 0;
    int contadorAmericanaMajores = 0;
    float porcentajeAmericanaMajores;

    int contadorVacunaPrimera = 0;
    int contadorVacunaSegunda = 0;
    float porcentajeVacunaSegunda;

    int contadorVacunarusa = 0;
    int contadorVacunachina = 0;
    int contadorVacunaAmericana;

    do
    {
        printf("Ingrese la inicial de su nombre ");
        __fpurge(stdin);
        scanf("%c", &nombreIngresado);

        printf("Ingrese su edad (mayor a 11) ");
        scanf("%d", &edadIngresada);
        while(edadIngresada<12 || edadIngresada>120)
        {
            printf("Error, Ingrese su edad (mayor a 11) ");
            scanf("%d", &edadIngresada);
        }
        if(edadIngresada<18)
        {
            printf("Como es menor solo ingreso la vacuna americana \n");
            vacunaIngresada='a';
        }
        else
        {
            printf("Ingrese la inicial de la vacuna aplicada (rusa, china americana) ");
            __fpurge(stdin);
            scanf("%c", &vacunaIngresada);
            while(vacunaIngresada!='r' && vacunaIngresada!='c' && vacunaIngresada!='a')
            {
                printf("Error, Ingrese la inicial de la vacuna aplicada (rusa, china americana) ");
                __fpurge(stdin);
                scanf("%c", &vacunaIngresada);
            }
        }

        printf("Ingrese p para primera dosis o s para la segunda ");
        __fpurge(stdin);
        scanf("%c", &dosisIngresada);
        while(dosisIngresada!='p' && dosisIngresada!='s')
        {
            printf("Error, Ingrese p para primera dosis o s para la segunda ");
            __fpurge(stdin);
            scanf("%c", &dosisIngresada);
        }

        printf("Ingrese el sexo del sexo (f o m) ");
        __fpurge(stdin);
        scanf("%c", &sexoIngresado);
        while(sexoIngresado!='f' && sexoIngresado!='m')
        {
            printf("Error, Ingrese el sexo del sexo (f o m) ");
            __fpurge(stdin);
            scanf("%c", &sexoIngresado);
        }

        if(sexoIngresado=='f')
        {
            if(banderaMujer || edadIngresada>edadMujerGrande)
            {
                edadMujerGrande=edadIngresada;
                nombreMujerGrande=nombreIngresado;
                banderaMujer = 0;
            }
        }

        if(dosisIngresada == 'p')
        {
            contadorVacunaPrimera++;
        }
        else
        {
            contadorVacunaSegunda++;
        }

        switch(vacunaIngresada)
        {
            case 'r':
                contadorVacunarusa++;
                sumaEdadRusa=sumaEdadRusa+edadIngresada;
            break;

            case 'c':
                contadorVacunachina++;
            break;

            case 'a':
                contadorVacunaAmericana++;
                if(edadIngresada>17)
                {
                    contadorAmericanaMajores++;
                }

            break;
        }



        printf("Desea continuar? y/n \n ");
        __fpurge(stdin);
        scanf("%c", &continuar);

    }while(continuar == 'y');


    if(contadorVacunarusa==0) //promedio edades rusa
    {
        printf("No se ingresaron pacientes con vacuna rusa \n");
    }
    else
    {
        PromedioEdadRusa= (float) sumaEdadRusa/contadorVacunarusa;
        printf("El promedio de edades que se aplicaron la vacuna rusa es %.2f \n", PromedioEdadRusa);
    }

    if(contadorAmericanaMajores==0) // porcentaje de mayores con vacuna americana
    {
        printf("No se ingresaron pacientes mayores de edad con vacuna americana  \n");
    }
    else
    {
        porcentajeAmericanaMajores =(float) (contadorAmericanaMajores / (contadorVacunaAmericana)) * 100;
        printf("El porcentaje de personas majores de edad con la vacuna americana es &.2f \n", porcentajeAmericanaMajores);
    }

    if(banderaMujer==1) // mujer mayor
    {
        printf("No se ingreso ninguna paciente mujer \n");
    }
    else
    {
        printf("La inicial de la mujer mas grande es %c y tiene %d anios \n", nombreMujerGrande, edadMujerGrande);
    }

    porcentajeVacunaSegunda= (float) (contadorVacunaSegunda/(contadorVacunaPrimera+contadorVacunaSegunda)) * 100;
    printf("El porcentaje de vaunas que tienen las dos dosis es %.2f \n", porcentajeVacunaSegunda);

    if(contadorVacunarusa>contadorVacunaAmericana && contadorVacunarusa>contadorVacunachina) //vacuna mas inoculada
    {
        printf("La vacuna rusa es la mas aplicada");
    }
    else
    {
        if(contadorVacunaAmericana>contadorVacunachina)
        {
            printf("La vacuna americana es la mas aplicada");
        }
        else
        {
            printf("La vacuna china es la mas aplicada");
        }
    }

}
