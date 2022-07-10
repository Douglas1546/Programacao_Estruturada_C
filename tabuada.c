#include <stdio.h>

int main (){

    int limite = 4, contador = 0, resultado;

    while (contador<=limite){
    resultado = 8 * contador;

    printf("\n8 x %d = %d", contador, resultado);
    contador++;
    }

}