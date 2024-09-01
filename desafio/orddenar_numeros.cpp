// remover numeros negativo e ordena
#include <stdio.h>

int main()
{
    int numeros[20];
    int qnt = 0;

    for (int i = 0; i < 20; i++)
    {

        int num;
        printf("Digite um numero: ");
        scanf("%d", &num);

        int n_rep = 1;

        for (int j = 0; j < qnt; j++)
        {
            if (num == numeros[j])
            {
                n_rep = 0;
            }
        }

        if (n_rep)
        {
            numeros[qnt] = num;
            qnt += 1;
        }
    }

    for (int i = 0; i < qnt; i++)
    {
        for (int i = 0; i < qnt; i++)
        {
            if (numeros[i] > numeros[i + 1])
            {
                int num = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = num;
            }
        }
    }

    for (int i = 0; i < qnt; i++)
    {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
