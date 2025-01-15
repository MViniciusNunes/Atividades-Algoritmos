#include <stdio.h>

//Usando ponteiros, codifique a função puts(s) , que exibe uma string s no vídeo e, depois, muda o cursor de linha. 

void puts_custom(const char *s)
{
    
    for (int i = 0; s[i] != '\0'; i++) {
        putchar(s[i]); 
    }
    putchar('\n'); 
}

int main()
{
    char texto[] = "OlÃ¡, mundo!";

    
    puts_custom(texto);
}