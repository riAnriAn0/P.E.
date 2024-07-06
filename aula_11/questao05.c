#include <stdio.h>

void primo(int numero){
    
    int cont = 0 ;

    for(int i = 1; i < 10; i++){
        if(numero % i == 0 ){
            cont += 1;
        }
    }

    if( cont > 2){
        printf("\nO numero %d nao e primo.\n\n", numero);
    } else {
        printf("\nO numero %d e primo.\n\n", numero);
    }

}

int main(){
    int num;

    printf("\n\nDigite um numero inteiro e positivo: ");
    scanf("%d", &num);

    primo(num);

    return 0;
}