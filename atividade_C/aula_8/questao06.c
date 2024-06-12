#include <stdio.h>

int main(){

    int numeros[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o valor: ");
        scanf("%d", &numeros[i]);
    }

    for(int i = 6 ; i > 0 ; i--)
    {
        printf("%d\n", numeros[i - 1]);
    }

    return 0;
}