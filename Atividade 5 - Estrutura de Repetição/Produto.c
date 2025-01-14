#include <stdio.h>

//Programa que calcula o produto dos números inteiros ímpares de 1 a 15.

int main()
{
	int  soma=0, i;


	for(i=1; i<=15;i++)
	{
	
	
		if (i%2!=0)
        {
            soma+=i;
        }
        

	}

	printf("\na soma dos números impares foi: %d", soma);
}