#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int id;
    char nombre[10];
    char sexo;
    int edad;
    float altura;
    int flagCarga;
} eAlumno;

#endif // ALUMNO_H_INCLUDED
