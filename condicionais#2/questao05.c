#include <stdio.h>
#include <math.h>

int main(){

    int hora, minutos;

    printf("Digite um valor que para as horas: ");
    scanf("%d", &hora);

    printf("Digite um valor para os minutos: ");
    scanf("%d", &minutos);

    if ( hora >= 0 && hora <= 23)
    {
        if ( minutos >= 0 && minutos <= 59)
        {
            printf("  %d:%d ", hora,minutos);
        }
        else
        {
            printf("Valor de minutos invalido");
        }
        
    }
    else
    {
        printf("Valor de hora invalido");
    }
    
    return 0;
}