#include <stdio.h>

//programa que recebe quatro valores, I, A, B e C. I é um valor inteiro e positivo e A, B, C são valores reais. Escreve os números A, B, e C Variando da escolha de I 1=Crecente, 2=Decrecente, 3=O maior fica entre os outro dois

int main() {
    int I;
    float A, B, C, temp;

    printf("Digite o valor de I (1, 2 ou 3): ");
    scanf("%d", &I);

    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    
    if (I == 1) {
        
        if (A > B) {
            temp = A;
            A = B;
            B = temp;
        }
        if (A > C) {
            temp = A;
            A = C;
            C = temp;
        }
        if (B > C) {
            temp = B;
            B = C;
            C = temp;
        }
        printf("Ordem crescente: %.2f %.2f %.2f\n", A, B, C);

    } else if (I == 2) {
    
        if (A < B) {
            temp = A;
            A = B;
            B = temp;
        }
        if (A < C) {
            temp = A;
            A = C;
            C = temp;
        }
        if (B < C) {
            temp = B;
            B = C;
            C = temp;
        }
        printf("Ordem decrescente: %.2f %.2f %.2f\n", A, B, C);

    } else if (I == 3) {
    
        if (A > B && A < C || A < B && A > C) {
            temp = A;
            A = B;
            B = temp;
        } else if (C > B && C < A || C < B && C > A) {
            temp = C;
            C = B;
            B = temp;
        }
        printf("Maior no meio: %.2f %.2f %.2f\n", A, B, C);
    }

}
