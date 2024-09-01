#include <stdio.h>
#include <string.h>

#define TAM_VETOR 3

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char rua[20];
    char bairro[20];
    char cep[12];
    char numero_casa[10];
} Endereco;

typedef struct
{
    char nome[20];
    char tel[12];
    char cpf[12];
    int idade;
    Endereco endereco;
    Data nascimento;
} Cliente;

int main()
{

    Cliente clientes[TAM_VETOR];

    Data hoje;
    hoje.dia = 10;
    hoje.mes = 8;
    hoje.ano = 2024;

    // cadastros dos clientes

    for (int i = 0; i < TAM_VETOR; i++)
    {
        printf("\n-==-=-=-=-=---=-=--=-=---=-=-=-=\n");
        printf("CLIENTE %d \n", i + 1);
        printf("-==-=-=-=-=---=-=--=-=---=-=-=-=\n");
        printf("Nome: ");
        scanf("%s", clientes[i].nome);
        printf("CPF: ");
        scanf("%s", clientes[i].cpf);
        printf("Telefone : ");
        scanf("%s", clientes[i].tel);
        printf("Digite a data de nascimento (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &clientes[i].nascimento.dia, &clientes[i].nascimento.mes, &clientes[i].nascimento.ano);
        printf("Rua: ");
        scanf("%s", clientes[i].endereco.rua);
        printf("Bairro: ");
        scanf("%s", clientes[i].endereco.bairro);
        printf("CEP: ");
        scanf("%s", clientes[i].endereco.cep);
        printf("Numero da casa: ");
        scanf("%s", clientes[i].endereco.numero_casa);
    }

    // calcula a idade dos clientes

    for (int i = 0; i < TAM_VETOR; i++)
    {
        clientes[i].idade = hoje.ano - clientes[i].nascimento.ano;
        if (hoje.mes * 30 + hoje.dia < clientes[i].nascimento.mes * 30 + clientes[i].nascimento.dia)
        {
            clientes[i].idade -= 1;
        }
    }

    printf("\n\nCLIENTES COM MAIS DE 18 ANOS\n");
    for (int i = 0; i < TAM_VETOR; i++)
    {
        if (clientes[i].idade >= 18)
        {
            printf("%s\n", clientes[i].nome);
        }
    }

    printf("\n\nCLIENTES MORADORES DO CENTRO\n");
    for (int i = 0; i < TAM_VETOR; i++)
    {
        if (!(strcmp(clientes[i].endereco.bairro, "centro")) || !(strcmp(clientes[i].endereco.bairro, "Centro")))
        {
            printf("%s\n", clientes[i].nome);
        }
    }

    return 0;
}
