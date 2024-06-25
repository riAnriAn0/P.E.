#include <stdio.h>

int main(){

    int numeros_1[10], numeros_2[10], numeros_3[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para o primeiro vetor: ");
        scanf("%d", &numeros_1[i] );
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para o segundo vetor: ");
        scanf("%d", &numeros_2[i] );
    }
    
    for (int j = 0; j < 10; j++)
    {
       for ( int i = 0; i < 10; i++)
       {
            if (numeros_1[j] == numeros_2[i])
            {
                for (int f = 0; f < 10; f++)
                {
                    if (numeros_1[j] == numeros_3[f])
                    {
                        f = 11;
                    } else {
                        numeros_3[j] = numeros_1[j];
                    }
                    
                }
                                
            }
            
       }
         
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d /", numeros_3[i]);
    }
    
    

    return 0;
}