#include <stdio.h>

// programa que leia um valor N qualquer, inteiro e positivo, calcule e mostre a seguinte soma:

// E=1 + 1/2! + 1/3! + .. + 1/N!

int main() {
    int N;
    float resultado = 0.0, fatorial, num;

  
    printf("Entre com um número inteiro e positivo: ");
    scanf("%d", &N);

    
    for (int i = 1; i <= N; i++) {
        fatorial = 1.0;

        fatorial = 1;
		num =  i;
		while(num>=1)
		{
			fatorial = fatorial * num;
			num--;
		}

      
        resultado += 1.0/fatorial;
    }

    
    printf("Resultado é %.6f\n", resultado);  

    return 0;
}
