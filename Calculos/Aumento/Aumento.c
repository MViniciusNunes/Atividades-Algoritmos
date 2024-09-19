#include <stdio.h>

// Programa que calcula o aumento de 25% do salario de um funcionario

int main()
{
    float x, y, z, Aum;
    
    printf("Digite seu salario: ");
    scanf("%f",&x);

    y=x*0.25;
    Aum=y+x;

    printf("seu aumento eh:  R$%.2f\n", Aum);

    return 0;
}
