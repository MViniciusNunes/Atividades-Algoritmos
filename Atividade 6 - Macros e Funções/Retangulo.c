#include <stdio.h>

//função retangulo(m,n) , que exibe um retângulo com altura m e largura n

int retangulo(int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n"); 
    }
}

int main() {
    int altura, largura;

    printf("Digite a altura do retângulo: ");
    scanf("%d", &altura);
    printf("Digite a largura do retângulo: ");
    scanf("%d", &largura);

    retangulo(altura, largura);

    return 0;
}
