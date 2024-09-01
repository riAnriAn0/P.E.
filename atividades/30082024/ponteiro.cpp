#include <stdio.h>

/*

    2. Quais os erros presentes nos códigos abaixo? Como poderíamos corrigí-los?
    a)
        void main() {
            int x, *p;
            x = 100;
            p = x; // incluir & para que o ponteiro receba o endereço de memoria de x.
            printf(“Valor de p: %d.\n”, *p);
        }
    b)
        void troca (int *i, int *j) {
            int *temp; // temp nao precisa ser ponteiro
            *temp = *i;
            *i = *j;
            *j = *temp;
        }
    c)
        char *a, *b;
        a = "abacate";
        b = “uva";

        if (a < b){
            printf ("%s vem antes de %s no dicionário", a, b);
        }else{
            printf ("%s vem depois de %s no dicionário", a, b);
        }


 */

/*
    3. Escreva um programa que declare um inteiro, um float e um char, e ponteiros para inteiro, float
    e char. Inicialize as variáveis lendo seus valores pelo teclado, depois associe as variáveis aos
    ponteiros (use &) e modifique os valores de cada variável usando os ponteiros. Imprima os
    valores das variáveis após as modificações.
 */

int main()
{
    char a[6] = "uva";
    char b[9] = "abacaxi";

    b[9] = "ata";

    if (a > b)
    {   
        bool cond = a < b;
         
        printf("%d\n", cond);
        printf("%s\n", a);
        printf("%s", b);
    }

    return 0;
}
