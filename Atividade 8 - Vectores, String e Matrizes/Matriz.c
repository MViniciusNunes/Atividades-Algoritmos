#include <stdio.h>

//Codifique um programa para ler uma matriz quadrada de ordem n e exibir apenas os elementos da diagonal principal.

int main()
{
    int n;


    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);

    int matriz[n][n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

}