#include <stdio.h>
#include <stdlib.h>

typedef struct {

int numero1;
int numero2;
float promedio;
int suma;

}eVariable;

int main()
{
    eVariable operacion;

    operacion.numero1=2;
    operacion.numero2=4;
    operacion.promedio=(float) operacion.numero1/operacion.numero2;
    operacion.suma=operacion.numero1+operacion.numero2;

    printf("la suma es: %d \n", operacion.suma);
    printf("la divicion es : %3.2f", operacion.promedio);

    return 0;
}
