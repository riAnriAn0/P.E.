#include <stdio.h>
#include <math.h>

int main(){

    int idade;
    float nota, dinherio;

    if ( idade > 15 && nota > 6)
    {
        /* code */
    }

    if (idade > 17 && nota > 6 && dinherio >= 150)
    {
        /* code */
    }

    if ( idade > 15 || dinherio >= 150)
    {
        /* code */
    }

    if (dinherio > 150 && (idade > 17 || nota >7 ))
    {
        /* code */
    }
    
    return 0;
}