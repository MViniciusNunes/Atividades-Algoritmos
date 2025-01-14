#include <stdio.h>

// O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Dado um número n, calcula seu quadrado usando a soma de ímpares ao invés de produto

int main()
{

	int num, quadrado=0;

	printf("Entre com um nÃºmero: ");
	scanf("%d", &num);

	for(int i=1;i<=num;i++)
	{
		quadrado = quadrado + (i-1)*2 + 1;
	}

	printf("%d^2 = %d", num, quadrado);

}