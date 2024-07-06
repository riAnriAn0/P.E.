#include <stdio.h>

int main(){

    int numeros_1[10], numeros_2[10], numeros_3[20];
    int qnt = 0;

    printf("\n\n\n-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    for (int i = 0; i < 10; i++)
    {   
        int num;
        printf("Digite um valor para o primeiro vetor: ");
        scanf("%d", &num );

        int rep = 0;

        for (int j = 0; j < qnt; j++)
        {
            if( num == numeros_1[j] ){
                rep = 1;
                break;
            }
        }
        
        if( !rep ){
            numeros_1[qnt] = num;
            qnt += 1;
        }

    }
    qnt = 0;
    for (int i = 0; i < 10; i++)
    {   
        int num;
        printf("Digite um valor para o segundo vetor: ");
        scanf("%d", &num );

        int rep = 0;

        for (int j = 0; j < qnt; j++)
        {
            if( num == numeros_2[j] ){
                rep = 1;
                break;
            }
        }
        
        if( !rep ){
            numeros_2[qnt] = num;
            qnt += 1;
        }

    }   

    qnt = 0;
    for (int i = 0; i < 10; i++)
    {
        int num = numeros_1[i];

        for (int j = 0; j < 10; j++)
        {
            if (num == numeros_2[j])
            {
                numeros_3[qnt] = num;
                qnt += 1;
            }
        }
    }
        
    printf("\n\n-=-=--==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    for (int i = 0; i < qnt; i++)
    {
        printf("%d /", numeros_3[i]);
    }

    return 0;
}