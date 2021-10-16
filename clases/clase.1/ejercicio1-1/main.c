#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *env[])
{
    int i;
    int b;
    scanf("%d",&b);
    printf("El valor de argc es: %d \n", argc);
    printf("%d\n",factorial(b));
    for(i=0; i<argc; i++)
        printf("el argumento %d es : %s \n",i,argv[i]);
    for(i=0; env[i]!=NULL; i++)
        printf("La variable de ambiente %d es: %s \n", i, env[i]);


    return 0;
}

int factorial(int num)
{
    if (num==0) return 1;
    return num* factorial(num-1);
}
