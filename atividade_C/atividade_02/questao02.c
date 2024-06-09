#include <stdio.h>

int main(){

    float x , y;

    printf(" DIGITE UM VALOR:");
    scanf("%f", &x);

    printf(" DIGITE OUTRO VALOR:");
    scanf("%f", &y);


    if (x > y)
    {
        printf("\n  %.2f E O MAIOR NUMERO", x);
    }
    else if (y > x)
    {
        printf("\n  %.2f E O MAIOR NUMERO", y);
    }
    else
    {
        printf("\n  OS VALORES SAO IGUAIS");
    }
    
    return 0;
}