#include <stdio.h>

//programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem: Reprovado, Exame, Aprovado.


int main() 
{
    float n1, n2, n3, media;

    printf("Digite as notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media=(n1+n2+n3)/3;

    if (media >= 0 && media<3)
        printf("sua media é: %.2f\n reprovado!", media);
    else if (media>= 3 && media<7)
        printf("sua media é: %.2f\nexame!",media);
    else if (media>=7 && media<=10)
        printf("sua media é: %.2f\nAprovado!", media);
    else
        printf("não e valido");
    
  }
