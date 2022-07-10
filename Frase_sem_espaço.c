#include<stdio.h>

void remover_espaco(char *str){ 
    int count=0,i;
    for(i=0;str[i];i++){
        if(str[i]!=' '){
            str[count++]=str[i];
        }
    }
    str[count]=0;
} 
int main(){
    
    char str[2][20];
    printf("Digite uma frase qualquer: ");
    gets(str);
    remover_espaco(str);
    puts(str);
    return 0;

}