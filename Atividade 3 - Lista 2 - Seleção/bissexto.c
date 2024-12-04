#include <stdio.h>

//programa para seber se o ano que você digitou e bissexto

int main()
{
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano%4 == 0 && ano%100 !=0 || ano%400 == 0)
        printf("O ano %d  eh bissexto!", ano);
    else
        printf("O ano %d nÃ£o e bissexto!", ano);
    



}