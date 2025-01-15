#include <stdio.h>

// função que recebe dois números inteiros e positivos por parâmetro e retorne a soma dos N números inteiros existentes entre eles

int cal(int n1, int n2)
{
 int soma=0;

for (int i = n1+1; i < n2;i++)
{
    n1++;
    soma+=n1;
}

return soma;
}

int main()
{
    int num1, num2;

    printf("Entre com o Numero: ");
    scanf("%d %d", &num1, &num2);

    if(num1<=0||num2 <=0)
        printf("Numero invalidado!");
    else
    {
    
    printf("%d", cal(num1, num2));

    }
}
