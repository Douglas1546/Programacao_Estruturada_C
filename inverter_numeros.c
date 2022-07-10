#include <stdio.h>

int pot(int base, int expoente){

    int resultado = 1;
    while(expoente>0){
        resultado = resultado*base;
        expoente--;
    }
    return resultado;
}

int n_digitos(int numero){

    int cont = 0;
    
    while(numero>=1){
        numero = numero/10;
        cont++;
    }
    return cont;

}

int invert(int numero){

    int invertido = 0,

    contador= n_digitos(numero);

    while (numero>=1){
        invertido=invertido+(numero%10)*pot(10,contador-1);
        numero=numero/10;
        contador--;
    }
    return(invertido);
}

main(){

int numero;

printf("\nDigite um numero: ");
scanf("%d", &numero);
printf("\nInvertido: %d\n", invert(numero));

}