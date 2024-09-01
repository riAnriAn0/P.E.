// 5. Calcule e imprima a soma dos números ímpares de 1 a 100 usando um laço while.

#include <stdio.h>

int main()
{
    int soma = 0;
    int i = 1;

    while ( i <= 100)
    {
        soma += i;
        i += 2;
    }
    
    printf("A soma dos numeros impares de 1 a 100 e igual a %d", soma);

    return 0;
}
