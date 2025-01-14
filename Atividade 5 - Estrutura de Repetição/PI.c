#include <stdio.h>
#include <math.h>

// programa para caucular o valor de PI, quanto maior a repetição mais presiso fica

int main()
{
	float  pi=0;
	int j=0, num;


	for(int i=0;i<=200000;i++)
	{
        if(i%2!=0){
        pi = pi + pow(-1,j)*4/i;
        j++; 
        }
        
	}
	
	printf("%.5f", pi);

}
