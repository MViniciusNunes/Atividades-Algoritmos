#include <stdio.h>

// Programa que calcula raiz quadrada com o Método de Heron

int main()
{
  float n, k=1;

  printf("Digite o valor: ")  ;
  scanf("%f", &n);

    for (int i = 0; i <=12; i++)
    {
        k=(k+n/k)/2;
    }
    
    printf("A raiz quadrada de %.0f eh %.6f", n, k);
}
