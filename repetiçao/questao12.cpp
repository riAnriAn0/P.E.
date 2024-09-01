// 12. Imprima os números de 1 a 100 que são múltiplos de 3 e 5 usando um laço for.

#include <stdio.h>

int main(int argc, char const *argv[])
{   
    printf("Numeros de 1 a 100 multiplos de 3 e 5:");

    for (int i = 1; i <= 100; i++)
    {
        if ( i % 3 == 0 && i % 5 == 0)
        {
            printf("\n%d", i);
        }    
    }
    
    return 0;
}
