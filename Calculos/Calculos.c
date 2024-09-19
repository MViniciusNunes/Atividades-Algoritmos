#include <stdio.h>

// Programa para calcular soma,subtração,multiplicação,divisão 

int main()
{
    float num1,num2,soma,subt,prod,div;
    
    printf("Entre com um numero: ");
    scanf("%f", &num1);

    printf("Entre com outro numero: ");
    scanf("%f", &num2);

    soma=num1+num2;
    subt=num1-num2;
    prod=num1*num2;
    div=num1/num2;

    printf("\tA soma eh: \t\t%2.2f\n", soma);
     printf("\tA subtracao eh: \t%.2f\n", subt);
      printf("\tA multiplicacao eh: \t%.2f\n", prod);
       printf("\tA divisao eh: \t\t%2.2f\n", div);
    return 0;
}
