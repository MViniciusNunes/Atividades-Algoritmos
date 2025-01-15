#include <stdio.h>

// Implemente uma função recursiva que calcule a soma dos dígitos de um número inteiro positivo

int soma(int valor)
{
    if (valor == 0)         
        return 0;
    else
        return (valor % 10) + soma(valor / 10); 
}

int main()
{
    int valor;
    printf("Digite o número: ");
    scanf("%d", &valor);

    printf("A soma dos dígitos é %d\n", soma(valor));
}
