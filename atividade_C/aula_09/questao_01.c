#include <stdio.h>
#include <locale.h>

// criando struct base
struct pessoa
{
    char cpf[12];
    int idade;
    float peso;
};

typedef struct pessoa pessoa;

int main(){
    setlocale(LC_ALL, "Portuguese");

    pessoa pessoa_1;

    printf("==============================\n");
    printf("Digite seu CPF: ");
    scanf("%s", pessoa_1.cpf);
    printf("Digite seu Idade: ");
    scanf("%d", &pessoa_1.idade);
    printf("Digite seu Peso: ");
    scanf("%f", &pessoa_1.peso);
    printf("\n==============================\n\n\n");

    printf("======== Dados ==========\n");
    printf("CPF: %s\n", pessoa_1.cpf);
    printf("Idade: %d anos\n", pessoa_1.idade);
    printf("Peso: %.2f Kg\n\n", pessoa_1.peso);

    return 0;
}