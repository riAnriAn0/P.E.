#include <stdio.h>

int main(){
    
    int matriz[3][3] = {{5,8,12},{10,9,20},{3,11,8}};
    int soma = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ( i + j == 2)
            {
                soma += matriz[i][j];
            }
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            printf (" %d ", matriz[i][j]);
            if (!(j == 2))
            {
                printf(",");
            }
        }  
        printf("]\n");
    }

    printf("\n\n[");
    printf (" %d ", soma);
    printf("]\n");

    return 0;
}