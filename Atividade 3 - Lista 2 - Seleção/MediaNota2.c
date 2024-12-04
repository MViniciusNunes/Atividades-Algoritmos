#include <stdio.h>

//Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito: A, B, C, D, E.

int main() 
{
    float n1, n2, n3, media;

    printf("Digite as notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media=(2*n1+3*n2+5*n3)/10;

    if (media >= 0 && media<5)
        printf("sua media é: %.2f\n Conceito E!", media);
    else if (media>= 5 && media<6)
        printf("sua media é: %.2f\nConceito D!",media);
    else if (media>=6 && media<7)
        printf("sua media é: %.2f\nConceito C", media);
    else if (media >= 7 && media <8)
         printf("sua media é: %.2f\nConceito B", media);
    else if (media >= 8 && media <=10)
         printf("sua media é: %.2f\nConceito A", media);
    
    
  }