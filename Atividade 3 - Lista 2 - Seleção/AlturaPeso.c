#include <stdio.h>

// programa que receba a altura e o peso de uma pessoa. De acordo com a tabela verifica e mostra qual a classificação dessa pessoa.

int main()
{
    float peso, altura;

    printf("digite a altura: ");
    scanf("%f", &altura);

    printf("digite o peso: ");
    scanf("%f", &peso);

    if (altura<1.20 && peso<=60)
        printf("clasificação A");
    else if (altura<1.20 && peso>60 && peso<=90)
        printf("clasificação D");
    else if (altura<1.20 &&  peso>90)
        printf("clasificação G");
    else if (altura>=1.20 && altura<=1.70 && peso<=60)
        printf("clasificação B");
    else if (altura>=1.20 && altura<=1.70 && peso>60 && peso<=90)
        printf("clasificação E");
    else if (altura>=1.20 && altura<=1.70 && peso>90)
        printf("clasificação H");
    else if (altura>1.70 && peso<=60)
        printf("clasificação C");
    else if (altura>1.70 && peso>60 && peso<=90)
        printf("clasificação F");
    else if (altura>1.70 && peso>90)
        printf("clasificação I");
    
}
