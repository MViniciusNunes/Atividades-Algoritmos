#include <stdio.h>
#include <math.h>

//programa calculadora que mostre o menu de operações (soma, subtração, divisão, multiplicação, elevar ao um número, raiz de qualquer índice, resto)

int main()
{
	float n1, n2;
	char ope;
	int continueLoop = 1;

	while(continueLoop)
	{
		printf("Entre com a operação: ");
		scanf("%f%c%f", &n1, &ope, &n2);

		switch(ope)
		{
			case '+':
				printf("%.1f%c%.1f=%.1f\n", n1, ope, n2, n1+n2);
				break;
			case '-':
				printf("%.1f%c%.1f=%.1f\n", n1, ope, n2, n1-n2);
				break;
			case '*':
			case 'x':
				printf("%.1f%c%.1f=%.1f\n", n1, ope, n2, n1*n2);
				break;
			case '/': 
				printf("%.1f%c%.1f=%.1f\n", n1, ope, n2, n1/n2);
				break;
			case '^':
				printf("%.1f%c%.1f=%.1f\n", n1, ope, n2, pow(n1,n2));
				break;
			case 'V':
				printf("%.1f%c%.1f=%.1f\n", n1, ope, n2, pow(n2,1/n1));
				break;
			case '%':
				printf("%.1f%c%.1f=%d\n", n1, ope, n2, (int)n1%(int)n2);
				break;
			default:
				printf("Operação inválida!\n");
				continueLoop=0;
		}
	}

}