#include <stdio.h>

// programa que calcula a soma dos N número digitados pelo usuário e apresente o resultado

int main()
{
	int N;
	float num, soma=0;

	printf("Quantos números? ");
	scanf("%d", &N);

	for(int i=1; i<=N;i++)
	{
		printf("\nDigite o número: ");
		scanf("%f", &num);
	
		soma = soma + num;

	}

	printf("\nA soma dos números digitados foi: %.1f", soma);
}