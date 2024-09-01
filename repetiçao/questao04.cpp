// 4. Calcule e imprima a soma dos números de 1 a 100 usando um laço for.

#include <stdio.h>

int main()
{
    int soma = 0;

    for (int i = 1; i <= 100; i++)
    {
        soma += i;    
    }

    printf("Soma dos numeros de 1 a 100 e igual a %d", soma);    
    
    return 0;
}
