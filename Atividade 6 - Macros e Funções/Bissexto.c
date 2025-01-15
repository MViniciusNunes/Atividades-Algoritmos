#include <stdio.h>

// programa com uma função chamada  bissexto()  que recebe um ano como parâmetro e retorna 1 se o ano for bissexto e 0 se não for.

int bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        return 1; 
    else
        return 0;
}

int main() {
    int ano;

    
    printf("Digite o ano: ");
    scanf("%d", &ano);

    
    if (bissexto(ano))
        printf("O ano %d é bissexto.\n", ano);
    else
        printf("O ano %d não é bissexto.\n", ano);

    return 0;
}
