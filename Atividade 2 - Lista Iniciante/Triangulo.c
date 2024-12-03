#include <stdio.h>

//programa que segundo os tamanhos dos lados,diz se ele é triangulo equilatero, triangulo Isosceles, Esacalenos

int main(int argc, char const *argv[])
{

    int x, y, z;

    printf("digite os lados do triangulo:");
    scanf("%d %d %d", &x, &y, &z);

    if (x+y>z || x+z>y || z+y>x)
    {
        printf("e um triangulo!\n");
            if (x==z && z==y)
                printf("equilatero!");
            else if (x==y || y==z || z==x)
                 printf("Isosceles!");
            else
                printf("Esacalenos!");
    }else
        printf("não e um triangulo");
}