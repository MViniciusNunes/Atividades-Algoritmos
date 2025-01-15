#include <stdio.h>

// m programa contendo uma sub-rotina que retorne 1 caso o número digitado seja positivo ou zero se negativo

int positivo(int num)
{
    if (num>0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    
    printf("Digite o numero: ");
    scanf("%d", &n);

    printf("%d", positivo(n));
}
