#include <stdio.h>

// Programa que resolve Fibonacci 

int main() {
    int n, termo1 = 1, termo2 = 1, proximo_termo;

    
    printf("Digite um numero n (n >= 3): ");
    scanf("%d", &n);

    
    if (n == 1 || n == 2) {
        printf("O %d-ésimo termo da série de Fibonacci é: 1\n", n);
        return 0;
    }

    
    for (int i = 3; i <= n; i++) {
        proximo_termo = termo1 + termo2; 
        termo1 = termo2;  
        termo2 = proximo_termo;  
    }

   
    printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, proximo_termo);

}