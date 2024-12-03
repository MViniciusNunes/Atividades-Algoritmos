#include <stdio.h>

//após o uduario digitar o numerovai dizer se e impar ou par esse numero

int main (){

    int num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num%2==0)
    {
        printf("E par!");
    }else
    {
        printf("E impar!");
    }
    

}