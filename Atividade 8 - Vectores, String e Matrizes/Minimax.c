#include <stdio.h>

//Codifique a função minimax(v,n,a,b) , que recebe um vetor v contendo n números reais e devolve em a e b, respectivamente, os valores mínimo e máximo entre aqueles armazenados em v.

void minimax(int v[], int n, int *max, int *min)
{
    
    *max = v[0];
    *min = v[0];

    for (int i = 1; i < n; i++) 
    {
        if (v[i] > *max)
            *max = v[i];
        
        if (v[i] < *min)
            *min = v[i];
    }
}
int main()
{
    int n;

    printf("Quantos numeros: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade de nÃºmeros deve ser maior que zero.\n");
        return 1; 
    }

    int v[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int max, min;
    minimax(v, n, &max, &min);

    printf("MÃ¡ximo: %d\nMÃ­nimo: %d\n", max, min);

}