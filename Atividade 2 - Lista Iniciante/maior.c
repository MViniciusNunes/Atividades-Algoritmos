#include <stdio.h>

//programa que receba dois números e mostre o maior

int main()
{
	float num1, num2;

	printf("digite primeiro numero: ");
	scanf("%f", &num1);

	printf("digite segundo numero: ");
	scanf("%f", &num2);

	if(num1>num2)
	printf("o maior numero eh: %.2f", num1);
	else
	printf("o maior numero eh: %.2f", num2);
	

}