#include <stdio.h>
#include<math.h>

int fatorial( int numero){

    int resp = 1;

    for (int i = 1; i < numero + 1; i++)
    {
        resp = resp * i;
    }
    
    return resp;

}

int main(){

    int num;

    printf("\n\nDigite um nimero inteiro nao-negativo: ");
    scanf("%d", &num);

    int result = fatorial(num);

    printf("\n\n %d fatorial e igual a %d\n\n", num, result);

    return 0;
}