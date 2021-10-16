#include <stdio.h>
#include <stdlib.h>
#include "../../../bibliotecas/utn.h"

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int legajo;
    char nombre[10];
    char sexo;
    int nota1;
    int nota2;
    float promedio;
    eFecha fechaIngreso;
} eAlumno;

int CargarAlumno(eAlumno vAlumno[], int tam);
int mostrarAlumno(eAlumno vAlumno[], int tam);
void grafica();

int main()
{
    eAlumno alumnos[10];

    CargarAlumno(alumnos, 3);
    mostrarAlumno(alumnos, 3);


    return 0;
}

int CargarAlumno(eAlumno vAlumno[], int tam)
{
    int retorno=-1;
    if(vAlumno!=NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            utn_getInt(&vAlumno[i].legajo,"Ingrese el numero de legajo: ", "Error, ");
            printf("Ingrese el nombre: ");
            gets(&vAlumno[i].nombre);
            utn_getChar(&vAlumno[i].sexo,"Ingrese el sexo (f/m): ", "Error, ");
            utn_getInt(&vAlumno[i].nota1,"Ingrese la primera nota: ", "Error, ");
            utn_getInt(&vAlumno[i].nota2,"Ingrese la segunda nota: ", "Error, ");
            vAlumno[i].promedio= (float) (vAlumno[i].nota1+vAlumno[i].nota2)/2;
        }
        retorno=0;
    }

    return retorno;
}
int mostrarAlumno(eAlumno vAlumno[], int tam)
{
    int retorno=-1;
    if(vAlumno!=NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            printf("%d   %s   %c   %d   %d   %.2f \n",
                    vAlumno[i].legajo,
                    vAlumno[i].nombre,
                    vAlumno[i].sexo,
                    vAlumno[i].nota1,
                    vAlumno[i].nota2,
                    vAlumno[i].promedio);
        }
        retorno=0;
    }

    return retorno;
}
