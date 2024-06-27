#include <stdio.h>

int main(){
    
    int numeros[20];
    int sem_repeticao[20];
    int cont_rept[20];

    for (int i = 0; i < 20 ; i++)
    {
        printf("Digite um valor: ");
        scanf("%d" , &numeros[i]);
    }
    
    int a;

    for (int p = 0; p < 20; p++)
    {
        a = numeros[p];

        for (int q = 0; q < 20; q++)
        {
            if (a == numeros[q])
            {
                for (int j = q+1; j < (20-q+1); j++)
                {
                    if (a == numeros[q])
                    {
                        
                    }
                    
                }
                
            }
            
        }
    }
    

    for (int i = 0; i <  20; i++)
    {
        printf("%d ,", sem_repeticao[i]);
    }
    return 0;
}