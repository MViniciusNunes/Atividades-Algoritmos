#include <stdio.h>

// Menu de opções:
// 1 – Imposto - receber o salário de um funcionário, calcular e mostrar o valor do imposto
// 2 – Novo Salário - receber o salário de um funcionário e mostrar o valor do novo salário
// 3 – Classificação - receber o salário de um funcionário e mostrar sua classificação

int main()
{
    int selecao;
    float salario;

    printf("Menu de opções:\n1 - Imposto\n2 - Novo SalaÌrio\n3 - Classificação\nDigite a opção desejada ->");
    scanf("%d", &selecao );

    printf("digite seu salario: ");
    scanf("%f", &salario);

    switch (selecao)
    {
    case 1:
        if (salario<500)
          printf("O valor de imposto é R$ %.2f", salario*0.05);
        else if (salario>850)
          printf("O valor de imposto é R$ %.2f", salario*0.15);
        else
          printf("O valor de imposto é R$ %.2f", salario*0.10);
        
        break;
    case 2:
        if (salario>1500)
          printf("Seu salaraio terá aumento de R$ 25,00 agora será R$ %.2f", salario+25);
        else if (salario<450)
          printf("Seu salaraio terá aumento de R$ 100,00 agora será R$ %.2f", salario+100);
        else if (salario<1500 && salario>=750)
          printf("Seu salaraio terá aumento de R$ 50,00 agora será R$ %.2f", salario+50);
        else
          printf("Seu salaraio terá aumento de R$ 75,00 agora será R$ %.2f", salario+75);
        break;  
    case 3:
        if (salario>700)
        printf("Você e Bem Remunerado");
        else
        printf("Você e Mal Remunerado");
        break;   
    default:printf("Opção Invalida!"); 
        break;
    }
}
