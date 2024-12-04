#include <stdio.h>

// programa que recebe:
// a. O código do estado de origem da carga de um caminhão, supondo que a digitação do  código do estado seja sempre válida, ou seja, um número inteiro entre 1 e 5;
// b. O peso da carga do caminhão em toneladas;
// c. O código da carga, supondo que a digitação do código da carga seja sempre válida, ou seja, um número inteiro entre 10 e 40.

// Calcula e mostre:
// a. O peso da carga do caminhão convertido em quilos;
// b. O preço da carga do caminhão;  
// c. O valor do imposto, sabendo-se que o imposto é cobrado sobre o preço da carga do caminhão e que depende do estado de origem;
// d. O valor total transportado pelo caminhão, carga mais imposto

int main()
{
    int codOri,codCar;
    float peso, valorCar, valortotal, imposto;

    printf("Digite o codigo de origem (1-5): ");
    scanf("%d", &codOri);

    printf("Digite o peso do caminhão em toneladas: ");
    scanf("%f", &peso);

    printf("Digite o codigo da carga (10-40): ");
    scanf("%d", &codCar);

    peso*=1000;

    if (codCar>=10 && codCar<=20)
        valorCar=peso*100;
    else if(codCar>20 && codCar<31)
        valorCar=peso*250;
    else if(codCar>230 && codCar<41)
        valorCar=peso*340;
    else
    printf("Codigo da carga invalida!");
    
    
     switch (codOri)
    {
    case 1:
       imposto=valorCar*0.35;
       valortotal=valorCar*1.35;
        break;
    case 2:
       imposto=valorCar*0.25;
       valortotal=valorCar*1.25; 
        break;
    case 3:
       imposto=valorCar*0.15;
       valortotal=valorCar*1.15; 
        break;
    case 4:
       imposto=valorCar*0.05;
       valortotal=valorCar*1.05; 
        break;
    case 5:
       imposto=valorCar*0;
       valortotal=valorCar*1; 
        break;
    default:printf("Codigo do Estado Invalido");
        break;

    }

    printf("O peso da carga do caminhaÌƒo convertido em quilos Ã©: %.2f\n",peso);
    printf(" O precÌ§o da carga do caminhaÌƒo Ã©: %.2f\n",valorCar);
    printf("O valor do imposto Ã©: %.2f\n",imposto);
    printf("O valor total transportado pelo caminhaÌƒo, carga mais imposto Ã©: %.2f\n",valortotal);

}