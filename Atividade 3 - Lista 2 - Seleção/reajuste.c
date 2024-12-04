#include <stdio.h>

//programa para reajustar o preços de alguns produtos, de um supermercados

int main()
{
    int vendaMedia;
    float preçoAtual, pos, pos2, pos3;

    printf("Digite a venda mensal do produto: ");
    scanf("%d", &vendaMedia);

   printf("Digite o preço atual: ");
    scanf("%f", &preçoAtual);

    if (vendaMedia< 500 && preçoAtual<30)
     {
        pos= preçoAtual*1.10;
        printf("O novo preço reajustado é R$ %.2F", pos);

     }else if (vendaMedia>=500 && vendaMedia<1200 && preçoAtual>=30 && preçoAtual<80)
     {
        pos2=preçoAtual*1.15;
        printf("O novo preço reajustado é R$ %.2F", pos2);
     }else if (vendaMedia>=1200 && preçoAtual>=80)
     {
        pos3=preçoAtual*0.20-preçoAtual;
        printf("O novo preço reajustado é R$ %.2F", pos3);
     }

}
