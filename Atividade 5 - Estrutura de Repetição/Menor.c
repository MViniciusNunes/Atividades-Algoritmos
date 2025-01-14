#include <stdio.h>

//Programa que localiza o menor de vários números inteiros.

int main()
{
	int N, num, menor;

	printf("Quantos números? ");
	scanf("%d", &N);

	for(int i=1; i<=N;i++)
	{
		printf("\nDigite o número: ");
		scanf("%d", &num);
	
		if (num<menor)
        {
            menor=num;
        }
        

	}

	printf("\no menor número digitado foi: %d", menor);
}
