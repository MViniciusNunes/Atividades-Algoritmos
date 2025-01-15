#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Jogo De Campo minado

int verificarMina(int linha, int coluna, int campo[10][10])
{
	int minaLinha, minaColuna,achou=0;

	for(int i=1;i<9;i++)
		{	
			for(int j=1;j<9;j++)
			{
				if(campo[i][j]==9)
				{
					minaLinha = i;
					minaColuna = j;
				}

				if(minaLinha == linha && minaColuna == coluna)
				{
					achou=1;
					return achou;
				}
			}
		}

	return achou;
}

void gerarMinas(int nivel, int campo[10][10])
{
	srand(time(0));

	int linha,coluna;

	for(int bomba=1;bomba<=nivel;bomba++)
	{
		do
		{
			linha = rand()%10;
			coluna = rand()%10;
		}while(linha<1 || linha >=9 || coluna <1 || coluna>=9 || 
														!(campo[linha][coluna] == -1));

		campo[linha][coluna] = 9;

		if (campo[linha-1][coluna]!=9)
			campo[linha-1][coluna] += 1;
		
		if (campo[linha+1][coluna] != 9)
			campo[linha+1][coluna] += 1;
		
		if (campo[linha][coluna+1]!=9)
			campo[linha][coluna+1] += 1;
		
		if (campo[linha][coluna-1] !=9)
			campo[linha][coluna-1] += 1;

		if (campo[linha+1][coluna+1] !=9)
			campo[linha+1][coluna+1] += 1;
		
		if (campo[linha-1][coluna-1] !=9)
			campo[linha-1][coluna-1] += 1;

		if (campo[linha+1][coluna-1]!=9) 
			campo[linha+1][coluna-1] += 1;

		if (campo[linha-1][coluna+1] !=9)
			campo[linha-1][coluna+1] += 1;
		
	}
	
}

void imprimirCampo(int gabarito[9][9],int campo[10][10])
{
		char num[3];

		printf("\n");
	
		printf("  12345678\n");
		printf(" \u2554\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2557\n");
		for(int i=1;i<9;i++)
		{	
			printf("%d", i);
			printf("\u2551");
			for(int j=1;j<9;j++)
			{
					if(gabarito[i][j]==1)
					{
						sprintf(num,"%d",campo[i][j]+1);
						printf("%s",campo[i][j]==9?"\u26B9": num);
					}else
					{
						printf("%s","\u25C6");
					}
					fflush(stdin);
			}
			printf("\u2551");
			printf("\n");
		}
		printf(" \u255A\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u2550\u255D\n");
}

void inicializarCampo(int campo[10][10])
{
		for(int i=0;i<10;i++)
		{	
			for(int j=0;j<10;j++)
			{
				campo[i][j]= -1;
			}
		}
}

void inicializarGabarito(int gabarito[9][9])
{
	for(int i=0;i<9;i++)
	{	
			for(int j=0;j<9;j++)
			{
				gabarito[i][j]= 0;
			}
	}

}

void marcarGabarito(int linha, int coluna, int gabarito[9][9])
{
	gabarito[linha][coluna]=1;

}

int verificarVitoria(int gabarito[9][9])
{
	int count=0;

	for(int i=0;i<9;i++)
	{	
			for(int j=0;j<9;j++)
			{
				if(gabarito[i][j]==0)
				{
					count++;
				}
			}
	}

	return count;
}

int main()
{
	int linha, coluna, nivel,acertou;
	int campo[10][10], gabarito[9][9];

	inicializarGabarito(gabarito);
	inicializarCampo(campo);
	imprimirCampo(gabarito,campo);
	
	printf("Qual o nÃ­vel de dificuldade? \n");
	printf("1-fÃ¡cil\n");
	printf("2-mÃ©dio\n");
	printf("3-difÃ­cil\n");
	printf("4-impossÃ­vel\n");
	scanf("%d", &nivel);
	fflush(stdin);

	gerarMinas(nivel*8,campo);
	imprimirCampo(gabarito,campo);

	while (1)
	{
		printf("Digite as posiÃ§Ãµes do campo minado: \n");
		printf("(0,0) para sair do jogo.\n");
		scanf("(%d,%d)", &linha, &coluna);
		fflush(stdin);

		marcarGabarito(linha, coluna, gabarito);
		imprimirCampo(gabarito, campo);

		acertou = verificarVitoria(gabarito);
	
		if(linha == 0 && coluna == 0 || 
				verificarMina(linha,coluna,campo) || 
				acertou == nivel*8)
		{
			if(acertou == nivel*8)
				printf("VocÃª venceu! Tente com mais bombas!");
			else
				printf("VocÃª perdeu! Tente outra vez!");

			for(int i=0;i<9;i++)
			{	
				for(int j=0;j<9;j++)
				{
					gabarito[i][j]=1;
				}
			}
			imprimirCampo(gabarito,campo);
			break;
		}
	}


}