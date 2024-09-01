#include <stdio.h>

int main(int argc, char const *argv[])
{
    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ,", vetor[i]);
    }

    return 0;
}
