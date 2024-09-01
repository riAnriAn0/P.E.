#include <stdio.h>


int par_impar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("\n\nDigite um numero: ");
    scanf("%d", &num);

    int result = par_impar(num);

    if( result == 1){
        printf("%d e par.\n\n", num);
    } else{
        printf("%d e impar\n\n", num);
    }

    return 0;
}
