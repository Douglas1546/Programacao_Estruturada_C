#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 8

int max_min(){

 int numeros[TAM];
 int i, aux, contador;
 int *maior[4] = {&numeros[4], &numeros[5], &numeros[6], &numeros[7]};
 int *menor[4] = {&numeros[0], &numeros[1], &numeros[2], &numeros[3]};

printf("\nDigite um numero de cada vez ate preencher o array de oito números, e pressione enter após digitar cada um\n");
 for (i = 0; i < TAM; i++){
printf("Digite um numero: ");
 scanf("%d", &numeros[i]);
 }

printf("Numeros digitados armazenados no array:\n");

for (i = 0; i < TAM; i++){
 printf("%4d    ", numeros[i]);
}
 for (contador = 1; contador < TAM; contador++){
   for (i = 0; i < TAM - 1; i++){
     if (numeros[i] > numeros[i + 1]){
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       numeros[i + 1] = aux;
     }
   }
 }
for (i = 0; i < TAM; i++);

printf("\n\nOs maiores valores digitados sao: ");

    for (i=0; i<4; i++){
        printf("%d    ", *maior[i]);
    }
    
    printf("\n\nOs menores valores digitados sao: ");

    for (i=0; i<4; i++){
        printf("%d    ", *menor[i]);
       
    }
}
int main(){

max_min();

}
