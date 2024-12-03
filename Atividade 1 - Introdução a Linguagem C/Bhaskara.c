#include <stdio.h>
#include <math.h>

//programa para encontrar a raize de uma equação de 2° grau, com a formula de bhaskara

int main()
{
    float A, B, C, DELTA, X1, X2;

    printf("Digite o valor de a: ");
    scanf("%f %f %f", &A, &B, &C);

    DELTA= (B*B)-4*A*C;

    if (DELTA>0){
        printf("Delta possitivo!\n");
    }else{ 
    if (DELTA<0){
        printf("Delta negativo!\n");
    }else
    {
        printf("Delta igual a zero!\n");
        }
     }
    X1= (-B+sqrt(DELTA))/(2*A);
    X2= (-B-sqrt(DELTA))/(2*A);

    printf("as raizes da eq. sao x\'=%.2f e x\"=%.2f", X1,X2);


}
