#include <stdio.h>

//função cpf(n,d) que devolve verdade só se o CPF N tem dígito verificador D. Usando método ensinado pelo professor. 

int CPF (int a, int b)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, res, cpf;
    cpf=a;

    n1=a/100000000;
    a%=100000000;
 
    n2=a/10000000;
    a%=10000000;
 
    n3=a/1000000;
    a%=1000000;
 
    n4=a/100000;
    a%=100000;

    n5=a/100000;
    a%=100000;
 
    n6=a/1000;
    a%=1000;
 
    n7=a/100;
    a%=100;
 
    n8=a/10;
    a%=10;

    n9=a/1;
 
    res=n1+n2+n3+n4+n5+n6+n7+n8+n9;
    res=(res/10)*(res%10);
    res=(res%10)-(res/10);
     b=res;

    res=n1+n2+n3+n4+n5+n6+n7+n8+n9+b;
    res=(res/10)*(res%10);
    res=(res%10)-(res/10);
    
    printf("Cpf %d-%d", cpf, b*10+res);
}

int main()
{
int cpf;

  printf("Digite os noves numeros do cpf: ") ;
  scanf("%d", &cpf);

  CPF(cpf, 0);
}
