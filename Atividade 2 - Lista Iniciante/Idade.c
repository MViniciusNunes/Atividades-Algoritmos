#include <stdio.h>

// programa que fala diacordo com a idade que você digita se é: criança, Adolecente, Adulto e Idoso

int main()
{
	int idade;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	if(idade < 12)
	printf("crianca!");
	else if(idade<=17 )
	printf("adolecente!");
	 else if(idade<=59)
	printf("Adulto!");
	else
	printf("idoso!");
 
}