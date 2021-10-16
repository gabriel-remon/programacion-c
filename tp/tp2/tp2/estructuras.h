#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED
#define OCUPADO 0
#define VACIO 1

typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    float sueldo;
    int sector;
    int isEmpty;
}eEmpleados;

#endif // ESTRUCTURAS_H_INCLUDED
