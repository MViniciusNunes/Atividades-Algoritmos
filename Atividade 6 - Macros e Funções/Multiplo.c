#include <stdio.h>

//  macro chamada  MULTIPLO(a, b)  que retorne 1 se o número  a  for múltiplo de  b  e 0 caso contrário.

#define MULTIPLO(a,b) b%a==0 ? 1:0

int main()
{
   int a, b;

   printf("Digite os números: ");
   scanf("%d %d", &a, &b);

   
   printf("%d",MULTIPLO(a,b));

}