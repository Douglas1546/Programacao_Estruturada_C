#include <stdio.h>

int main(void){

    int c = 167, celsius, fahr;
    
        printf("Digite a temperatura em %cF: ", c);

        scanf("%d", &fahr);

        celsius = (fahr-32)*5/9;

        printf("A temperatura em %cC e: %d", c, celsius);
        return 0;
        
}