#include <stdio.h>

int main(void){

    int numero;
    
    printf("Digite um numeo natural:");
    scanf("%d", &numero);

    printf("Os %d primeiros numeros naturais pares sao: ", numero);
    for (int i = 0; i < (numero*2); i++)
    {
        if (i % 2 == 0)
        {
            printf(" %d " , i);
        }
        
    }
    
    return 0;
}