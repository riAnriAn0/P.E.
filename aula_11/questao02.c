#include <stdio.h>
#include <math.h>

int potencia(int base, int expo ){
    return pow(base,expo);
}

int main(){

    int base, exp;

    printf("\n\nDigite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &exp);

    int resp = potencia(base, exp);

    printf("\n\n%d elevado a %d e igua a : %d\n\n",base,exp,resp);

    return 0;
}