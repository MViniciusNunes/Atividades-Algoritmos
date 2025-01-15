#include <stdio.h>

// Operadores de adição e subtração com ponteiros e inteiros. Mostre as saídas do código abaixo:

void main(void) {
int *p = (int *) 0x1000;
 p++; printf("%p ", p );
 p-=3; printf("%p ", p );
 p+=2; printf("%p ", p );
 p--; printf("%p ", p );
}

// 0x1004 0xff8 0x1000 0xffc