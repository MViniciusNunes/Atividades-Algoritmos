#include <stdio.h>

//programa que Calcula a media de quatros notas de um aluno.
// a. Média Aritmética Simples
// b. Média Ponderada com pesos específicos

int main()
{
   int media;
   float n1, n2, n3, n4, p1, p2, p3, p4;
   
    printf("Digite as notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    printf("Digite os pesos: ");
    scanf("%f %f %f %f", &p1, &p2, &p3, &p4);

    printf("Qual media vocÃª desja\n 1-Média AritmÃ©tica Simples\n 2-Média Ponderada com pesos especí­ficos\n ->");
    scanf("%d", &media);

    switch (media)
    {
    case 1:
        printf("A media é %.1f", (n1+n2+n3+n4)/4);
        break;
    case 2:
        printf("A media é %.1f", (n1*p1+n2*p2+n3*p3+n4*p4)/(p1+p2+p3+p4));
        break;
    default:printf("Opição Invalida");
        break;
    }

}