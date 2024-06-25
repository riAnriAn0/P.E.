#include <stdio.h>

int main(){

    int matriz[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digit um valor: ");
            scanf("%d", &matriz[i][j]);
        }  
    }


    printf("Matriz: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("[ ");
        for (int j = 0; j < 4; j++)
        {
            printf("%d ,", matriz[i][j]);
        }
        printf("]\n");
    }

    int maior10 = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if( matriz[i][j] > 10){
                maior10 ++;
            }
        }  
    }

    printf("Quantidade de valores maiores que 10: %d", maior10);
    
    return 0;
}