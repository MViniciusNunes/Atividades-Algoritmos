#include <stdio.h>

//  solicita ao usuário que insira o tamanho do lado de um quadrado e, então, exibe um quadrado vazio desse tamanho com asteriscos

int main()
{
	int lado;

	printf("Entre com o lado: ");
	scanf("%d", &lado);

	for(int linha=1;linha<=lado;linha++)
	{
		for(int coluna=1;coluna<=lado;coluna++)
		{
			if (linha ==1  || linha == lado || coluna ==1 || coluna == lado)
				printf(" * ");
			else
				printf("   ");
		}
		printf("\n");
	}

}