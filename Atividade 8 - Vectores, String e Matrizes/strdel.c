#include <stdio.h>
#include <string.h>

//Codifique a função strdel(s,p) , que remove o caracter existente na posição p da string s . Se a posição p não existe em s, nada é feito

void strdel(char *s, int p)
{
    int len = strlen(s);

    if (p < 0 || p >= len) {
        return;
    }

    for (int i = p; i < len; i++) {
        s[i] = s[i + 1];
    }
}

int main()
{
    char texto[50] = "programacao";
    int posicao = 4; 

    printf("Antes: %s\n", texto);

    strdel(texto, posicao);

    printf("Depois: %s\n", texto);

    return 0;
}