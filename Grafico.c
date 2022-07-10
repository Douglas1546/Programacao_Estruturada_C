//Aluno: Douglas da Silva Pereira Veras
//Matrícula: 20190113674

//Aluno: Antonio Manoel Gomes de Souza
//Matrícula: 20190112659

#include <stdio.h>

int arrX[5] = {2017, 2018, 2019, 2020, 2021};
float arrY[5] = {2, 12.5, 25, 37.5, 50};
int i;

void barras_horizontais(){
  
arrY[0] * '\u25A0';

printf("\n %d■■■■", arrX[0]);
printf("\n %d", arrX[1]);
printf("\n %d", arrX[2]);
printf("\n %d", arrX[3]);
printf("\n %d\n", arrX[4]);
    
  for (int i= 0; i<5; i++){
    printf("   %2.1f ", arrY[i]);
    }
}

void barras_verticais(){
  
    printf("\n\n----------------------------------------");

    printf("\n\n %2.1f               ▮  ", arrY[4]);
    printf("\n                    ▮           ");  
    printf("\n                    ▮     ▮     ");
    printf("\n %2.1f               ▮     ▮     ▮", arrY[3]);
    printf("\n        ▮           ▮     ▮     ▮");
    printf("\n        ▮           ▮     ▮     ▮");
    printf("\n %2.1f   ▮           ▮     ▮     ▮", arrY[2]);
    printf("\n        ▮           ▮     ▮     ▮");
    printf("\n        ▮     ▮     ▮     ▮     ▮");
    printf("\n %2.1f   ▮     ▮     ▮     ▮     ▮", arrY[1]);
    printf("\n        ▮     ▮     ▮     ▮     ▮");
  
    printf("\n %2.1f ", arrY[0]);

  for (int i= 0; i<5; i++){
    printf("  %d", arrX[i]);
    }
}  

int main(){

barras_horizontais();

barras_verticais();

}