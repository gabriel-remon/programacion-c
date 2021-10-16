#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_minMaxInt(int* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo);//ingresa un numero entre un maximo y un minimo hasta que sea el correcto
int utn_minMaxFloat(float* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo);
int utn_getCharDos(char* pResultado, char* pMensaje, char* pMensajeError, char criterio1, char criterio2);

int utn_getInt(int* pResultado, char* pMensaje, char* pMensajeError);
int utn_getFloat(float* pResultado, char* pMensaje, char* pMensajeError);
int utn_getChar(char* pResultado, char* pMensaje, char* pMensajeError);

int utn_division(float* pResultado, int num1, int num2); //operador para dividir
int utn_operador(char tipoOperador,int* pResultado, int num1, int num2); //operador para +, - y *
int utn_operadorFloat(char tipoOperador,float* pResultado, float num1, float num2);
int utn_factorial( int num); //operacion factoreal de un numero

void utn_clear(); //limpia la pantalla (linux)
void utn_stop(); //pausa el programa hasta que se precione enter

int utn_ordenarEnteros(int vec[], int tam, int criterio);
int utn_ordenarFloat(float vec[], int tam, int criterio);
int utn_ordenarChar(char vec[], int tam, int criterio);
int utn_swapInt(int* num1, int* num2);
int utn_swapFloat(float* num1, float* num2);
int utn_swapChar(char* car1, char* car2);

int utn_ingresoScring(char cadena[],char* pMensaje, char* pMensajeError, int tamPermitido);


#endif // UTN_H
