#include <stdio.h>

// Implemente uma função que receba dois números inteiros por referência, calcule a divisão inteira e o resto da divisão (módulo) e retorne ambos os resultados por referência.

void dividir(int *dividendo, int *divisor, int *quociente, int *resto)
{

*quociente=*dividendo/ *divisor;
*resto =*dividendo% *divisor;

}

int main()
{
    
    int a,b,resul,resto;

    printf("Digite a divisão n/n: ");
    scanf("%d/%d", &a, &b);

    dividir(&a,&b,&resul,&resto);

    printf("O quociente é %d\n O resto é %d", resul, resto);
}
