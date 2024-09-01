#include <stdio.h>

int main(){

    int matriz[5][5];
    int cont = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == cont){
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
        cont++;
    }


    for (int i = 0; i < 5; i++)
    {
        printf("[");
        for (int j = 0; j < 5; j++)
        {
            printf(" %d ", matriz[i][j]);
            if (!(j == 4))
            {
                printf(",");
            }
        }  
        printf("]\n");
    }
    
    return 0;
}