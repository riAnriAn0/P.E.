#include <stdio.h>
#include <string.h>

// 2. Quais os erros presentes nos códigos abaixo? Como poderíamos corrigí-los?

// b)
//  void troca (int *i, int *j) {
//      int *temp; // temp nao precisa ser ponteiro
//      *temp = *i;
//      *i = *j;
//      *j = *temp;
//  }

void troca(int *i, int *j)
{
    int temp; // temp nao precisa ser ponteiro
    temp = *i;
    *i = *j;
    *j = temp;
}

int main()
{

    // a)

    // int x, *p;
    // x = 100;
    // p = x; // incluir & para que o ponteiro receba o endereço de memoria de x.
    // printf(“Valor de p : % d.\n”, *p);

    int x, *p;
    x = 100;
    p = &x; // incluir & para que o ponteiro receba o endereço de memoria de x.
    printf("Valor de p : % d.\n", *p);

    // c)

    char *a, *b;
    a = "abacate";
    b = "uva";

    if (strcmp(a, b) < 0)
    {// Comparar o conteúdo das strings
        printf("%s vem antes de %s no dicionário\n", a, b);
    }
    else
    {
        printf("%s vem depois de %s no dicionário\n", a, b);
    }

    return 0;
}
