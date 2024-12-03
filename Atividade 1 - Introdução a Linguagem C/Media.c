#include <stdio.h>

//programa para calcular a media de três notas, tirando 7 ou maior aprovado, tirando  menor de 7 recuperação, e se acaso for menor de 3 direto reprovado.

int main()
{
    float a,b,c,media ;

    printf("Digite a primeira as notas: ");
    scanf("%f %f %f", &a, &b, &c);
    
    media= (a+b+c)/3;
    
    printf("a media eh: %.1f\n", media);

    if(media >= 7){
        printf("Aprovado!");
    }else{if (media <= 2.9)
    {
        printf("Reprovado!");
    }else
    {
        printf("Recuperacao!");
    }
      
    }
    
}
