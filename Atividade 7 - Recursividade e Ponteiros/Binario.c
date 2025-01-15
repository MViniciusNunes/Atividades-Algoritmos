#include <stdio.h>

// bin(n) , que exibe o número natural n em binário.

void bin(int valor)
{
    if (valor == 0)
        return;
    
    bin(valor / 2);        
    printf("%d", valor % 2); 
}

int main()
{
    int a;
    printf("Entre com valor: ");
    scanf("%d", &a);

    if (a == 0)
        printf("0");
    else
        bin(a);             

    printf("\n");
}
