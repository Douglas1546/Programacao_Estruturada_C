#include <stdio.h>
#include <string.h>

int main(void){

    int valor;

    printf("Digite um numero entre 0 e 20: ");
    scanf("%d", &valor);

    switch (valor){

        case 0: printf("\nZERO\n\n"); break;
        case 1: printf("\nUM\n\n"); break;
        case 2: printf("\nDOIS\n\n"); break;
        case 3: printf("\nTRES\n\n"); break;
        case 4: printf("\nQUATRO\n\n"); break;
        case 5: printf("\nCINCO\n\n"); break;
        case 6: printf("\nSEIS\n\n"); break;
        case 7: printf("\nSETE\n\n"); break;
        case 8: printf("\nOITO\n\n"); break;
        case 9: printf("\nNOVE\n\n"); break;
        case 10: printf("\nDEZ\n\n"); break;
        case 11: printf("\nONZE\n\n"); break;
        case 12: printf("\nDOZE\n\n"); break;
        case 13: printf("\nTREZE\n\n"); break;
        case 14: printf("\nCATORZE\n\n"); break;
        case 15: printf("\nQUINZE\n\n"); break;
        case 16: printf("\nDEZESSEIS\n\n"); break;
        case 17: printf("\nDEZESSETE\n\n"); break;
        case 18: printf("\nDEZOITO\n\n"); break;
        case 19: printf("\nDEZENOVE\n\n"); break;
        case 20: printf("\nVINTE\n\n\n\n"); break;
        default: printf("\nNumero invalido\n\n"); break;
    }

    return 0;


}