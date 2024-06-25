#include <stdio.h>

int main(){

    int matriz[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = i * j;
        }
        
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("[");
        for (int j = 0; j < 4; j++)
        {
            printf (" %d ", matriz[i][j]);
            if (!(j == 3))
            {
                printf(",");
            }
        }  
        printf("]\n");
    }

    return 0; 
}