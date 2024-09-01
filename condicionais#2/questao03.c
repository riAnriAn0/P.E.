#include <stdio.h>
#include <math.h>

int main(){

    float nota_01, nota_02, media;

    printf("DIGITE SUA PRIMERIA NOTA: ");
    scanf("%f", &nota_01);
    printf("DIGITE SUA SEGUNDA NOTA: ");
    scanf("%f", &nota_02);

    media = (nota_01 + nota_02) / 2;

    
    if ( media >= 7)
    {
        printf("APROVADO");
    }
    else if ( media >= 4 && media <= 6.9 )
    {
        printf("RECUPERACAO");
    }
    else
    {
        printf("REPROVADO");
    }

    return 0;
}