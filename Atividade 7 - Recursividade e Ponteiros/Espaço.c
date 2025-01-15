#include <stdio.h>

// Com ponteiros, 1000+1 não é necessariamente 1001! Qual será a saída do código abaixo

void main(void) 
{

char *a = (char *) 0x1000;
int *b = (int *) 0x1000;
 float *c = (float *) 0x1000;
 double *d = (double *) 0x1000;
printf("%p %p %p %p", a+1, b+1, c+1, d+1 );
}

//0x1001 0x1004 0x1004 0x1008
