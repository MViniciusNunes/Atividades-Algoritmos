#include <stdio.h>

// Codifique a função strcat(s,t) , que concatena a string t ao final da string s . Por exemplo, se x armazena "facil" e y armazena "idade", após a chamada strcat(x,y) , x estará armazenando "facilidade".

void strcat_custom(char *s, const char *t)
{

    while (*s != '\0') {
        s++;
    }

    while (*t != '\0') {
        *s = *t;
        s++;
        t++;
    }

    *s = '\0';
}

int main()
{
    char x[50] = "facil";
    char y[] = "idade";

    strcat_custom(x, y);

    printf("String concatenada: %s\n", x);

}