#include <stdio.h>

// regr(n) , que exibe uma contagem regressiva a partir de n

void regr(int n)
{
	if(n<0)
		return;

	printf("%d\n", n);
	regr(n-1);
}

int main()
{
	int n;

	printf("Entre com a contagem: ");
	scanf("%d", &n);

	regr(n);

}