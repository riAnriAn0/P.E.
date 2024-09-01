#include <stdio.h>
#include <math.h>

int main(){

    float graus_c;
    float graus_f;

    printf("Digite um valor em graus Farenheit:");
    scanf("%f",&graus_f);

    graus_c = ((graus_f - 32)*5) / 9;

    printf("O valor em graus Celsius: %.2f", graus_c);

    return 0;
}