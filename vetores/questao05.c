#include <stdio.h>

int main(){

    int numeros[10], maior = 1, menor = 1;

    for (int i = 0; i < 10 ;i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &numeros[i]);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
        
    }
    
    printf("\n\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);


    return 0;
}