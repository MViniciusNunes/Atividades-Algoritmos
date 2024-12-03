#include <stdio.h>

//você digita um numero de 5 digitos e o programa separa, cada um em unidade

int main()
{
    int num, n1, n2, n3, n4, n5;

    printf("Digite um numero: ");
    scanf("%d", &num);

    n1=num/10000;
    num=num%10000;

    n2=num/1000;
    num=num%1000;

    n3=num/100;
    num=num%100;

    n4=num/10;
    num=num%10;

    n5=num/1;
    num=num%1;

    printf("%d %d %d %d %d", n1, n2, n3, n4, n5);
    
}

