// 6. Imprima a tabuada de 5 usando um laço for.

#include <stdio.h>

int main(int argc, char const *argv[])
{

    for (int i = 1; i <= 10; i++)
    {
        int result = 5* i ;

        printf(" 5 x %d = %d\n",i ,result );
    }
    
    return 0;
}
