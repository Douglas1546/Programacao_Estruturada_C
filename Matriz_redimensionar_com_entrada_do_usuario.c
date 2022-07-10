#include <stdio.h>
#define Lin 2 //Basta alterar aqui o número de linhas
#define Col 3 // e de colunas, para gerar uma matriz maior

int matriz[Lin][Col];
                       
int l, c;

int redimensionar(){

    int red[Lin][Col];

for(l = 0; l < Lin; l++) {
		for(c = 0; c < Col; c++) {
			printf("Digite o valor da linha %d, Coluna %d: ", l + 1, c + 1);
			scanf("%d",&matriz[l][c]);
        }
    }
              
printf("\nMatriz inserida:\n\n");
for(int l = 0; l < Lin; ++l){
    for(int c = 0; c < Col; ++c){
        printf("%3d ", matriz[l][c]);
    }
    printf("\n");
}
printf("\nMatriz redimensionada:\n\n");
for(l = 0; l < Lin; l++){
        for(c = 0; c < Col; c++){
            red[l][c] = matriz[l][c];
            printf("%3d ", red[l][c]);
        }
    }
        printf("\n");
        return 0;
}

int transposta(){

int trans[Lin][Col];
                    
printf("\nMatriz inserida:\n\n");
for(int l = 0; l < Lin; ++l){
    for(int c = 0; c < Col; ++c){
        printf("%3d ", matriz[l][c]);
    }
    printf("\n");
}
for(l = 0; l < Lin; l++){
        for(c = 0; c < Col; c++){
            trans[c][l] = matriz[l][c];
        }
    }
 printf("\nMatriz transposta:\n\n");
    for(l = 0; l < Col; l++){
        for(c = 0; c < Lin; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }

    return 0;

}

int print_matriz(){
printf("\nMatriz inserida:\n\n");
for(int l = 0; l < Lin; ++l){
    for(int c = 0; c < Col; ++c){
        printf("%3d ", matriz[l][c]);
    }
    printf("\n");
    }
    printf("\n");
}

int main(){
    
    redimensionar();
    transposta();
    print_matriz();
}