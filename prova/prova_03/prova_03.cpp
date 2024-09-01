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

int buscar(Pessoa *pessoas, int *qnt_pessoas, char *cpf)
{
    for (int i = 0; i < *qnt_pessoas; i++)
    {
        if (!(strcmp(cpf, pessoas[i].cpf)))
        {
            return i;
        }
    }

    return -1;
}

int tranform_data(Data data)
{
    int qnt_dias = data.ano * 360 + data.mes * 30 + data.dia;

    return qnt_dias;
}

void inserir(Pessoa *pessoas, int *qnt_pessoas)
{

    if ((*qnt_pessoas) >= 50)
    {
        printf("\nBanco de dados esta cheio!!!\n");

        return;
    }

    printf("Nome: ");
    scanf("%s", pessoas[*qnt_pessoas].nome);
    printf("CPF (00000000000): ");
    scanf("%s", pessoas[*qnt_pessoas].cpf);
    printf("sexo (F/M): ");
    scanf("%s", &pessoas[*qnt_pessoas].sexo);
    printf("Data de nascimento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &pessoas[*qnt_pessoas].nascimento.dia, &pessoas[*qnt_pessoas].nascimento.mes, &pessoas[*qnt_pessoas].nascimento.ano);

    (*qnt_pessoas)++;
}

void qnt_fm(Pessoa *pessoas, int *qnt_pessoas)
{
    int qnt_sexo_f = 0;

    for (int i = 0; i < *qnt_pessoas; i++)
    {
        if ((pessoas[i].sexo == 'F') || (pessoas[i].sexo == 'f'))
        {
            qnt_sexo_f += 1;
        }
    }

    printf("\nQuantidade de pessoas do sexo feminino: %d", qnt_sexo_f);
    printf("\nQuantidade de pessoas do sexo masculino: %d\n", *qnt_pessoas - qnt_sexo_f);
}

void buscar_pessoas(Pessoa *pessoas, int *qnt_pessoas, char *cpf)
{
    int i = buscar(pessoas, qnt_pessoas, cpf);

    if (i >= 0)
    {
        printf("\nNome: %s\n", pessoas[i].nome);
        printf("CPF: %s\n", pessoas[i].cpf);
        printf("Sexo: %c\n", pessoas[i].sexo);
        printf("Nascimento: %d/%d/%d \n", pessoas[i].nascimento.dia, pessoas[i].nascimento.mes, pessoas[i].nascimento.ano);
    }
    else
    {
        printf("\nPessoa nao encontrada!!!\n");
    }
}

void buscar_data(Pessoa *pessoas, int *qnt_pessoas, Data *data)
{
    int qnt_dias_buscar = tranform_data(*data);
    bool pessoa_encontrada = false;

    printf("\nPessoas que nasceram na data (%d/%d/%d).\n\n", data->dia, data->mes, data->ano);

    for (int i = 0; i < *qnt_pessoas; i++)
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
        printf("\nNenhuma pessoa nasceu nessa data!!!");
    }
}

void buscar_inter_data(Pessoa *pessoas, int *qnt_pessoas, Data *data_1, Data *data_2)
{
    int qnt_dias_1 = tranform_data(*data_1);
    int qnt_dias_2 = tranform_data(*data_2);
    int qnt_pessoas_encontro = 0;

    printf("\nPessoas que nasceram entre (%d/%d/%d e %d/%d/%d).\n", data_1->dia, data_1->mes, data_1->ano, data_2->dia, data_2->mes, data_2->ano);
    for (int i = 0; i < *qnt_pessoas; i++)
    {
        int qnt_dias_pessoa = tranform_data(pessoas[i].nascimento);
        if ((qnt_dias_pessoa >= qnt_dias_1) && (qnt_dias_pessoa <= qnt_dias_2))
        {
            qnt_pessoas_encontro++;
        }
    }

    if (qnt_pessoas_encontro == 0)
    {
        printf("Nao ha pessoas que nasceram entre essas datas!!!\n");
    }
    else
    {
        printf(" %d pessoas nasceu entre essas datas\n", qnt_pessoas_encontro);
    }
}

void editar(Pessoa *pessoas, int *qnt_pessoas, char *cpf)
{

    int i = buscar(pessoas, qnt_pessoas, cpf);

    if (i >= 0)
    {
        printf("\n-=--=-EDITAR-=-=-=-\n");
        printf("Nome: ");
        scanf("%s", pessoas[i].nome);
        printf("CPF (00000000000): ");
        scanf("%s", pessoas[i].cpf);
        printf("sexo (F/M): ");
        scanf("%s", &pessoas[i].sexo);
        printf("Data de nascimento (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
    }
    else
    {
        printf("\nPessoa nao encontrada!!!\n");
    }
}

void mais_velho(Pessoa *pessoas, int *qnt_pessoas)
{
    Pessoa mais_velha = pessoas[0];
    Pessoa mais_nova = pessoas[0];

    for (int i = 0; i < *qnt_pessoas; i++)
    {
        // pessoa mais velha
        if (tranform_data(pessoas[i].nascimento) < tranform_data(mais_velha.nascimento))
        {
            mais_velha = pessoas[i];
        }

        // pessoa mais nova

        if (tranform_data(pessoas[i].nascimento) > tranform_data(mais_nova.nascimento))
        {
            mais_nova = pessoas[i];
        }
    }

    printf("\nA pessoa mais nova cadastrada e: %s\n", mais_nova.nome);
    printf("\nA pessoa mais velha cadastrada e: %s\n", mais_velha.nome);
}

void aniversariantes(Pessoa *pessoas, int *qnt_pessoas)
{
    char meses[12][4]{{"JAN"}, {"FEV"}, {"MAR"}, {"ABR"}, {"MAI"}, {"JUN"}, {"JUL"}, {"AGO"}, {"SET"}, {"OUT"}, {"NOV"}, {"DEZ"}};
    int aniversio[12] = {0};

    for (int i = 0; i < *qnt_pessoas; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (pessoas[i].nascimento.mes == j + 1)
            {
                aniversio[j]++;
            }
        }
    }

    printf("\n=-=-=-=ANIVERSARIANTES-=-=-=\n");
    for (int i = 0; i < 12; i++)
    {
        printf("%s : %d\n", meses[i], aniversio[i]);
    }
}

int main()
{

    int opcao;
    int qnt_pessoas = 0;
    char cpf[12];

    Pessoa pessoas[50];
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
        printf("[6] Editar dados\n");
        printf("[7] Pessoa mais velha e mais nova\n");
        printf("[8] Aniversariantes\n");
        printf("[0] Sair\n");
        printf("=-=-=-=-=-=-=-=-=-==-=--=-\n");

        printf("Escolha  uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            inserir(pessoas, &qnt_pessoas);
            break;
        case 2:
            qnt_fm(pessoas, &qnt_pessoas);
            break;
        case 3:
            printf("\nDigite um cpf (00000000000): ");
            scanf("%s", cpf);
            buscar_pessoas(pessoas, &qnt_pessoas, cpf);
            break;
        case 4:
            printf("\nDigite uma data (dd/mm/aaaa): ");
            scanf("%d/%d/%d", &data_1.dia, &data_1.mes, &data_1.ano);
            buscar_data(pessoas, &qnt_pessoas, &data_1);
            break;
        case 5:
            printf("\nDigite a primeira data (mais antiga): ");
            scanf("%d/%d/%d", &data_1.dia, &data_1.mes, &data_1.ano);

            printf("\nDigite a segunda data (mais recente): ");
            scanf("%d/%d/%d", &data_2.dia, &data_2.mes, &data_2.ano);

            buscar_inter_data(pessoas, &qnt_pessoas, &data_1, &data_2);
            break;
        case 6:
            printf("\nDigite um cpf (00000000000): ");
            scanf("%s", cpf);
            editar(pessoas, &qnt_pessoas, cpf);
            break;
        case 7:
            mais_velho(pessoas, &qnt_pessoas);
            break;
        case 8:
            aniversariantes(pessoas, &qnt_pessoas);
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
