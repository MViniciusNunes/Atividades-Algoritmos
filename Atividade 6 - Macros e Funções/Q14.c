#include <stdio.h>

#define IS_VOGAL(c) ((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') ||  (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))

// macro chamada  IS_VOGAL(c)  que retorne 1 se o caractere  c  for uma vogal (minúscula ou maiúscula), e 0 caso contrário

int main() {
    char c;

    printf("Digite uma letra: ");
    scanf(" %c", &c); 

    if (IS_VOGAL(c))
        printf("A letra '%c' é uma vogal.\n", c);
    else
        printf("A letra '%c' não é uma vogal.\n", c);

    return 0;
}

 