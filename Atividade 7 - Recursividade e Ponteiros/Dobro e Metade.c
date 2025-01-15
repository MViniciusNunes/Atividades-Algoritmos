#include <stdio.h>

// Implemente uma função que receba um número real (float) por referência e calcule o dobro e a metade desse número. Retorne os resultados por referência.

void calcularDobroMetade(float *num, float *dobro, float*metade)
{
    *dobro=*num*2;
    *metade=*num/2;

}

int main()
{
    float num, metade, dobro;

    printf("Digite o numero: ");
    scanf("%f", &num);

    calcularDobroMetade(&num, &dobro, &metade);

    printf("O dobro é: %.2f\n A metade é: %.2f", dobro, metade);
}
