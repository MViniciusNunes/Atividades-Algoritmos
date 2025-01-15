#include <stdio.h>

//função que recebe três números inteiros por referência e troque seus valores de forma cíclica: o valor do primeiro vai para o segundo, o valor do segundo vai para o terceiro, e o valor do terceiro vai para o primeiro.


void trocarCiclicamente(int *a, int *b, int *c)
{
    int aux;

    aux=*b;
    *b=*a;
    *a=*c;
    *c=aux;
}

int main()
{
    int a, b, c;
    
    printf("Digite os três valores: ");
    scanf("%d %d %d", &a, &b, &c);

    trocarCiclicamente(&a, &b, &c);

    printf("a=%d b=%d c=%d", a, b, c);
}
