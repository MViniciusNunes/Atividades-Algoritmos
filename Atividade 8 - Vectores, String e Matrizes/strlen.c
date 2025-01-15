#include <stdio.h>

//Codifique a função strlen(s) , que devolve o número de caracteres armazenados na string s . Lembre-se de que o terminador '\0' não faz parte da string e, portanto, não deve ser contado.

int strlen_custom(const char *s)
{
    int length = 0;
  
    for (int i = 0; s[i] != '\0'; i++) {
        length++; 
    }

    return length;
}

int main()
{
    char texto[] = "OlÃ¡, mundo!";

    int comprimento = strlen_custom(texto);

    printf("O comprimento da string \"%s\" Ã© %d.\n", texto, comprimento);

}