#include <stdio.h>

//  programa que funciona como um conversor de unidades. O programa permiti a conversão entre diferentes unidades de temperatura (Celsius, Fahrenheit, Kelvin),distância (metros, quilômetros, milhas), e tempo (segundos, minutos, horas)

int main()
{
 int op, op2, op3;
 float valor;
 

 printf("Selecione a opção:\n 1-Temperatura\n 2-Distancia\n 3-Tempo\n->");
scanf("%d",&op);

 switch (op)
 {
 case 1:
    printf("VocÃª quer fazer qual conversão (N-N):\n 1-Celsius\n 2-Fahrenheit\n 3-Kelvin\n->");
    scanf("%d-%d",&op2, &op3);

    printf("Digite a Temperatura:");
    scanf("%f", &valor);
    if (op2==1 && op3==2)
        printf("%.1f Celsius é equivalente a %.1f Fahrenhait",valor, (valor*9/5)+32);
    else if (op2==1 && op3==3)
        printf("%.1f Celsius é equivalente a %.1f Kelvin",valor,valor+273.15);
    else if (op2==2 && op3==1)
        printf("%.1f Fahrenheit é equivalente a %.1f Celsius",valor,(valor-32)*5/9);
    else if (op2==2 && op3==3)
        printf("%.1f Fahrenheit é equivalente a %.1f Kelvin",valor,(valor-32)*5/9+273.15);
    else if (op2==3 && op3==2)
        printf("%.1f Kelvin é equivalente a %.1f Fahrenhait",valor,(valor-273.15)*9/5+32);
    else if (op2==3 && op3==1)
        printf("%.1f Kelvin é equivalente a %.1f Celsius",valor,valor-273.15);
    else
        printf("Opção Invalida");
    break;
 
 case 2:
    printf("VocÃª quer fazer qual conversão (N-N):\n 1-Metros\n 2-Quilometros\n 3-Milhas\n->");
    scanf("%d-%d",&op2, &op3);

    printf("Digite a Distancia:");
    scanf("%f", &valor);
    if (op2==1 && op3==2)
        printf("%.1f Metro é equivalente a %.1f Quilometros",valor, valor/1000);
    else if (op2==1 && op3==3)
        printf("%.1f Metros é equivalente a %.3f Milhas",valor, valor/1609.34);
    else if (op2==2 && op3==1)
        printf("%.1f Quilometros é equivalente a %.1f Metros",valor,valor*1000);
    else if (op2==2 && op3==3)
        printf("%.1f Quilometros é equivalente a %.3f Milhas",valor,valor/1.60934);
    else if (op2==3 && op3==2)
        printf("%.3f Milhas é equivalente a %.1f Quilometros",valor,valor*1.60934);
    else if (op2==3 && op3==1)
        printf("%.3f Milhas é equivalente a %.1f Metros",valor,valor*1609.34);
    else
        printf("Opção Invalida");
    break;

case 3:
    printf("VocÃª quer fazer qual conversão (N-N):\n 1-Horas\n 2-Minutos\n 3-Segundos\n->");
    scanf("%d-%d",&op2, &op3);

    printf("Digite a Distancia:");
    scanf("%f", &valor);
    if (op2==1 && op3==2)
        printf("%.0f Horas é equivalente a %.0f Minutos",valor, valor*60);
    else if (op2==1 && op3==3)
        printf("%.0f Horas é equivalente a %.0f Segundos",valor, valor*3600);
    else if (op2==2 && op3==1)
        printf("%.0f Minutos é equivalente a %.0f Horas",valor,valor/60);
    else if (op2==2 && op3==3)
        printf("%.0f Minutos é equivalente a %.0f Segundos",valor,valor*60);
    else if (op2==3 && op3==2)
        printf("%.0f Segundos é equivalente a %.0f Minutos",valor,valor/60);
    else if (op2==3 && op3==1)
        printf("%.0f Segundos é equivalente a %.0f Horas",valor,valor/3600);
    else
        printf("Opção Invalida");
    break;

 default:printf("Opção Invalida");
    break;
 }
}