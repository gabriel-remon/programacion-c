#include <stdio.h>
#include <stdlib.h>
#include "../../../bibliotecas/utn.h"

typedef struct {

    int idProducto;
    char descripcion[10];
    char nacionalidad[6];
    char tipo[11];
    int precio;
} eApple;

int altaProducto(eApple carga[]);
int bajaProdcuto(eApple carga[]);
int modificacionProducto(eApple carga[]);
void listadoProductos()

int main()
{
    eApple productos[10];


    return 0;
}
