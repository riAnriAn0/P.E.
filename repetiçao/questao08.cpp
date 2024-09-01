// 8. Escreva um programa que peça ao usuário 10 números inteiros e imprima a média aritmética deles

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int soma = 0, num = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &num);

        soma += num;
    }

    int media = soma / 10;

    printf("A media dos numeros digitados e: %d", media);

    return 0;
}
