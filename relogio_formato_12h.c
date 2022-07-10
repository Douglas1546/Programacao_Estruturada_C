#include <stdio.h>

int main(){

      int horas,minutos, horario;

      printf("Digite a hora: ");
      scanf("%d", &horas);

      printf("Digite os minutos: ");
      scanf("%d", &minutos);

      if (horas <= 12){

            printf("O horario e:  %d:%d", horas, minutos);
            
      }
      else{
      
      horario = horas - 12;

      printf("o horario e:  %d:%d", horario, minutos);
      }

      return 0;
}