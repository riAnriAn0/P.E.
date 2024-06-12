#include <stdio.h>
#include <math.h>

int main(){
    
    float original[10], quadrado[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero real: ");
        scanf("%f", &original[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        quadrado[i] = pow(original[i],2);
    }
    
    printf("\nConjuto original: ");

    for (int i = 0; i < 10; i++)
    {
        printf(" %.2f", original[i]);
    }

    printf("\n\nQuadrado dos elementos: ");

    for (int i = 0; i < 10; i++)
    {
        printf(" %.2f ,", quadrado[i]);
    }
    

    return 0;
}