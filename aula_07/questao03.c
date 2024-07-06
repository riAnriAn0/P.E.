#include <stdio.h>

int main() {
    int quantNumeros;
    int valorRecebido;
    int maiorNumero = 0;
    int maiorNumeroRepetido = 0;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &quantNumeros);

    for (int i = 0; i < quantNumeros; i++) {
        printf("Digite o %d° numero: ", i + 1);
        scanf("%d", &valorRecebido);

        if (valorRecebido > maiorNumero) {
            maiorNumero = valorRecebido;
            maiorNumeroRepetido = 1;
        } else if (valorRecebido == maiorNumero) {
            maiorNumeroRepetido++;
        }
    }

    printf("O maior numero digitado foi: %d\n", maiorNumero);
    printf("Ele foi lido %d vezes.\n", maiorNumeroRepetido);

    return 0;
}
