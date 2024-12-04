#include <stdio.h>

//programa que recebe a hora de início de um jogo e a hora final do jogo Calcula e mostra a duração do jogo

int main() {
    int horaInicio, minutoInicio;
    int horaFim, minutoFim;
    int duracaoHora, duracaoMinuto;

    printf("Digite a hora do ini­cio do jogo (hh:mm): ");
    scanf("%d:%d", &horaInicio, &minutoInicio);

    printf("Digite a hora de fim do jogo (hh:mm): ");
    scanf("%d:%d", &horaFim, &minutoFim);
    
    if(horaInicio>23||horaFim>23||minutoInicio>59||minutoFim>59)
    printf("horas ou minutos invalida\n");
    else{
    

    int totalInicio = horaInicio * 60 + minutoInicio;
    int totalFim = horaFim * 60 + minutoFim;

 
    if (totalFim < totalInicio) {
        totalFim += 24 * 60;
    }

    
    int totalDuracao = totalFim - totalInicio;
    duracaoHora = totalDuracao / 60;
    duracaoMinuto = totalDuracao % 60;

    printf("Duração do jogo: %d horas e %d minutos\n", duracaoHora, duracaoMinuto);

    
  }
}