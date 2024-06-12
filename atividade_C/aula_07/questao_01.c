#include <stdio.h>

int main(){

    int numero;
    
    printf("Digite um numeo natural:");
    scanf("%d", &numero);


    printf("Os %d primeiros numeros naturais impares sao: ", numero);
    for (int i = 0; i < (numero*2); i++)
    {
        if (i % 2 != 0)
        {
            printf(" %d " , i);
        }
        
    }
    
    return 0;
}