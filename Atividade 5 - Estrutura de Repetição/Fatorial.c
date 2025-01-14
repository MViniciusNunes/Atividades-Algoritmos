#include <stdio.h>

// Programa que recebe a fatorial e mostra o resultado

int main()
{
	int num, fatorial=1;

	printf("Entre com um nÃºmero: ");
	scanf("%d", &num);

	for(int i=num; i>0;i--)
	{
		fatorial = fatorial*i;
	}

	printf("%d!=%d", num, fatorial);


}