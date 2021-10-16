#ifndef ABM_H_INCLUDED
#define ABM_H_INCLUDED

int inicializarPersonas(eAlumno lista[], int tam);
int cargarPersona(eAlumno lista[], int tam, int* pId);
int buscarLibre(eAlumno lista[], int tam);
void mostrarPersona(eAlumno lista[], int tam);
int bajaPersona(eAlumno lista[], int tam);
int buscarPersonaId(eAlumno lista[], int tam, int id);
int menu();

#endif // ABM_H_INCLUDED
