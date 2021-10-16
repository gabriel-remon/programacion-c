#include <stdio.h>
#include <stdlib.h>
#define SALUDO 1
#define BRINDAR 2
#define DESPEDIR 0


int main()
{
    int a=2;

    printf("%p ",&a);
}
/*

void saludar(int *a);
void brindar(int *a);
void despedir(int *a);
int salir();
int utn_menu();
void utn_stop();
void utn_clear();


int main()
{
    int continuar=1;
    char salir;
    int flag=0;
    do
    {
        utn_clear(); //limpia pantalla

        switch(utn_menu()) //Imprime el menu de opciones, valida y devuelve el numero elegido
        {
            case 1:
                saludar(&flag);
                break;

            case 2:
                brindar(&flag);
                break;

            case 3:
                despedir(&flag);
                break;

            case 4:
                printf("Esta seguro que desea salir? (Y/N)");
                __fpurge(stdin);
                scanf("%c", &salir);
                if(salir=='Y')
                {
                    continuar=0;
                }
                break;

            default:
                printf("Opcion invalida");
                break;
        }
    }while(continuar); // El programa se repetira hasta que el usuario ingrese 5

    return 0;
}

int utn_menu()
{
    int seleccion;

    printf("Ingrese la opcion deseada \n\n");
    printf("1 - salude\n");
    printf("2 - brinde\n");
    printf("3 - despedirse\n");
    printf("4 - Fin del programa\n");
    __fpurge(stdin);
    scanf("%d", &seleccion);
    utn_clear();

    return seleccion;

}

void saludar(int *a)
{
    printf("Hola don pepito");
    *a=SALUDO;
    utn_stop();
}

void brindar(int *a)
{
    if(*a==SALUDO)
    {
        printf("Chin chin");
        *a=BRINDAR;
    }
    else
    {
        printf("No se saludo");
    }
    utn_stop();
}

void despedir(int *a)
{
    if(*a==BRINDAR)
    {
        printf("buenos dias, buenas tardes, buenas noches ");
        *a=DESPEDIR;
    }
    else
    {
       if(*a==SALUDO)
       {
            printf("primero se deve brindar");
       }
       else
       {

            printf("primero se deve saludar");
       }
    }
    utn_stop();
}

void utn_stop()
{
    printf("\n\nPrecione Enter para continuar");
    __fpurge(stdin);
    getchar();
}

void utn_clear()
{
    system("@cls||clear");
}

*/


