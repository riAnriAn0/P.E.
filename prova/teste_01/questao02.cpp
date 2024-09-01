#include <stdio.h>
#include <string.h>

int main()
{
    int cpf, cpf_max = 0;
    int total_vendas_vendedor = 0;
    int vendas_loja_total = 0, max_vendas = 0;

    printf("Digite o CPF do vendedor: ");
    scanf("%d", &cpf);

    while (cpf != 0)
    {
        printf("Digite o total de vendas do vendedor: ");
        scanf("%d", &total_vendas_vendedor);

        vendas_loja_total += total_vendas_vendedor;

        if (max_vendas < total_vendas_vendedor)
        {
            max_vendas = total_vendas_vendedor;
            cpf_max = cpf;
        }

        printf("\nDigite o CPF do vendedor: ");
        scanf("%d", &cpf);
    }

    printf("\n\n-=-=-=-==--=-=-=--=-=-=-=-=-=-=-=-=\n");
    printf("Total de vendas da loja: %d\n", vendas_loja_total);
    printf("CPF do vendedor que mais vendeu: %d", cpf_max);
    printf("\n-=-=-=-==--=-=-=--=-=-=-=-=-=-=-=-=\n");

    return 0;
}