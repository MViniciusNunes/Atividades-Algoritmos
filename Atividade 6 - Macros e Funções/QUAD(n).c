#include <stdio.h>
#include <math.h>  

#define QUAD(n) (pow(n, 2))

// macro chamada  QUAD(n)  que calcula o quadrado de um número,  leia um número do usuário e mostre o quadrado desse número utilizando a macro.

int main()
{
   int n;

   printf("Digite o numero: ");
   scanf("%d", &n);

   
   printf("O numero %d ao quadrado é %.2f\n", n, QUAD(n));

}
