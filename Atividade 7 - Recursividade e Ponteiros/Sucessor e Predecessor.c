#include <stdio.h>

// Calcular a soma de dois naturais usando as funções suc(n) e pred(n) que devolvem, respectivamente, o sucessor e o predecessor de um natural n

int suc(int n) {
    return n + 1;
}


int pred(int n) {
    return n - 1;
}


int soma(int a, int b) {
    if (b == 0)
        return a;           
    else
        return soma(suc(a), pred(b)); 
}

int main() {
    int a, b;
    printf("Entre com dois numeros naturais: ");
    scanf("%d %d", &a, &b);

    printf("A soma de %d e %d é %d\n", a, b, soma(a, b));
    
}
