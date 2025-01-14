#include <stdio.h>

//  Programa que verifique se o número digitado n é um número primo

int main()
{

    int num, con=1;
   
    while (con!=0)
    {
       
    printf ("Digite um numero: ");
    scanf("%d", &num);


      if (num==2 || num==5 || num ==3)
        printf("O numero %d eh primo\n",num);
      else if (num<=1)
        printf("O numero %d nÃ£o eh primo\n",num);
      else if (num%num==0 && num%1==0 && num%2!=0 && num%5!=0 && num%3!=0) 
        printf("O numero %d eh primo\n",num);
      else
        printf("O numero %d nÃ£o eh primo\n",num);

        printf("deseja testar outro? (1-sim|0-nÃ£o)\n->");
        scanf("%d", &con );
    }
    
    
}
