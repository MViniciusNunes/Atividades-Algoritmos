#include <stdio.h>

// programa que recebe os valores antigo e atual de um determinado produto. Chama uma sub-rotina que determina o percentual de acréscimo entre esses valores. O resultado deverá ser mostrado no programa principal

int porcentagem (float antigo, float novo )
{
    float Resultado=((novo-antigo)/antigo)*100;
    printf("O acresimo foi de %.1f%%", Resultado);
}

int main()
{
    float va, vn;
    printf("Digite seu valor antigo: ");
    scanf("%f", &va);
    
    printf("Digite seu valor novo: ");
    scanf("%f", &vn);

    porcentagem(va, vn);
}
