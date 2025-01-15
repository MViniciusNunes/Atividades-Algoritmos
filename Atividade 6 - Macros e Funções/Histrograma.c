#include <stdio.h>

//A função histograma(t) , que exibe um histograma da variação da temperatura durante a semana

void histograma(int td, int ts, int tt, int tq, int tqi, int tsx,int tsa)
{

	printf("D: ");
	for(int i=1; i<=td;i++)
	{
		printf("%c", 223);
	}
	printf("\n");

	printf("S: ");
	for(int i=1; i<=ts;i++)
	{
		printf("%c", 223);
	}
	printf("\n");

	printf("T: ");
	for(int i=1; i<=tt;i++)
	{
		printf("%c", 223);
	}
	printf("\n");

	printf("Q: ");
	for(int i=1; i<=tq;i++)
	{
		printf("%c", 223);
	}
	printf("\n");

	printf("Q: ");
	for(int i=1; i<=tqi;i++)
	{
		printf("%c", 223);
	}
	printf("\n");

	printf("S: ");
	for(int i=1; i<=tsx;i++)
	{
		printf("%c", 223);
	}
	printf("\n");

	printf("S: ");
	for(int i=1; i<=tsa;i++)
	{
		printf("%c", 223);
	}
	printf("\n");


}

int main()
{
	int td, ts, tt, tq, tqi, tsx, tsa;

	printf("Digite a temperatura de Domingo: ");
	scanf("%d", &td);

	printf("Digite a temperatura de Segunda: ");
	scanf("%d", &ts);

	printf("Digite a temperatura de TerÃ§a: ");
	scanf("%d", &tt);

	printf("Digite a temperatura de Quarta: ");
	scanf("%d", &tq);

	printf("Digite a temperatura de Quinta: ");
	scanf("%d", &tqi);
	
	printf("Digite a temperatura de Sexta: ");
	scanf("%d", &tsx);

	printf("Digite a temperatura de SÃ¡bado: ");
	scanf("%d", &tsa);
	
	histograma(td,ts,tt,tq,tqi,tsx,tsa);
	
}