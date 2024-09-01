#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int vetor[5];
    int qnt_1 = 0;
    int qnt_0 = 0;


    for (int i = 0; i < 5; i++)
    {
        int num_sort = rand() % 2;
        vetor[i] = num_sort;

        if ( vetor[i] == 1 )
        {
            qnt_1 += 1;
        }else{
            qnt_0 += 1;
        } 
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ,", vetor[i]);
    }

    if ( qnt_1 > qnt_0 )
    {
        printf("\nO 1 aparece com mais frequencia.\n");
    }else {
        printf("\nO 0 aparece com mais frequencia.\n");
    }
    

    return 0;
}
