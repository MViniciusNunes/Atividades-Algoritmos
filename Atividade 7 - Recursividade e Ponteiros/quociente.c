#include <stdio.h>

// Calcular o quociente da divisão inteira usando subtração

int quociente(int a, int b)
{
	if(a-b<0)
		return 0;
	else
		return 1+quociente(a-b,b);
}

int main()
{
	int a, b;
	printf("Entre com a divisao: ");
	scanf("%d/%d", &a, &b);

	printf("%d/%d=%d", a, b, quociente(a, b));
}