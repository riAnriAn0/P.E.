#include <iostream>

int main(){

    int num = 15;

    printf("Digite um valor para a variavel:");
    scanf("%d", &num);
    printf("O valor da variavel e: %d", num);

    int novo_v;

    printf("\nDigite um novo valor para a variavel:");
    scanf("%d",&novo_v );

    int *ponteiro = &num;

    *ponteiro = novo_v;

    printf("Agora, o valor da variavl e : %d", num);

    return 0;
}