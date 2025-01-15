#include <stdio.h>

//programa para solicitar 5 números, via teclado, e exibi-los na ordem inversa àquela em que foram fornecidos

int main()
{
    int r[5];

 
    for (int j = 4; j >= 0; j--)
    {
        printf("Digite o numero: ");
        scanf("%d", &r[j]);
    }
        
   
    for (int i = 0; i <= 4; i++)
    {
        printf("r[%d] = %d\n", i, r[i]);
    }
    
}
