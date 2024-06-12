#include <stdio.h>

int main()
{   
    int numero;
    int fibonacci = 0;
    int count =  1;

    printf("\n\nDigite um numero positivo:");
    scanf("%d", &numero);

    printf("Sequencia Fibonacci: \n");

    while ( fibonacci < numero )
    {
        printf(" %d  %d " , fibonacci, count);

        fibonacci += count;
        count += fibonacci;
    }
  return 0;
}
