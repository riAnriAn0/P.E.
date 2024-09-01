#include <stdio.h>

int main()
{
    float valorCobrado = 0;
    float valorPago = 0;
    float troco = 0;
    int cedulas[4] = {50, 20, 5, 2};
    int repSistema[4];

    printf("-=-=-=-=-=-=-==--=-=-=-=-=-=-==-=-\n");
    printf("Qual o valor da cobranca: ");
    scanf("%f", &valorCobrado);
    printf("Quantia que sera paga: ");
    scanf("%f", &valorPago);

    while (valorCobrado > valorPago)
    {
        printf("VALOR INVALIDO\n");
        printf("Quantia que sera paga: ");
        scanf("%f", &valorPago);
    }
    printf("-=-=-=-=-=-=-==--=-=-=-=-=-=-==-=-\n");

    troco = valorPago - valorCobrado;

    if (troco == 0)
    {
        printf("\n\nValor cobrado: %.2f\n", valorCobrado);
        printf("Quantia paga pelo cliente: %.2f\n", valorPago);
        printf("Resposta do sistema: nao ha troco \n");
        printf("-=-=-=-=-=-=-==--=-=-=-=-=-=-==-=-\n");

        return 0;
    }

    for (int i = 0; i < 4; i++)
    {
        int resto = troco / cedulas[i];
        troco = troco - (resto * cedulas[i]);
        repSistema[i] = resto;
    }

    printf("Valor cobrado: %.2f\n", valorCobrado);
    printf("Quantia paga pelo cliente: %.2f\n", valorPago);
    printf("Reposta do sistema: \n");

    for (int i = 0; i < 4; i++)
    {
        printf(" %d notas de R$ %d,00 reais\n", repSistema[i], cedulas[i]);
    }

    // printf(" %d notas de R$ 50,00 reais\n", repSistema[0]);
    // printf(" %d notas de R$ 20,00 reais\n", repSistema[1]);
    // printf(" %d notas de R$ 5,00 reais\n", repSistema[2]);
    // printf(" %d notas de R$ 2,00 reais\n", repSistema[3]);
    
    printf(" R$ %.2f de moedas.\n", troco);
    printf("-=-=-=-=-=-=-==--=-=-=-=-=-=-==-=-");

    return 0;
}
