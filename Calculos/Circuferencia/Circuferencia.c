#include <stdio.h>

//programa que calcula, a circufencia e a área de um circulo, o raio fornecido pelo usuario

int main()
{
    float R, A, C;

    printf("Digite o raio do circulo: ");
    scanf("%f", &R);

    A=3.14*(R*R);
    C=2*3.14*R;

    printf("\tA area do circulo eh: \t\t%.2f\n", A);
    printf("\tA circuferencia do circulo eh: \t%.2f\n", C);

    return 0;
}
