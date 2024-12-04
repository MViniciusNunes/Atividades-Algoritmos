#include <stdio.h>

//programa que recebe quatro valores, I, A, B e C. I é um valor inteiro e positivo e A, B, C são valores reais. Escreve os números A, B, e C Variando da escolha de I 1=Crecente, 2=Decrecente, 3=O maior fica entre os outro dois

int main() 
{ 
    int num;

    float a, b, c, temp;
    
    printf("Digite os numeros: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Digite um numero (1,2,3): ");
    scanf("%d", &num);

    if (c<b)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if (c<a)
    {
        temp=a;
        a=c;
        c=temp;
    }
     if(b<a)
    {
        temp=b;
        b=a;
        a=temp;
    } 
    
   switch (num)
   {
   case 1:
        printf("%.2f %.2f %.2f", a, b, c);
        break;
    case 2:
        printf("%.2f %.2f %.2f", c, b, a);
        break;
    case 3:
        printf("%.2f %.2f %.2f", b, c, a);
        break;
    default:
        printf("numero invalido");
   }   
}
