#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[11];

    printf("Digite uma string: ");
    scanf("%s", string);

    int comp = strlen(string);

    for (int i = 0, j = comp - 1; i < j; i++, j--)
    {
        int letra = string[i];
        string[i] = string[j];
        string[j] = letra;
    }

    printf("\nString invertida: %s", string);

    return 0;
}