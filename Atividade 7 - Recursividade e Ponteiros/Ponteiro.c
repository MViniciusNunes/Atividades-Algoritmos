#include <stdio.h>

// Explique o significado de cada ocorrência de ∗ no fragmento de código a seguir e indique qual a saída exibida na tela

int main()
{
    int *p, x=5;
    p=&x;
   *p *= 2*(*p);
   printf("%d", x);
}

// respota 5

