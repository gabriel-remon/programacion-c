#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_getTemp(int* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo);
int utn_convercionTemp(float* pResultado, int temp, int tipo);


#endif // UTN_H
