#include <stdio.h>

//programa que receba o código correspondente ao cargo de um funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu novo salário

int main()
{
  int cargo;
  float salario;

  printf("Qual e o seu código do cargo: ");
  scanf("%d", &cargo);

  printf("Qual e o seu salario: ");
  scanf("%f", &salario);

  switch (cargo)
  {
  case 1:
    printf("O seu cargo é Escriturário, seu salario teve um aumento de R$ %.2f e agora é R$ %.2f", salario*0.50, salario*1.50);
    break;
  case 2:
    printf("O seu cargo é Secretário, seu salario teve um aumento de R$ %.2f e agora é R$ %.2f", salario*0.35, salario*1.35);
    break;
  case 3:
    printf("O seu cargo é Caixa, seu salario teve um aumento de R$ %.2f e agora é R$ %.2f", salario*0.20, salario*1.20);
    break;
  case 4:
    printf("O seu cargo é Gerente, seu salario teve um aumento de R$ %.2f e agora é R$ %.2f", salario*0.10, salario*1.10);
    break;
  case 5:
    printf("O seu cargo é Diretor, seu salario nÃ£o houve aumento é continua R$ %.2f ", salario);
    break;
  default:printf("código de cargo invalido!");
    break;
  }   
}