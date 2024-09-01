#include <stdio.h>
#include <math.h>

int main(){
    
    float ladoA;
    float ladoB;
    float ladoC;

    printf("DIGITE A MEDIDA DOS LADOS:\n");
    printf("LADO 1: ");
    scanf("%f", &ladoA);
    printf("LADO 2: ");
    scanf("%f", &ladoB);
    printf("LADO 3: ");
    scanf("%f", &ladoC);

    ladoA = pow(ladoA,2);
    ladoB = pow(ladoB,2);
    ladoC = pow(ladoC,2);

    if ( ladoA + ladoB == ladoC)
    {
        printf("ESSAS MEDIDAS FORMAM UM TRIANGULO RETANGULO");
    }
    else if (ladoA + ladoC == ladoB)
    {    
        printf("ESSAS MEDIDAS FORMAM UM TRIANGULO RETANGULO");   
    } 
    else if (ladoC + ladoB == ladoA)
    {
        printf("ESSAS MEDIDAS FORMAM UM TRIANGULO RETANGULO");   
    } else
    {
        printf("ESSAS MEDIDAS NAO FORMAM UM TRIANGULO RETANGULO");   
    }
    
    return 0;
}
