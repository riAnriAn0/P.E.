#include <stdio.h>
#include <math.h>

int main(){

    int dia , meses, ano;
    int anobissexto;

    printf("Digite um valor para DIA:");
    scanf("%d", &dia);
    printf("Digite um valor para MES:");
    scanf("%d", &meses);
    printf("Digite um valor para ANO:");
    scanf("%d", &ano);

    if ( ano % 4 == 0 ){

        if ( ano % 100 == 0){

            if (ano % 400 == 0){
                
                anobissexto = 1;

            }else {
                anobissexto = 0;
            }

        } else {
            anobissexto = 1;
        }

    } else {
        anobissexto = 0;
    }



    if( meses >= 1 && meses <= 12)
    {
    if (meses==1|| meses==3|| meses==5 || meses==7 || meses==8 || meses==10 || meses==12)
    {
        if (dia > 0 && dia <=31)
        {
            printf(" %d / %d / %d ", dia,meses,ano); 
        }
        else
        {
            printf("Valor de dia invalido");
        }       
    }
    else if (meses==4|| meses==6|| meses==9 || meses==11)
    {
        if (dia > 0 && dia <= 30)
        {
            printf(" %d / %d / %d ", dia,meses,ano); 
        }  
        else
        {
            printf("Valor de dia invalido");
        }      
    }
    else if (meses == 2)
    {
        if (anobissexto)
        {
            if (dia > 0 && dia <= 29)
            {
                printf(" %d / %d / %d ", dia,meses,ano); 
            }
            else
            {
                printf("Valor de dia invalido");
            }
        }
        else
        {
            if (dia > 0 && dia <= 28)
            {
                printf(" %d / %d / %d ", dia,meses,ano); 
            }
            else
            {
                printf("Valor de dia invalido");
            }
        }  
    }   
}
else
{
    printf("Valor de mes invalido");
}

    

    return 0;
}