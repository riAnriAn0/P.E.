#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numerosPares[50];
    int valor = 0;

    for (int i = 0; i < 50; i++)
    {
        numerosPares[i] = valor;
        valor += 2;
    }

    for (int i = 0; i < 50; i++)
    {
        printf(" %d,", numerosPares[i]);
    }

    return 0;
}
