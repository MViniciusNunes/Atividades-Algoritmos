#include <stdio.h>

// Implemente uma função recursiva que verifique se um número é par ou ímpar

int verificarPar(int n) {
    if (n == 0)  
        return 1;  
    if (n == 1)  
        return 0; 
    return verificarPar(n - 2);  
}


int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (verificarPar(n)) {
        printf("O número %d é PAR.\n", n);
    } else {
        printf("O número %d é ÍMPAR.\n", n);
    }
}