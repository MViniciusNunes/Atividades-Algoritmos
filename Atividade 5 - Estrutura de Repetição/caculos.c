#include <stdio.h>

// Programa que recebe vários números, calcula e mostra:

// 1. A soma dos números digitados;
// 2. A quantidade de números digitados;
// 3. A média dos números digitados;
// 4. O maior número digitado;
// 5. O menor número digitado;
// 6. A média dos números pares;
// 7. A porcentagem dos números ímpares entre todos os números digitados

int main()
{

	int num, soma=0, contador=0, maior=-99999, menor=29999, somaPar=0, contPar=0;
	
	while(1)
	{
		//do
		//{
			printf("Digite um número: ");
			scanf("%d", &num);

		//}while(num>30000);


		if(num==30000)
			break;
		else if (num>30000)
		{
			printf("Número inválido!\n");
			continue;
		}	

		if(num>maior)
			maior = num;	

		if(num<menor)
			menor = num;	

		if(num%2==0)
		{
			somaPar = somaPar + num;
			contPar++;
		}

		soma = soma + num;
		contador++;

	}

	printf("_________________________________ \n");
	printf("A soma dos números: %d\n", soma);
	printf("A quantidade dos números: %d\n", contador);
	printf("A média dos números: %d\n", soma/contador);
	printf("O maior número: %d\n", maior);
	printf("O menor número: %d\n", menor);
	printf("A média dos números pares: %d\n", somaPar/contPar);
	printf("A porcentagem dos números í­mpares: %.1f%%\n", (float)(contador - contPar)/contador*100);


}
