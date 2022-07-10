#include <stdio.h>

int main(void){

    int n, n_maior = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    n_maior = n;
    
    while (n != 0){

        printf("Digite um numero: ");
        scanf("%d", &n);

        if(n > n_maior) n_maior = n;

    }

    printf("o maior numero digitado e: %d", n_maior);
}