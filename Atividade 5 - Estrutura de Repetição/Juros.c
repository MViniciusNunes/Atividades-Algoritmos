#include <stdio.h>
#include <math.h>

//Programa que caucula um investimento por 10 anos, pré definido um juros de 5% do valor que o usuário inseriu

int main()
{
    float valor, total;

    printf("Digite o valor investido: ");
    scanf("%f", &valor);

    for (int i = 0; i <=10; i++)
    {
    
        printf("no ano %d\n o valor rendeu R$ %.2f o valor total e R$ %.2f\n", i, valor*0.05, valor*1.05);

        valor*=1.05;

    }
}