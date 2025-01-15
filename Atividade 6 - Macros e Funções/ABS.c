#include <stdio.h>

//macro chamada  ABS(n)  que retorne o valor absoluto de um número.

#define ABS(n) ((n) >= 0 ? (n) : -(n))

int main() {
    int num;


    printf("Digite um nÃºmero: ");
    scanf("%d", &num);

    
    printf("O valor absoluto de %d é %d.\n", num, ABS(num));

}