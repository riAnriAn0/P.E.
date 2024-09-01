// 14. Leia uma série de números inteiros e imprima a quantidade de números pares e ímpares
// usando um laço while. O programa deve parar quando o usuário digitar 0.

#include <stdio.h>

int main()
{
    int par = 0, impar = 0, num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }

        printf("Digite um numero: ");
        scanf("%d", &num);
    }

    printf("==-=-=-=-=-==-=-=-=-=-=-=\n");
    printf("Numeros pares: %d\n", par);
    printf("Numeros impares: %d\n", impar);

    return 0;
}
