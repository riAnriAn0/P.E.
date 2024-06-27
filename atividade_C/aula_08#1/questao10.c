#include <stdio.h>

int main(){
    int numeros[10];

    for (int i = 0; i < 10 ; i++)
    {
        printf("Digite um valor: ");
        scanf("%d" , &numeros[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > numeros[i + 1])
        {
            
        }
    }
    
    for (int i = 0; i < 10 ; i++)
    {
        printf("%d /", numeros[i]);
    }
    
    
    return 0;
}