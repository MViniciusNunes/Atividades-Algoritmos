#include <stdio.h>

// Escreva um aplicativo que leia cinco números entre 1 e 30. Para cada número que é lido, seu programa deve exibir o mesmo número de simbolo adjacentes

int main()
{
	int num;

	for(int i=1;i<=5;i++)
	{
		printf("Entre com um número: ");
		scanf("%d", &num);

		printf("%d: ",num);

		for(int j=1;j<=num;j++)
		{
			printf("\u2801");
		}

		printf("\n");
	}

}
