#include <stdio.h>

// programa que segundo uma conta segundo a sua Data de nascimento, diz o seu perfil

int main()
{
    int dia, mes, ano, diaMes,r1, r2, r3;
    
    printf("digite sua data de nacimento: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    dia=dia*100;
    diaMes=dia+mes;

    r1=diaMes+ano;
    r2=r1/100;
    r1=r1%100;
    r3=r1+r2;
    r3=r3%5;


    if (r3==0)
         printf ("Timido!"); 
    else if (r3==1)
         printf ("Sonhador!"); 
    else if (r3==2)
         printf ("paquerador!"); 
    else if (r3==3)
         printf ("Atraente!"); 
    else 
         printf ("Irresistivel!"); 
    
}