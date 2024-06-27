#include <stdio.h>

int main(){

    int numeros_pares = 0;
    int numeros[10] ;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor:");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] % 2 == 0 )
        {
            numeros_pares += 1;
        }
    }

    printf("Quantidade de valores pares: %d", numeros_pares);
    
    return 0;
}