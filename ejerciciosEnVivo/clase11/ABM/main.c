#include <stdio.h>
#include <stdlib.h>
#include "../../../bibliotecas/utn.h"
#include "alumno.h"
#include "ABM.h"
#define TAM 10
/*
int inicializarPersonas(eAlumno lista[], int tam);
int cargarPersona(eAlumno lista[], int tam, int* pId);
int buscarLibre(eAlumno lista[], int tam);
void mostrarPersona(eAlumno lista[], int tam);
int bajaPersona(eAlumno lista[], int tam);
int buscarPersonaId(eAlumno lista[], int tam, int id);

int menu();
*/
int main()
{
    char seguir='s';
    eAlumno persona[TAM];
    int nextId=2000;
    inicializarPersonas(persona, TAM);

    do
    {
        switch(menu())
        {
            case 1:
                cargarPersona(persona,TAM, &nextId);
            break;

            case 2:
                bajaPersona(persona, TAM);
            break;

            case 3:
            break;

            case 4:
            break;

            case 5:
                mostrarPersona(persona, TAM);
            break;

            case 6:
            break;

            default:
            printf("Error ingrese una opcion valida");
            break;
        }
        utn_clear();

    }while(seguir=='s');

    return 0;
}
/*
int menu()
{
    int retorno;
    printf("Ingrese la opcion deseada \n\n");

    printf("1- Alta persona\n");
    printf("2- baja persona\n");
    printf("3- modificacion persona\n");
    printf("4- ordenar persona\n");
    printf("5- listado persona\n");
    printf("6- salir\n");

     __fpurge(stdin);
    scanf("%d", &retorno);

    return retorno;
}

int inicializarPersonas(eAlumno lista[], int tam)
{
    int retorno=-1;

    if(lista!=NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            lista[i].flagCarga=0;
        }
        retorno=0;
    }
    return retorno;
}

int cargarPersona(eAlumno lista[], int tam, int* pId)
{
    int retorno=-1;
    int indice;
    eAlumno auxPersona;

    if(lista!=NULL && tam>0)
    {
        utn_clear();
        indice=buscarLibre(lista,tam);
        if(indice>=0)
        {
            auxPersona.id=*pId;
            printf("Ingrese el nombre: ");
            __fpurge(stdin);
            gets(&auxPersona.nombre);
            utn_getChar(&auxPersona.sexo,"Ingrese el sexo (f/m): ", "Error, ");
            utn_getInt(&auxPersona.edad,"Ingrese la edad: ", "Error, ");
            utn_getInt(&auxPersona.altura,"Ingrese la altura: ", "Error, ");
            auxPersona.flagCarga=1;

            lista[indice]=auxPersona;

            (*pId)++;
            retorno=0;

        }
        else
        {
            printf("No hay lugar para cargar otra persona\n");
        }

    }
    return retorno;
}

int buscarLibre(eAlumno lista[], int tam)
{
    int retorno=-2;
    int i=0;

    if(lista!=NULL && tam>0)
    {
        for(i=0; i<tam; i++)
        {
            if(lista[i].flagCarga==0)
            {
                retorno=i;
                break;
            }
            else
            {
                if(i==tam)
                {
                retorno=-1;
                }
            }
        }

    }
    return retorno;
}

void mostrarPersona(eAlumno lista[], int tam)
{
    utn_clear();
    printf("-------------  listado de personas  -------------\n\n");
    printf("id     nombre   sexo   edad   altura  \n");

    for(int i=0; i<tam; i++)
    {
        if(lista[i].flagCarga)
        {
            printf("%d   %s   %c       %d         %.2f \n",
                        lista[i].id,
                        lista[i].nombre,
                        lista[i].sexo,
                        lista[i].edad,
                        lista[i].altura);
        }
    }

    utn_stop();
}

int bajaPersona(eAlumno lista[], int tam)
{
   int retorno=-1;
    int cargaId;
    char desicion;
    int indise;

    if(lista!=NULL && tam>0)
    {
        utn_clear();
        utn_getInt(&cargaId, "Ingrese el id a buscar", "Error, ");
        indise=buscarPersonaId(lista,tam,cargaId);
        if(indise>=0)
        {
            printf("Datos de persona seleccionada: \n");
            printf("id     nombre   sexo   edad   altura  \n");
            printf("%d   %s   %c       %d         %.2f \n",
                        lista[indise].id,
                        lista[indise].nombre,
                        lista[indise].sexo,
                        lista[indise].edad,
                        lista[indise].altura);

            utn_getCharDos(&desicion, "Confirmar baja (Y/N)","Error, ", 'y','n');
            if(desicion=='y')
            {
                utn_clear();
                lista[indise].flagCarga=0;
                printf("Baja realizada\n");
                retorno=0;
            }
        }
        else
        {
        printf("No se encontro el ID ingresado\n");
        }
        utn_stop();
    }

    return retorno;
}
int buscarPersonaId(eAlumno lista[], int tam, int id)
{
    int retorno=-1;

    if(lista!=NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            if(lista[i].id==id && lista[i].flagCarga)
            {
                retorno=i;
                break;
            }
        }

    }
    return retorno;
}
*/
