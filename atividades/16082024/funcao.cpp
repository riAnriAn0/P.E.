#include <stdio.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[30];
    int qnt;
    float preco;
    Data validade;
} produto;

produto produtos[100];
int posicao = 0;

Data hoje;

bool validade(Data hoje, Data validade)
{
    if (hoje.ano * 365 + hoje.mes * 30 + hoje.dia > validade.ano * 365 + validade.mes * 30 + validade.dia)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void inserir_produtos()
{
    if (posicao >= 100)
    {
        printf("Banco de dados cheio!");
        return;
    }

    printf("Digite o nome do produto: ");
    scanf("%s", produtos[posicao].nome);
    printf("Digite a quantidade : ");
    scanf("%d", &produtos[posicao].qnt);
    printf("Digite o preco do produto: ");
    scanf("%f", &produtos[posicao].preco);
    printf("Digite a validade  (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &produtos[posicao].validade.dia, &produtos[posicao].validade.mes, &produtos[posicao].validade.ano);

    posicao++;
}

void busca(char nome[])
{
    for (int i = 0; i < posicao; i++)
    {
        if (strcmp(nome, produtos[i].nome) == 0)
        {
            printf("Nome: %s\n", produtos[i].nome);
            printf("Quantidade: %d\n", produtos[i].qnt);
            printf("Preco: R$ %.2f\n", produtos[i].preco);
            printf("Validade: %d/%d/%d\n", produtos[i].validade.dia, produtos[i].validade.mes, produtos[i].validade.ano);
            return;
        }
    }
    printf("Produto nao encontrado !");
}

// nova funçãobuscas

int buscar(char nome[30])
{
    for (int i = 0; i < posicao; i++)
    {
        if ((strcmp(nome, produtos[i].nome) == 0))
        {
            return i;
        }
    }
    printf("Produto nao encontrado!!!");
}

void venda(char nome[30], int qnt)
{
    // for (int i = 0; i < posicao; i++)
    // {
    //     if (strcmp(nome, produtos[i].nome) == 0)
    //     {
    //         if (qnt <= produtos[i].qnt)
    //         {
    //             if (validade(hoje, produtos[i].validade))
    //             {
    //                 printf("Total da venda: R$ %.2f\n", qnt * produtos[i].preco);
    //                 produtos[i].qnt -= qnt;
    //                 return;
    //             }
    //             else
    //             {
    //                 printf("Produto Vencido !!!\n");
    //                 return;
    //             }
    //         }
    //         else
    //         {
    //             printf("Quantidade Insuficiente!!!\n");
    //             return;
    //         }
    //     }
    // }

    int i = buscar(nome);

    if (i > -1)
    {
        if (produtos[i].qnt >= qnt)
        {
            if (validade(hoje, produtos[i].validade))
            {
                printf("Total da venda: R$ %.2f\n", qnt * produtos[i].preco);
                produtos[i].qnt -= qnt;
                return;
            }
            else
            {
                printf("Produto Vencido !!!\n");
                return;
            }
        }
        else
        {
            printf("Quantidade Insuficiente!!!\n");
            return;
        }
    }
    printf("Produto nao Encontrado!!!\n");
}

void valor_total()
{
    float valortotal = 0;
    for (int i = 0; i < posicao; i++)
    {
        valortotal += produtos[i].preco * produtos[i].qnt;
    }

    printf("\nO valor total dos produtos em estoques: %.2f\n", valortotal);
}

// apenas para produtos dentro da valdade
void valor_total_2()
{
    float valortotal = 0;
    for (int i = 0; i < posicao; i++)
    {
        if (validade(hoje, produtos[i].validade))
        {
            valortotal += produtos[i].preco * produtos[i].qnt;
        }
    }

    printf("\nO valor total dos produtos em estoques: %.2f\n", valortotal);
}

void remover(char nome[30])
{
    int i = buscar(nome);

    if ((i > -1) && (i != posicao -1))
    {
        for (int j = i ; j < posicao-1; j++)
        {
            produtos[j] = produtos[j+1];
        }
        
        posicao--;
    }else{
        printf("Produto nao encontrado!!!");
    }
}

int main()
{

    hoje.dia = 17;
    hoje.mes = 8;
    hoje.ano = 2024;

    int opcao = -1;

    while (opcao != 0)
    {
        int qnt = 0;
        char nome[30];

        printf("\n=========== MENU ===========\n");
        printf("[1]Inserir produto\n");
        printf("[2]Buscar produto\n");
        printf("[3]Vender produto\n");
        printf("[4]Valor total\n");
        printf("[0]Sair\n");
        printf("Insira o numero da opisao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            inserir_produtos();
            break;
        case 2:

            printf("\nNome do produto: ");
            scanf("%s", nome);

            busca(nome);
            break;
        case 3:

            printf("\nNome do produto: ");
            scanf("%s", nome);
            printf("Quantidade desejada: ");
            scanf("%d", &qnt);

            venda(nome, qnt);
            break;
        case 4:
            valor_total_2();
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida!!\n");
            break;
        }
    }

    return 0;
}