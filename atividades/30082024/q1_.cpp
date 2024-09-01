#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 1. Quais serão os valores de x, y e p ao final do código abaixo?

    int x, y, *p;
    y = 0;
    p = &y;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    printf("\nx = %d", x) ;  
    printf("\ny = %d", y) ;  
    printf("\np = %p", p) ;  

   // p endereço de memoria do y
   // x = 3
   // y = 4

    return 0;
}
