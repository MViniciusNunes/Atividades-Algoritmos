#include <stdio.h>

//Usando ponteiros, codifique a função carrega(v,n) , que preenche um vetor v com n valores lidos do teclado

void carrega(int *v, int n)
{
    for (int i = 0; i < n; i++)     {
        printf("Digite o valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
}

int main()
{
    int n;

    printf("Quantos valores vocÃª quer guardar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O nÃºmero de valores deve ser maior que zero.\n");
        return 1; 
    }

    int v[n];

    
    carrega(v, n);

  
    printf("Valores armazenados:\n");
    for (int i = 0; i < n; i++)
    {
        printf("v[%d] = %d\n", i, v[i]);
    }
}
