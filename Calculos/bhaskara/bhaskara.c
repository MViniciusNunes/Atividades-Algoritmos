#include <stdio.h>
#include <math.h>

//programa para encontrar a raize de uma equação de 2° grau, com a formula de bhaskara

int main()
{
    float A, B, C, DELTA, XMais, XMenos;

    printf("Digite o valor de a: ");
    scanf("%f", &A);
    printf("Digite o valor de b: ");
    scanf("%f", &B);
    printf("Digite o valor de c: ");
    scanf("%f", &C);

    DELTA= (B*B)-4*A*C;

    XMais= (-B+sqrt(DELTA))/(2*A);
    XMenos= (-B-sqrt(DELTA))/(2*A);

    printf("o resultado eh %.2f,%.2f", XMais,XMenos);


    return 0;
}
