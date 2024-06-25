#include <stdio.h>

int main(){
    
    int matriz[3][3] = {{5,8,12},{10,9,20},{3,11,8}};
    int l1[3], l2[3], l3[3];

    for (int i = 0; i < 3; i++)
    {
        l1[i] = matriz[0][i];
        l2[i] = matriz[1][i];
        l3[i] = matriz[2][i];
    }
    printf("\n\nNormal: \n");
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

    for (int i = 0; i < 3; i++)
    {
        matriz [i][0] = l1[i];
        matriz [i][1] = l2[i];
        matriz [i][2] = l3[i];
    }

    printf("\n\nInversa: \n");
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
    return 0;
}