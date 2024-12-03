#include <stdio.h>
#include <math.h>

//um programa que recebe um número positivo e maior que zero, e calcula e mostra:

// a. O número digitado ao quadrado.
// b. O número digitado ao cubo.
// c. A raiz quadrada do número digitado.
// d. A raiz cúbica do número digitado.

int main() {

    float V, Q, C, r2, r3;

    printf("Digite um numero: ");
    scanf("%f", &V);

    r2 = sqrt(V);    
    r3 = cbrt(V);    

    Q = pow(V,2);   
    C = pow(V,3);   

    printf("A raiz quadrada de %.0f eh: %.2f\n", V, r2);
    printf("A raiz cubica de %.0f eh: %.2f\n", V, r3);
    printf("Ao quadrado de %.0f eh: %.2f\n", V, Q);
    printf("Ao cubo de %.0f eh: %.2f\n", V, C);

}
