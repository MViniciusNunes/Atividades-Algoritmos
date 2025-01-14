#include <stdio.h>

// Programa de Descriptografia


int main()
{
	int num, d1, d2, d3, d4;

	printf("Entre com o número: ");
	scanf("%d", &num);

	d1 = num/1000;
	num = num%1000;

	d2 = num/100;
	num = num%100;

	d3 = num/10;
	num = num%10;

	d4 = num/1;

	d1 = (d1+3)%10;
	d2 = (d2+3)%10;
	d3 = (d3+3)%10;
	d4 = (d4+3)%10;

	printf("Criptografado: %d%d%d%d", d3,d4,d1,d2);

}
