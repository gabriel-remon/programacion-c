#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroCliente;
    char estadoCivil;
    int edad;
    float temp;
    char genero;
    char continual;
    int viudoViejo;
    int edadPasajeroJoven;
    int numeroPasajeroJoven;
    int precioViaje;
    float precioFinal;
    int contadorJoven;
    int contadorViejo;
    int descuento;
    float precioDescuento;

    precioViaje=600;
    viudoViejo = 0;
    edadPasajeroJoven=0;
    numeroCliente=0;
    contadorJoven=0;
    contadorViejo=0;


    do{
        numeroCliente++;

        printf("Ingrese los datos del %dº cliente \n \n", numeroCliente);

        printf("Ingrese el estado civil (s soltero, c casado, v viudo)");
        __fpurge(stdin);
        scanf("%c", &estadoCivil);
        while(estadoCivil!='s' && estadoCivil!='c' && estadoCivil!='v')
        {
            printf("Error ingrese solamente (s soltero, c casado, v viudo)");
            __fpurge(stdin);
            scanf("%c", &estadoCivil);
        }

        printf("Ingrese su edad (somo mayores de 17) ");
        scanf("%d", &edad);
        while(edad<18 || edad>110)
        {
            printf("Error ingrese una edad valida ");
            scanf("%d", &edad);
        }

        printf("Ingrese la temperatura corporal ");
        scanf("%f", &temp);
        while(temp<34 || temp>44)
        {
            printf("Error ingrese una edad valida ");
            scanf("%f", &temp);
        }

        printf("Ingrese el genero(f femenino, m masculino, o  no binario) ");
        __fpurge(stdin);
        scanf("%c", &genero);
        while(genero!='f' && genero!='m' && genero!='o' )
        {
            printf("Error ingrese ingrenero valido (f femenino, m masculino, o  no binario) ");
            __fpurge(stdin);
            scanf("%c", &genero);
        }

        if(edad>60)
        {
            contadorViejo++;
            if(estadoCivil=='v')
            {
                viudoViejo++;
            }
        }
        else
        {
            contadorJoven++;
        }

        if((edad<edadPasajeroJoven || edadPasajeroJoven==0) && genero=='f' )
        {
            edadPasajeroJoven=edad;
            numeroPasajeroJoven=numeroCliente;
        }

        __fpurge(stdin);
        printf("Desea continuar? (y/n) ");
        scanf("%c", &continual);
    }while(continual == 'y');

    precioFinal = precioViaje * numeroCliente;

    if(viudoViejo!=0)
    {
        printf("Hay %d personas que son viudos y tienen mas de 60 años \n", viudoViejo);
    }
    else
    {
        printf("No se ingresaron personas viudas con mas de 60 años \n");
    }

    if(edadPasajeroJoven!=0)
    {
        printf("La clienta mujer, numero %d con edad %d es la mas joven \n", numeroPasajeroJoven, edadPasajeroJoven);
    }
    else
    {
        printf("No se ingresaron mujeres \n");
    }

    if(contadorViejo>contadorJoven)
    {
        descuento=25;
        precioDescuento=precioFinal-((precioFinal/100)*descuento);
        printf("El valor del viaje sin descuento es $ %.2f \n", precioFinal);
        printf("El valor del viaje con un descuento del %25 es $ %.2f", precioDescuento);
    }
    else
    {
        printf("El valor del viaje es $ %.2f \n", precioFinal);
    }

}
