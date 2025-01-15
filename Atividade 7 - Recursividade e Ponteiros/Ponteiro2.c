#include <stdio.h>

//Codifique um programa para criar a configuração representada na figura abaixo e exibir a letra 'A' a partir de cada uma das variáveis.
//p->q->r->s->t[A]
  
int main() {
    char t;     
    char ****p, ***q, **r, *s;  

    t = 'A';  

    
    s = &t;   
    r = &s;     
    q = &r;    
    p = &q;     

    
    printf("%c", ****p);  
}
