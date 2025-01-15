#include <stdio.h>

//Codifique a função strcpy(s,t) , que copia o conteúdo da string t para a string s . Essa função é útil quando precisamos realizar atribuição entre strings; por exemplo, para atribuir a constante "teste" a uma string x, basta escrever strcpy(x,"teste")

void strcpy_custom(char *s, const char *t)
{
    
    for (int i = 0; t[i] != '\0'; i++) {
        s[i] = t[i];
        s[i + 1] = '\0';
    }
}

int main()
{
    char s[50];
    char t[] = "OlÃ¡, mundo!";

    strcpy_custom(s, t);

    printf("t = \"%s\"\n", t);
    printf("s = \"%s\"\n", s);

}