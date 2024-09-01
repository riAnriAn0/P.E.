// 11. Leia 10 números inteiros e imprima o maior e o menor valor lido.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int maior, menor, num ;

        printf("Digite um numero: ");
        scanf("%d", &num);

        maior = num;

    for (int i = 0; i < 9; i++)
    {   
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
        
        if(num < menor){
            menor = num;
        }
    }
    
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);

    return 0;
}
