#include <stdio.h>

int main(){
    
int vetor[20];
int qnt = 0;

for( int i = 0; i < 20; i++){

    int value = 0;
    printf("\nDigite um valor: ");
    scanf("%d", &value);

    int achou = 0;

    for(int j = 0; j < qnt; j++){
        if(value == vetor[j]){
            achou = 1;
            break;
        }
    }

    if(achou == 0){
        vetor[qnt] = value;
        qnt = qnt + 1;
    }
}

    printf("\nVetor");

    for(int i = 0; i < qnt; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}