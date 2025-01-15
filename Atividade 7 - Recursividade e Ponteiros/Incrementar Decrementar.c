#include <stdio.h>

// a função que receba um número inteiro por referência e realize dois cálculos diferentes: incremente o valor em 1 e depois decremente o valor em 2. Retorne o resultado de cada operação por referência

void incrementarDecrementar(int *valor, int *incrementado, int *decrementado)
{

*incrementado=*valor+1;
*decrementado=*valor-2;

}

int main()
{
    int a, b, c;
    
    printf("Digite o valores: ");
    scanf("%d", &a);

    incrementarDecrementar(&a, &b, &c);

    printf("incremento=%d decremento=%d", b, c);
}