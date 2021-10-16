#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>
#include "utn.h"
#include "estructuras.h"
#define TAM 1000

int menu();
int modificacion();
int inicializacion(eEmpleados vector[], int tam);
int espacioLibre(eEmpleados vector[], int tam);
int altaEmpleado(eEmpleados vector[], int tam, int* id);
int modificacionEmpleado(eEmpleados vector[], int tam);
int buscarId(eEmpleados vector[], int tam);
int bajaEmpleado(eEmpleados vector[], int tam);
void mostrarEmpleados(eEmpleados vector[], int tam);
int ordenarApellidoSector(eEmpleados vector[], int tam, int orden);
void errorfaltaDato();

int main()
{
    eEmpleados nomina[TAM];
    int asignacionId=2000;
    char segir='n';

    inicializacion(nomina,TAM);
    do
    {
        switch(menu())
        {
        case 1:
            altaEmpleado(nomina,TAM, &asignacionId);
            break;

        case 2:
            modificacionEmpleado(nomina,TAM);
            break;

        case 3:
            bajaEmpleado(nomina,TAM);
            break;

        case 4:
            mostrarEmpleados(nomina,TAM);
            break;

        case 5:
            utn_getCharDos(&segir, "Esta seguro que desea salir (y/n)?", "Error ingrese 'y' o 'n'\n", 'y','n');
            break;

        default:
            printf("Error ingrese una opcion valida");
            break;
        }

        utn_stop();
        utn_clear();
    }
    while(segir=='n');
    return 0;
}

void errorfaltaDato()
{
    utn_clear();
    printf("Primero deve ingresar un empleado");
}

int menu()
{
    int retorno;

    printf("-----------------Registro de empleados---------------\n\n");

    printf("1- ALTAS\n");
    printf("2- MODIFICAR\n");
    printf("3-BAJA\n");
    printf("4-INFORMAR\n");
    printf("5-SALIR\n\n");

    printf("Ingrese la opcion deseada: ");
    __fpurge(stdin);
    scanf("%d", &retorno);
    return retorno;
}

int modificacion()
{
    int retorno;

    printf("1-Nombre\n");
    printf("2-Apellido\n");
    printf("3-Sueldo\n");
    printf("4-Sector\n");
    printf("5-Salir \n");

    printf("Ingrese la opcion a modificar: ");

    __fpurge(stdin);
    scanf("%d", &retorno);
    utn_clear();
    return retorno;

}

int espacioLibre(eEmpleados vector[], int tam)
{
    int retorno=-1;
    int flagEspacioLibre=1;
    int contadorLibres=0;
    int i;
    if(vector!=NULL && tam>0)
    {
        for( i=0; i<tam; i++)
        {
            if(vector[i].isEmpty && flagEspacioLibre)
            {
                retorno=i;
                flagEspacioLibre=0;
            }
            if(vector[i].isEmpty)
            {
                contadorLibres++;
            }
        }
        if(contadorLibres==tam)
        {
            retorno=-2;
        }
    }

    return retorno;
}

int inicializacion(eEmpleados vector[], int tam)
{
    int retorno=-1;

    if(vector!=NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            vector[i].isEmpty=VACIO;
        }
        retorno=0;
    }

    return retorno;
}

int altaEmpleado(eEmpleados vector[], int tam, int* id)
{
    int retorno=-1;
    int posicion;
    eEmpleados aux;

    if(vector!=NULL && tam>0 && id!=NULL)
    {
        utn_clear();

        posicion=espacioLibre(vector,tam);
        if(posicion==-2)
        {
            posicion=0;
        }
        if(posicion>=0)
        {
            aux.id = (*id);
            utn_ingresoScring(aux.nombre, "Ingrese el nombre del empleado: ", "Error (maximo 50 caracteres), ", 51);
            utn_ingresoScring(aux.apellido, "Ingrese el apellido del empleado: ", "Error (maximo 50 caracteres), ", 51);
            utn_getFloat(&aux.sueldo, "Ingrese el salario del empleado: ","Error, ");
            utn_getInt(&aux.sector, "Ingrese el sector donde estara el empleado: ", "Error, ");

            aux.isEmpty=OCUPADO;
            vector[posicion]=aux;
            (*id)++;
            printf("Empleado cargado con exito\n");

            retorno=0;
        }
        else
        {
            printf("No hay espacio para cargar mas empleados.\nPara hacerlo deve dar de baja a un empleado actual.");
            retorno=1;
        }
        // utn_stop();


    }

    return retorno;
}

int buscarId(eEmpleados vector[], int tam)
{
    int retorno=-1;
    int bufferTemp;

    if(vector!=NULL && tam>0)
    {

        utn_getInt(&bufferTemp, "Ingrese el id del empleado: ","Error id invalido, ");
        for(int i=0; i<tam; i++)
        {
            if(bufferTemp==vector[i].id && vector[i].isEmpty==OCUPADO)
            {
                retorno=i;
                break;
            }
        }

    }

    return retorno;
}

int modificacionEmpleado(eEmpleados vector[], int tam)
{
    int retorno=-1;
    int posicion;
    char segir='n';

    if(vector!=NULL && tam>0)
    {
        utn_clear();
        if(espacioLibre(vector,tam)!=-2)
        {
            posicion=buscarId(vector,tam);
            if(posicion>=0)
            {
                do
                {
                    utn_clear();
                    printf("Datos del empleado:\n\n");
                    printf("Id: %d \nNombre: %s \nApellido: %s \nSalario: %.2f$ \nSector: %d \n\n",
                           vector[posicion].id,
                           vector[posicion].nombre,
                           vector[posicion].apellido,
                           vector[posicion].sueldo,
                           vector[posicion].sector
                          );

                    switch(modificacion())
                    {
                    case 1:
                        utn_ingresoScring(vector[posicion].nombre, "Ingrese el nombre del empleado: ", "Error (maximo 50 caracteres), ", 51);
                        printf("\nNombre cambiado correctamente");
                        utn_stop();
                        break;

                    case 2:
                        utn_ingresoScring(vector[posicion].apellido, "Ingrese el apellido del empleado: ", "Error (maximo 50 caracteres), ", 51);
                        printf("\nApellido cambiado correctamente");
                        utn_stop();
                        break;

                    case 3:
                        utn_getFloat(&vector[posicion].sueldo, "Ingrese el salario del empleado: ","Error, ");
                        printf("\nSueldo cambiado correctamente");
                        utn_stop();
                        break;

                    case 4:
                        utn_getInt(&vector[posicion].sector, "Ingrese el sector donde estara el empleado: ", "Error, ");
                        printf("\nSector cambiado correctamente");
                        utn_stop();
                        break;

                    case 5:
                        utn_getCharDos(&segir, "Esta seguro que desea salir (y/n)?", "Error ingrese 'y' o 'n'\n", 'y','n');
                        break;

                    default:
                        printf("Error ingrese una opcion valida\n");
                        break;
                    }
                }
                while(segir=='n');
            }
            else
            {
                printf("Id no encontrado\n");
            }
        }
        else
        {
            errorfaltaDato();
        }

        retorno=0;
    }

    return retorno;
}

int bajaEmpleado(eEmpleados vector[], int tam)
{
    int retorno=-1;
    int posicion;
    char seguir;

    if(vector!=NULL && tam>0)
    {
        utn_clear();
        if(espacioLibre(vector,tam)!=-2)
        {
            posicion=buscarId(vector, tam);
            if(posicion>=0)
            {
                utn_clear();
                printf("Datos del empleado:\n\n");
                printf("Id: %d \nNombre: %s \nApellido: %s \nSalario: %.2f$ \nSector: %d \n",
                       vector[posicion].id,
                       vector[posicion].nombre,
                       vector[posicion].apellido,
                       vector[posicion].sueldo,
                       vector[posicion].sector
                      );

                utn_getCharDos(&seguir,"\nConfirmar la baja de este empleado(y/n) ", "Error, Ingrese 'y' o 'n'\n",'y','n');
                utn_clear();
                if(seguir=='y')
                {
                    vector[posicion].isEmpty=VACIO;
                    printf("Empleado dado de baja");
                }
                else
                {
                    printf("Se cancelo la operacion");
                }
            }
            else
            {
                printf("Id no encontrado\n");
            }
        }
        else
        {
            errorfaltaDato();
        }

        retorno=0;
        //  utn_stop();
    }


    return retorno;
}

void mostrarEmpleados(eEmpleados vector[], int tam)
{
    int cantidadEmpleados=0;
    float totalSalario=0;
    float promedioSalarios;
    int superaPromedio=0;
    int orden;

    if(vector!=NULL && tam>0)
    {
        if(espacioLibre(vector,tam)!=-2)
        {
            utn_clear();
            utn_minMaxInt(&orden, "Ingrese 1 para ordenar de forma asendente. Ingrese 0 para ordenar de forma desendente","Error, Ingrese unicamente 1 o 0 \n", 0,1);
            ordenarApellidoSector(vector, tam, orden);
            utn_clear();

            printf("-----------------Lista de empleados----------------- \n\n");
            printf("Id       Nombre         Apellido        Sueldo             Sector\n");
            for(int i=0; i<tam; i++)
            {
                if( vector[i].isEmpty == OCUPADO)
                {
                    printf("%d     %-10s     %-13s   $%-13.2f     %d\n",
                           vector[i].id,
                           vector[i].nombre,
                           vector[i].apellido,
                           vector[i].sueldo,
                           vector[i].sector);

                    totalSalario=totalSalario+vector[i].sueldo;
                    cantidadEmpleados++;
                }

            }
            promedioSalarios=totalSalario/cantidadEmpleados;
            for(int i=0; i<tam; i++)
            {
                if( vector[i].isEmpty == OCUPADO && vector[i].sueldo>promedioSalarios)
                {
                    superaPromedio++;
                }

            }

            printf("\nTotal de empleados: %d \nPromedio de sueldos: $%.2f\n", cantidadEmpleados, promedioSalarios);
            printf("Hay %d empleados que superan el salario promedio", superaPromedio);
        }
        else
        {
            errorfaltaDato();
        }

    }


}

int ordenarApellidoSector(eEmpleados vector[], int tam, int orden)
{
    int retorno=-1;
    int comparadorApellido;
    eEmpleados aux;

    if(vector!=NULL && tam>0)
    {
        for(int i=0; i<tam-1; i++)
        {
            if(vector[i].isEmpty)
            {
                continue;
            }
            for(int j=i+1; j<tam; j++)
            {
                comparadorApellido=strncasecmp(vector[i].apellido, vector[j].apellido, 51);
                if( vector[j].isEmpty == OCUPADO &&
                    (((comparadorApellido>0 || (comparadorApellido==0 && vector[i].sector>vector[j].sector)) && orden) ||
                     ((comparadorApellido<0 || (comparadorApellido==0 && vector[i].sector<vector[j].sector)) && !orden)
                    ))
                {
                    aux=vector[i];
                    vector[i]=vector[j];
                    vector[j]=aux;
                }
            }
        }

        retorno=0;
    }

    return retorno;
}
