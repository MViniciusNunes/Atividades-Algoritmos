#include <stdio.h>

//  Codifique a função strpos(s,c) , que devolve a posição da primeira ocorrência do caracter c na string s ; ou −1 , caso ele não ocorra em s .

int strpos(const char *s, char c)
{
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;
        }
    }

    return -1; 
}

int main()
{
    char texto[] = "programacao";
    char busca = 'a';

    int posicao = strpos(texto, busca);

    if (posicao != -1) {
        printf("O caractere '%c' foi encontrado na posiÃ§Ã£o %d.\n", busca, posicao);
    } else {
        printf("O caractere '%c' nÃ£o foi encontrado na string.\n", busca);
    }

}