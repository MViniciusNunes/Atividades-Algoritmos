#include <stdio.h>

//  função recursiva que calcule o Máximo Divisor Comum (MDC) de dois números usando o algoritmo de Euclides

int mdc(int a, int b) {
    if (b == 0)
        return a;             
    else
        return mdc(b, a % b); 
}

int main() {
    int a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);

    printf("O MDC de %d e %d é %d\n", a, b, mdc(a, b));
    return 0;
}