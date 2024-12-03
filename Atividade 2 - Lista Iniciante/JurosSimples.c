#include <stdio.h>

//programa que recebe deposito, taxa de juros e o tempo e faz cauculo em juros simples

int main(){
	
	float j, c, i, t, M;

	printf("Digite o deposito: ");
	scanf("%f", &c);

	printf("Digite o a porcentagem de juros: ");
	scanf("%f", &i);

	printf("Digite o tempo(em meses): ");
	scanf("%f", &t);

	j=c*(i/100)*t;
	M=c+j;

	printf("O redimento eh: %.2f", M);

}