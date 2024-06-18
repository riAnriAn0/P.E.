#include <stdio.h>

int main(){

    int numeros[5],
        maior = 0,
        menor;
    float media ;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &numeros[i]);
    }

     for (int i = 0; i < 5; i++)
    {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
        
    }

    menor = maior;

    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        } 
    }

    for (int i = 0; i < 5; i++)
    {
        media += numeros[i];
    }
        media = media/ 5 ; 
    
    printf("\n\nValores lidos: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ,", numeros[i]);
    }

    printf("\nO Maior valor e: %d\n", maior);
    printf("O menor valor e: %d\n", menor);
    printf("A media dos valores: %.2f", media);
    
    return 0;
}