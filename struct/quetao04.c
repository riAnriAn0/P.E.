#include <stdio.h>

struct Conta
{
    int numero_conta;
    float saldo;
    char tipo;
};

typedef struct Conta conta;
int main(){

    conta conta_1;

    printf("\n\n=-=-=-= Conta =-=-=-\n");
    printf("Digite o Número da Conta: ");
    scanf("%d", &conta_1.numero_conta);
    printf("Digite o Saldo: ");
    scanf("%f", &conta_1.saldo);
    printf("Digite o tipo de conta:");
    scanf("%c", &conta_1.tipo);


    printf("\n\n=-=-=-= Conta =-=-=-\n");
    printf("Número da Conta: %d\n", conta_1.numero_conta);
    printf("Saldo: %.2f\n", conta_1.saldo);
    printf("Tipo de conta: %c\n\n\n", conta_1.tipo);


    return 0;
}