#include <stdio.h>
#include <stdlib.h>

//Crie um programa que inicializa e exibe uma matriz representando um tabuleiro para o "jogo da velha"

static char matriz[3][3]={{0,0,0},{0,0,0},{0,0,0}};

void jogada(int linha, int coluna)
{
	char marca;

	printf("Marque X ou O: ");
	scanf("%c", &marca);
	fflush(stdin);
	matriz[linha][coluna]= marca;

}

void imprime()
{
	printf("\n");

	for(int linha=0;linha<3;linha++)
	{	
		for(int coluna=0;coluna<3;coluna++)
		{
			printf(" %c ", matriz[linha][coluna]);
			if(coluna<2)
				printf("|");
		}

		if(linha<2)
			printf("\n--+--+--\n");
	}

}


int main()
{

	int lin, col, count=0;

	while(count<9)
	{

		imprime();
		printf("\n");

		printf("Escolha uma linha e um coluna: ");
		scanf("%d %d", &lin, &col);
		fflush(stdin);

		jogada(lin, col);

		count++;
	}

}