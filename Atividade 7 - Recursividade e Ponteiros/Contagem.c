#include <stdio.h>

// Escreva uma função recursiva que conte quantos dígitos um número inteiro possui.

int digitos(int valor)
{
   
    if (valor==0 || valor<10)
        return 1;
    else
        return 1+digitos(valor/10);
    
    
}

int main()
{
    int valor;

   printf("Digite o valor:");
   scanf("%d", &valor);

   printf("%d tem %d digitos", valor, digitos(valor));
}
