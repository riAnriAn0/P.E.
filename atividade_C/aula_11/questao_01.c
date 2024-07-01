#include <stdio.h>
#include <string.h>

int menor_num(int num1, int num2){
    if (num1 < num2 ){
        return num1;
    } else {
        return num2;
    }
}

int main(){

    int num_1, num_2;

    printf("\n\nDigite o primeiro numero inteiro: ");
    scanf("%d", &num_1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num_2);
    
    int resp = menor_num(num_1, num_2);

    printf("\n\nO menor numero e: %d\n\n", resp);

    return 0;
}