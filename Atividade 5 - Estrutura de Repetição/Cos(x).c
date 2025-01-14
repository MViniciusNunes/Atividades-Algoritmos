#include <stdio.h>
#include <math.h>

// programa que calcule o valor aproximado de cos(x) pela série de Taylor

int main()
{
	float angle, cosseno=0;
	int fatorial, num;

	printf("Entre com o Ângulo: ");
	scanf("%f", &angle);

	for(int i=0;i<=2;i++)
	{

		fatorial = 1;
		num =  2*i;
		while(num>=1)
		{
			fatorial = fatorial * num;
			num--;
		}

		cosseno = cosseno + pow(-1,i)*pow(angle*3.14/180,2*i)/fatorial;
	}
	
	printf("cos(%f)=%f\n", angle, cosseno);
	printf("cos(%f)=%f", angle, cos(angle*3.14/180));	


}