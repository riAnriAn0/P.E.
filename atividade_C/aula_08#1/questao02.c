#include <stdio.h>

int main(){
    int numeros[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &numeros[i] );
    }

    for (int i = 0; i < 6; i++)
    {    
        printf(" %d \n", numeros[i] );
    }

    return 0;
}