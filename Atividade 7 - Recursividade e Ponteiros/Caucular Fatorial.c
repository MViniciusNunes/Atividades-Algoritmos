#include <stdio.h>

// Calcular o fatorial de um número natural.

int resultado(int valor)
{
    if (valor==0)
    return 1;
    else
    return valor*resultado(valor-1);
}

int main()
{
    int valor;
    printf("Entre com numero: ");
    scanf("%d", &valor);

    printf("%d! = %d", valor, resultado(valor));
}