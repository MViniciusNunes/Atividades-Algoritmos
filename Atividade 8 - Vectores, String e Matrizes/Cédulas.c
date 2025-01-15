#include <stdio.h>

//programa que indique a quantidade mínima de cédulas equivalente a uma dada quantia em dinheiro. Considere apenas valores inteiros e cédulas de 1, 5, 10, 50 e 100 reais

int main() {
    int valor; 
    int c[5] = {100, 50, 10, 5, 1}; 
    int q[5] = {0, 0, 0, 0, 0};     

    printf("Digite o valor: R$ ");
    scanf("%d", &valor);

    
    for (int j = 0; j < 5; j++) {
        q[j] = valor / c[j]; 
        valor %= c[j];     
    }

   
    printf("Cedulas necessarias:\n");
    for (int i = 0; i < 5; i++) {
        if (q[i] > 0) {
            printf("%d cedula(s) de R$%d\n", q[i], c[i]);
        }
    }

}
