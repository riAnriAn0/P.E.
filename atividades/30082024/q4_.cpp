#include <stdio.h>

void soma( int *a, int *b){
    *a += *b;
}

int main()
{
    int a = 0;
    int b = 0;

    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);

    soma(&a, &b);

    printf("valores:\n");
    printf("a: %d\n", a);
    printf("b: %d", b);
    
    return 0;
}

/* Programe uma função que permita passar dois números inteiros A e B por parâmetro. Esta
função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A.
Imprima os valores de A e B na função main. */