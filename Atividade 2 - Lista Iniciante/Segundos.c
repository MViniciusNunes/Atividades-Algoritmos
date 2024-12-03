#include <stdio.h>

//programa que você digita a quantidade de segundo, e ele retorna minutos, horas e dias

int main() 
{
	int segundos, minutos, horas, dias;

	printf("digite a quantidade de segundos: ");
	scanf("%i", &segundos);


	minutos=segundos/60;
	segundos=segundos%60;
	
	horas=minutos/60;
	minutos=minutos%60;

	dias=horas/24;
	horas=horas%24;

	printf("%.1i dias\n %.1i horas\n %.1i minutos\n %.1i segundos\n", dias, horas, minutos, segundos);
}
