#include <stdio.h>
#include <math.h>

int main(){

    int numero_maca;
    float valor;

    printf(" QUANTAS MACAS VOCE COMPROU ? ");
    scanf("%d", &numero_maca);

    if( numero_maca >= 12 ){
        valor = numero_maca * 0.25;
    }else{
        valor = numero_maca * 0.3;
    }

    printf("=========================\n");
    printf(" VALOR DA COMPRA:\n ");
    printf(" %.2f\n", valor);
    printf("=========================");

    return 0;
}