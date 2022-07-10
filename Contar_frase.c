#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[100];
    int i, conta=0;

    printf("Digite uma frase: ");
    
    fgets(texto, 150, stdin);

    for(i=0; texto[i] != '\0'; i++){

        if(texto[i]==' ') {

    conta++;
        }

    }printf("numero de palavras = %d",conta+1);


    return 0;
}