#include <stdio.h>

//  função que receba um único valor representando segundos. Essa função convertê para horas, minutos e segundos.

int horas (int segundos)
{
    int horas, minutos, dia;

    minutos=segundos/60;
    segundos=segundos%60;

    horas=minutos/60;
    minutos=minutos%60;

    dia=horas/24;
    horas=horas%24;




    printf("%d dias %d Horas %d Minutos %d Segundos", dia, horas, minutos, segundos);
}

int main()
{
    int segundos;
    
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    
    horas(segundos);
   
}
