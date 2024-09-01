#include <stdio.h>
#include <math.h>

int main(){

    float altura ;
    float peso_ideal;
    int sexo;

    printf(" QUAL A SUA ALTURA? ");
    scanf("%f", &altura);

    printf(" QUAL SEU SEXO ?\n [1] FEMIININO \n [2] MACULINIO \n");
    scanf("%d", &sexo);

    switch (sexo)
    {
    case 1:
        peso_ideal = ( 62.1 * altura) - 44.7;
        break;
    case 2:
        peso_ideal = ( 72.7 * altura) - 58;
        break;
    default:
        break;
    }

    printf(" SEU PESO IDEAL E : \n %.2f kg", peso_ideal);

    return 0;
}