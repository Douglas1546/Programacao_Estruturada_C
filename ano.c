#include <stdio.h>

#include <stdlib.h>

int dia, mes, ano, bissexto, somameses, i, totaldias;

int calendario[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

//coleta os dados necessarios para o programa

void ColetaDados( ){

    while( dia == 0 || dia > 31 ){
    printf("Digite um dia: ");

    scanf("%d",&dia);
    }

    while( mes == 0 || mes > 12 ){
    printf("\n\nDigite um mes: ");

    scanf("%d",&mes);
    }
    while ( ano == 0 || ano < 1990 || ano > 2100){
    printf("\n\nDigite um ano: ");
    scanf("%d",&ano);
    system("cls");
    }
}

// aqui valida o mes e fala se e bissexto ou nao
int ValidacaoMesDia( ){

if(mes==1 & dia <= 31){

    int Janeiro= mes;
    return 1;
}

if(mes==2 & dia <= 29){

    if (ano%4==0 & dia <= 29 ){

        int Fevereiro= mes;
        bissexto = 1;
        return 1;
        }

        else

        if( dia <= 28 ){

        int Fevereiro= mes;
        bissexto = 0;
        return 1;
        }
}

if(mes==3 & dia <= 31){

    int Marco= mes;
    return 1;

}

if(mes==4 & dia <=30){

    int Abril= mes;
    return 1;

}

if(mes==5 & dia <=31){

    int Maio= mes;
    return 1;
}

if(mes==6 & dia<=30){

int Junho= mes;
return 1;

}

if(mes==7 & dia <= 31){

int Julho= mes;
return 1;

}

if(mes==8 & dia <=31){

int Agosto= mes;
return 1;

}

if(mes==9 & dia <= 30){

int Setembro= mes;
return 1;

}

if(mes==10 & dia <= 31){

int Outubro= mes;
return 1;

}

if(mes==11 & dia <= 30){

int Novembro= mes;
return 1;

}

if(mes==12 & dia <= 31){

int Dezembro= mes;
return 1;

}

printf("Erro Confirme os dados novamente... \n\n");

return 0;

// return ColetaDados( ); isto não é possível fazer!!!

}

//aqui fala quantos dias estão decorrentes de um ano

void QtdDias( ){

for( i=0; i<=calendario; i++){

somameses = somameses + calendario;

}

totaldias = dia + somameses;

if(bissexto == 0 ){

totaldias = dia + somameses - 1;

}

}

// aqui exibe a data

void Exibir ( )

{

printf("A data a ser mostrada e: \n\n");

printf("%d / %d / %d", dia, mes, ano);

printf("\t corresponde ao %d\n\n", totaldias);

}

// main

void main ( ){

ColetaDados( );

while ( 0 == ValidacaoMesDia( ) );

QtdDias();

Exibir();

system("pause");

}