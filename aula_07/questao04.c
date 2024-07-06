#include <stdio.h>

int main()
{   
    int numero,
        centenas = 0,
        dezenas = 0,
        unidades = 0;

    printf("\n\nDigite um numero inteiro entre 100 e 999: ");
    scanf("%d", &numero);

    while ( numero > 100)
    {
        numero -= 100;
        centenas += 1;
    }
    while ( numero > 10)
    {
        numero -= 10;
        dezenas += 1;
    }
    while ( numero > 0)
    {
        numero -= 1;
        unidades += 1;
    }
    
    printf("\n\nCentenas: %d \nDezenas: %d \nUnidades: %d" ,centenas, dezenas, unidades);

    return 0;
}
