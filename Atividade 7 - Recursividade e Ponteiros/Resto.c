#include <stdio.h>

// Calcular o resto da divisão inteira usando subtração.

int resto(int a, int b)
{
    if (a - b < 0)
        return a; 
    else
        return resto(a - b, b);  
}

int main()
{
    int a, b;
    printf("Entre com a divisao: ");
    scanf("%d/%d", &a, &b);

    printf("O resto de %d/%d é %d\n", a, b, resto(a, b));
    return 0;
}
