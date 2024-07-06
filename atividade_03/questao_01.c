#include <stdio.h>
#include <math.h>

int main(){

    float raio;
    float diametro, perimetro, area;

    printf("DIGITE O VALOR DA CIRCUNFERENCIA: ");
    scanf("%f", &raio);

    diametro = raio * 2;
    perimetro = diametro * 3.1415;
    area =  3.1415 * pow(raio,2);

    printf("\nDIAMETRO: %.2f ", diametro
    );
    printf("\nPERIMETRO: %.2f ", perimetro);
    printf("\nAREA: %.2f ", area);

    return 0;
}