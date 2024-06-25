#include <stdio.h>

int main(){

    int matriz[4][4] = {{5,8,12,15},{10,9,20,7},{3,11,8,6},{14,2,16,4}};
    int maior = matriz[0][0];
    int maiorl = 0, maiorc = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ( matriz[i][j] > maior )
            {
                maior = matriz[i][j];
                maiorl = i + 1;
                maiorc = j +1;
            }
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

    printf("\n\nMaior valor: %d\n", maior);    
    printf("Localizacao: Linha %d, Coluna %d\n\n", maiorl, maiorc);

    return 0; 
}