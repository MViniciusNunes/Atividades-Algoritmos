#include <stdio.h>
#include <math.h>

//um programa que recebe um número positivo e maior que zero, seleciona qual operação e calcula e mostra:

// 1. O número digitado ao quadrado.
// 2. O número digitado ao cubo.
// 3. A raiz quadrada do número digitado.
// 4. A raiz cúbica do número digitado.

int main() {

    float V;
    int p;

    printf("Digite um numero: ");
    scanf("%f", &V);

    printf("qual vc deseja:\n 1-raiz quadrada\n 2-raiz cubica\n 3-ao quadrado\n 4-ao cubo\n");
    scanf("%d",&p);

    switch (p)
    {
    case 1: printf("A raiz quadrada de %.0f eh: %.2f\n", V, sqrt(V)); 
        break;
    case 2: printf("A raiz cubica de %.0f eh: %.2f\n", V, cbrt(V)); 
        break;
    case 3: printf("Ao quadrado de %.0f eh: %.2f\n", V, pow(V,2)); 
        break;
    case 4: printf("Ao cubo de %.0f eh: %.2f\n", V, pow(V,3)); 
        break;
    default: printf("numero inválido");
        break;
    }  
}
