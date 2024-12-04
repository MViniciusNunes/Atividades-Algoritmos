#include <stdio.h>

//Faça um programa que receba:
// a. O código de um produto comprado, supondo que a digitação do código do produto seja sempre válida, ou seja, um número inteiro entre 1 e 10;
// b. O peso do produto em quilos;
// c. O código do país de origem, supondo que a digitação do código do país seja sempre válida, ou seja, um número entre 1 e 3. 

// O peso do produto convertido em gramas;
// O preço total do produto comprado;
// O valor do imposto, sabendo-se que o imposto é cobrado sobre o preço total do produto comprado e que depende do país de origem;
// O valor total, preço total do produto mais imposto.


int main()
{
    int codProd, Codpais;
    float peso, precoProd, valorTotal, valorImp;

    printf("Qual o produto você: ");
    scanf("%d", &codProd);
    
    printf("Qual é o peso: ");
    scanf("%f", &peso);

    printf("Qual o paí­s de origem (1-3): ");
    scanf("%d", &codProd);

    peso=peso*1000;

    printf("O peso do produto %d Ã© %.2fg\n",codProd, peso);

    if (codProd>=1 && codProd<=4)
        precoProd=(10)*peso;
    else if (codProd>4 && codProd<=7)
        precoProd=(25)*peso;
    else if (codProd>7 && codProd<=10)
        precoProd=(35)*peso;

    if (Codpais == 1)
       valorImp=(0)*precoProd;
    else if (Codpais == 1)
       valorImp=(0.15)*precoProd;
    else if (Codpais == 1)
       valorImp=(0.25)*precoProd;

    valorTotal=precoProd+valorImp;

    printf("O valor total do produto %d do pais %d Ã© %.2f", codProd, Codpais, valorTotal);

}