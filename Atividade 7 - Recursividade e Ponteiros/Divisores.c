#include <stdio.h>

// Implemente uma função que receba um número inteiro por referência e retorne o número de divisores inteiros positivos desse número. Use ponteiros para retornar o resultado

void contarDivisores(int *num, int *totalDivisores)
{
	int count=0;

	for(int i=1;i<=(*num);i++)
	{
		if((*num)%i==0)
			count++;
	}

	*totalDivisores = count;
}


int main()
{
	int num, totalDivisores;

	printf("Entre com um número: ");
	scanf("%d", &num);

	contarDivisores(&num, &totalDivisores);

	printf("%d tem %d divisores", num, totalDivisores);


}