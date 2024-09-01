#include <stdio.h>

int main()
{
    int numeros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d valor: ", i+1 );
        scanf("%d", &numeros[i]);
    }

    printf("Imprimindo...\n");

    for (int i = 0; i < 5; i++)
    {
        int num = numeros[i];
        int *ptr = &num;
        printf("%d,", *ptr);
    }
        

    return 0;
}
