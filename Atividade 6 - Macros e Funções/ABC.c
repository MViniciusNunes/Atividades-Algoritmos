#include <stdio.h>

// função que recebe três números inteiros a, b, c, sendo a maior que 1. A função soma todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e c) e retornar o resultado para a função principal.

int cal(int a, int b, int c)
{
    int soma = 0;
 
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }

    return soma;
}

int main()
{
    int n1, n2, n3;

    printf("Entre com três números (a, b, c): ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 <= 1 || n2 <= 1 || n3 <= 1) {
        printf("Número inválido!\n");
    } else {
        int resultado = cal(n1, n2, n3);
        printf("A soma dos números divisíveis por %d entre %d e %d é: %d\n", n1, n2, n3, resultado);
    }

    return 0;
}
