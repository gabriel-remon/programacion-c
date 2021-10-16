#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_minMax(int* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo);//ingresa un numero entre un maximo y un minimo hasta que sea el correcto
int utn_convercionTemp(float* pResultado, int temp, int tipo);//tipo=0 - convierte de celcius a farenheit ; tipo=1 - convierte de farengeit a celcius
int utn_getInt(int* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo, int intentos);//pide un entero y valida entre maximo y minimo
int utn_getFloat(float* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo, int intentos);//pide un flotante y valida entre maximo y minimo
int utn_getChar(char* pResultado, char* pMensaje, char* pMensajeError, char minimo, char maximo, int intentos);//pide un caracter y valida entre maximo y minimo
int utn_division(float* pResultado, int num1, int num2); //operador para dividir
int utn_operador(char tipoOperador,int* pResultado, int num1, int num2); //operador para +, - y *
int utn_factorial(int* pResultado, int num); //operacion factoreal de un numero
int utn_inputNum(int* pResultado, char* pMensaje, char* pMensajeError); //pide un entero y lo valida
void utn_clear(); //limpia la pantalla (linux)
int utn_menu(); //muestra un menu de opciones, valida y devuelve un numero
void utn_stop(); //pausa el programa hasta que se precione enter
void utn_ingresoVector(int *pVector,char *mensajeIngreso, char *mensajeError , int cantidad);
int utn_sumaVector(int *pResultado, int *pVector, int cantidad);


#endif // UTN_H
