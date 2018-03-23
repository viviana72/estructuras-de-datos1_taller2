#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorDolar, canDolar, resultado;
    printf("ingrese el valor del dolar\n");
    scanf("%d",&valorDolar);
    printf("ingrese la cantidad de dolares\n");
    scanf("%d",&canDolar);
    resultado=valorDolar*canDolar;
    printf("el total de dinero en dolares es: %d \n",resultado);
    return 0;
}
