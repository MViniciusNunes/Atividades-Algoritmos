#include <stdio.h>

//  Escreva uma função que receba dois números inteiros por referência e retorne o maior e o menor desses dois números por referência.

void compararNumeros(int *a, int *b, int *maior, int *menor)
{
    if(*a > *b) {
        *maior = *a;
        *menor = *b;
    } else {
        *maior = *b;
        *menor = *a;
    }
}

int main()
{
    int n1, n2, maior, menor;

    printf("Digite os dois valores: ");
    scanf("%d %d", &n1, &n2);  

    compararNumeros(&n1, &n2, &maior, &menor);

    printf("Maior: %d Menor: %d\n", maior, menor);

    return 0;
}

