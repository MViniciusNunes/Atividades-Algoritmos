#include <stdio.h>

// programa que receba três números e mostre-os em ordem decrescente

int main() {
    int I;
    float A, B, C, temp;

    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

        
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
        printf("Ordem decrescente: %.2f %.2f %.2f\n", C, B, A);
}