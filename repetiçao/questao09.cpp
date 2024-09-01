// 9. Calcule o valor de um número elevado a outro usando laço for. (Ex: 3^4 = 81)

#include <stdio.h>

int main()
{

    int base = 0,expo = 0, result= 1;

    printf("Digite um numero para a base:");
    scanf("%d", &base);
    printf("Digite um numero para o expoente:");
    scanf("%d", &expo);


    for (int i = 1; i <= expo; i++){   
        result *= base; 
    }
    
    printf("o valor de %d^%d e igual a: %d\n", base, expo, result);

    return 0;
}
