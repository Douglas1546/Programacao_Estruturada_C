//Aluno: Douglas da Silva Pereira Veras
//Matrícula: 20190113674

#include <stdio.h>
#define Lin 2 //Caso queira aumentar a matriz, basta alterar aqui o número de linhas
#define Col 3 // e aqui o de colunas

int matriz[Lin][Col] = {{10,23,15},{44,55,62}}; // Caso for testar o código abaixo onde o usuário insere os valores da matriz, basta apagar essa matriz aqui e
                                                // deixar só o: int matriz[Lin][Col];
int l, c;

int redimensionar(){

    int red[Lin][Col];

//Aqui abaixo é o código para o usuário inserir os valores da matriz, deixei como comentário para o senhor testar, caso queira é so tirar de comentário.

/*for(l = 0; l < Lin; l++) {
	for(c = 0; c < Col; c++) {
		printf("Digite o valor da linha %d, Coluna %d: ", l + 1, c + 1);
		scanf("%d",&matriz[l][c]);
    }
}*/
              
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