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
    char cpf[12];
    char sexo;
    Data nascimento;
} Pessoa;

Pessoa pessoas[50];
int qnt_pessoas = 0;

// busscar pessoas pelo cpf
int buscar(char cpf[12])
{
    for (int i = 0; i < qnt_pessoas; i++)
    {
        if (!(strcmp(cpf, pessoas[i].cpf)))
        {
            return i;
        }
    }

    return -1;
}

// transforma data em dias
int tranform_data(Data data)
{
    int qnt_dias = data.ano * 360 + data.mes * 12 + data.dia * 30;

    return qnt_dias;
}

// inisrir pessoas
void inserir()
{

    if (qnt_pessoas >= 50)
    {
        printf("\nBanco de dados esta cheio!!!\n");

        return;
    }

    printf("Nome: ");
    scanf("%s", pessoas[qnt_pessoas].nome);
    printf("CPF (00000000000): ");
    scanf("%s", pessoas[qnt_pessoas].cpf);
    printf("sexo (F/M): ");
    scanf("%s", &pessoas[qnt_pessoas].sexo);
    printf("Data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &pessoas[qnt_pessoas].nascimento.dia, &pessoas[qnt_pessoas].nascimento.mes, &pessoas[qnt_pessoas].nascimento.ano);

    qnt_pessoas++;
}

// quandade de homens e mulheres
void qnt_fm()
{
    int qnt_sexo_f = 0;

    for (int i = 0; i < qnt_pessoas; i++)
    {
        if ((pessoas[i].sexo == 'F') || (pessoas[i].sexo == 'f'))
        {
            qnt_sexo_f += 1;
        }
    }

    printf("\nQuantidade se pessoas do sexo feminino: %d", qnt_sexo_f);
    printf("\nQuantidade se pessoas do sexo masculino: %d\n", qnt_pessoas - qnt_sexo_f);
}

// buscar pessoas

void buscar_pessoas(char cpf[12])
{
    int i = buscar(cpf);

    if (i >= 0)
    {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("CPF: %s\n", pessoas[i].cpf);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Nascimento: %d/%d/%d \n", pessoas[i].nascimento.dia, pessoas[i].nascimento.mes, pessoas[i].nascimento.ano);
    }
    else
    {
        printf("\nPessoa nao encontrada!!!\n");
    }
}

// buscar por data

void buscar_data(Data data)
{
    int qnt_dias_buscar = tranform_data(data);
    bool pessoa_encontrada = false;

    printf("Pessoas que nasceram na data (%d/%d/%d).\n", data.dia, data.mes, data.ano);

    for (int i = 0; i < qnt_pessoas; i++)
    {
        int qnt_dias_pessoas = tranform_data(pessoas[i].nascimento);

        if (qnt_dias_buscar == qnt_dias_pessoas)
        {
            pessoa_encontrada = true;
            printf("%s\n", pessoas[i].nome);
        }
    }

    if (!(pessoa_encontrada))
    {
        printf("Nenhuma pessoa nasceu nessa data!!!");
    }
}

// busca pessoas entre um intervalo de datas
void buscar_inter_data(Data data_1, Data data_2)
{
    int qnt_dias_1 = tranform_data(data_1);
    int qnt_dias_2 = tranform_data(data_2);
    int qnt_pessoas_encontro = 0;

    printf("Pessoas que nasceram entre (%d/%d/%d e %d/%d/%d).\n", data_1.dia, data_1.mes, data_1.ano, data_2.dia, data_2.mes, data_2.ano);
    for (int i = 0; i < qnt_pessoas; i++)
    {
        int qnt_dias_pessoa = tranform_data(pessoas[i].nascimento);
        if ((qnt_dias_pessoa >= qnt_dias_1) && (qnt_dias_pessoa <= qnt_dias_2))
        {
            qnt_pessoas_encontro++;
        }
    }

    if (qnt_pessoas_encontro == 0)
    {
        printf("Nao ha pessoas que nasceram entre essas datas!!!");
    }
    else
    {
        printf(" %d pessoas nasceu entre essas datas\n", qnt_pessoas_encontro);
    }
}

int main()
{

    int opcao;
    char cpf[12];
    Data data_1;
    Data data_2;

    while (opcao != 0)
    {
        printf("\n=-=-=-=-=-=-=-=-=-==-=--=-\n");
        printf("[1] Inserir pessoa\n");
        printf("[2] Quantidade de pessoas por sexo\n");
        printf("[3] Buscar por CPF\n");
        printf("[4] Buscar por data\n");
        printf("[5] Buscar um intervalo de data\n");
        printf("[0] Sair\n");
        printf("=-=-=-=-=-=-=-=-=-==-=--=-\n");

        printf("Escolha  uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            inserir();
            break;
        case 2:
            qnt_fm();
            break;
        case 3:
            printf("\nDigite um cpf (00000000000): ");
            scanf("%s", cpf);
            buscar_pessoas(cpf);
            break;
        case 4:
            printf("Digite uma data (dd/mm/aaaa): ");
            scanf("%d/%d/%d", &data_1.dia, &data_1.mes, &data_1.ano);
            buscar_data(data_1);
            break;
        case 5:
            printf("Digite a primeira data (mais antiga): ");
            scanf("%d/%d/%d", &data_1.dia, &data_1.mes, &data_1.ano);

            printf("Digite a segunda data (mais recente): ");
            scanf("%d/%d/%d", &data_2.dia, &data_2.mes, &data_2.ano);

            buscar_inter_data(data_1, data_2);
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
