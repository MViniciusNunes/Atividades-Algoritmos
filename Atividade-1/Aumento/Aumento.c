#include <stdio.h>

// Programa que calcula o aumento de 25% do salario de um funcionario

int main()
{
    float salario;
    
    printf("Digite seu salario: ");
    scanf("%f",&salario);

    salario=salario*1.25;

    printf("seu aumento eh:  R$%.2f\n", salario);

}
