#include <stdio.h>

// programa que segunda a temperatura que você digita fala se estar: Muito Frio, Frio, Agradavel, Quente, Muito Quente

int main()
{
	int graus;

	printf("Digite a temperatura: ");
	scanf("%d", &graus);

	if(graus < 10)
	printf("Muito frio!");
	else if(graus >=10 && graus<=20 )
	printf("Frio!");
    else if(graus>=21 && graus<=30)
	printf("Agradavel!");
	else if(graus>=31 && graus <=40)
	printf("Quente!");
	else
	printf("Muito quente");
}