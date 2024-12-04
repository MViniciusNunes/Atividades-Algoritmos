#include <stdio.h>

//programa que você coloca dua datas e ela diz qual vem primeiro 

int main()
{
   int dia1,dia2, mes1,mes2, ano1, ano2;
   
   printf("digite primeira data: ");
   scanf("%d/%d/%d", &dia1, &mes1, &ano1);
   
   printf("digite segunda data: ");
   scanf("%d/%d/%d", &dia2, &mes2, &ano2);
   
   if(ano1 > ano2)
    printf(" %d/%d/%d  depois %d/%d/%d", dia2, mes2, ano2, dia1,mes1,ano1);
   else if(ano2> ano1)
     printf(" %d/%d/%d  depois %d/%d/%d", dia1, mes1, ano1, dia2,mes2,ano2);
    else if(mes1> mes2)
    printf(" %d/%d/%d  depois %d/%d/%d", dia2, mes2, ano2, dia1,mes1,ano1);
    else if(mes2>mes1)
    printf(" %d/%d/%d  depois %d/%d/%d", dia1, mes1, ano1, dia2,mes2,ano2);
    else if (dia2<dia1)
    printf(" %d/%d/%d  depois %d/%d/%d", dia2, mes2, ano2, dia1,mes1,ano1);
    else
    printf(" %d/%d/%d  depois %d/%d/%d", dia1, mes1, ano1, dia2,mes2,ano2);
}