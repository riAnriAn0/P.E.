#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int vetor[20];
    int soma = 0;

    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        int num_sort = rand() % 10 +1;
        vetor[i] = num_sort;
    }

    for (int i = 0; i < 20; i++)
    {
        soma += vetor[i];
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d ,", vetor[i]);
    } 

        printf("\nSoma dos numeros do vetor: %d", soma);
    

    return 0;
}
