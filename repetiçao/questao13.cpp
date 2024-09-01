// 13. Escreva um programa que peça ao usuário uma senha formada apenas por números e, em
// seguida, peça ao usuário que digite a senha novamente. O programa deve verificar se as
// senhas digitadas são iguais e, se forem, imprimir uma mensagem de sucesso. Caso contrário, imprima uma mensagem de erro.

#include <stdio.h>

int main()
{
    int senha, senha2;

    printf("Digite uma senha (ela deve ser composta apenas por numeros).\n");
    printf("Senha: ");
    scanf("%d", &senha);

    // do
    // {

    //     printf("Digite novamente a sua senha: ");
    //     scanf("%d", &senha2);
    //     printf("SENHA INCORRETA!!!\n");

    // } while (senha != senha2);

    printf("Digite novamente a sua senha: ");
    scanf("%d", &senha2);

    while (senha != senha2)
    {
        printf("SENHA INCORRETA!!!\n");
        printf("Digite novamente a sua senha: ");
        scanf("%d", &senha2);
    }

    printf("\nSUCESSO!!!");

    return 0;
}
