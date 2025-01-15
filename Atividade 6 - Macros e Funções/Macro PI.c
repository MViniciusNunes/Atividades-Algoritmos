#include <stdio.h>
#define PI 3.14159

//  programa que use uma macro para definir o valor de  PI  e, a partir disso, calcule a área de um círculo. O programa deve pedir ao usuário o raio do círculo

int main()
{
    float raio, area;

    // Solicita o raio do círculo ao usuário
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo
    area = PI * raio * raio;

    // Exibe o valor da área
    printf("A área do círculo com raio %.2f é: %.2f\n", raio, area);

    return 0;
}
