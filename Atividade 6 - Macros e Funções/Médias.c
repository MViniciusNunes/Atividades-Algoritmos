#include <stdio.h>

// programa contendo uma sub-rotina que recebe três notas e uma letra como parâmetros. Se a letra for A, então vai ser retornada a média aritmética das notas; se a letra for P, então vai ser retornada a média ponderada, com pesos 5, 3 e 2, respectivamente. 

int media(char opc, float v1, float v2, float v3) {
    switch (opc) {
    case 'a':
    case 'A':
        printf("Media Aritmetica: %.2f\n", (v1 + v2 + v3) / 3);
        break;
    case 'p':
    case 'P':
        printf("Media Ponderada: %.2f\n", (5 * v1 + 3 * v2 + 2 * v3) / (5 + 3 + 2));
        break;
    default:
        printf("Opcao invalida\n");
        break;
    }
    return 0;
}

int main() {
    float n1, n2, n3;
    char opc;

    printf("Digite as notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite a sua opcao\nA - Media Aritmetica\nP - Media Ponderada\n-> ");
    scanf(" %c", &opc); 

    media(opc, n1, n2, n3);
}

