#include <stdio.h>

int main() {
    int vetor[10];
    int temp;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite aqui: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 9 ; i++) {
        for (int j = 0; j < 10; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
