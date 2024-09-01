#include <stdio.h>

int soma_primo(int numero){
    int primo = 2;
    int resultado = 0;
    int ct = 0;

    while (ct != numero){
        int cont = 0;

        for (int i = 1; i <= primo; i++){
            if (primo % i == 0) {
                cont++;
            }
        }

        if (cont == 2){
            resultado += primo;
            ct++;
        }

        primo++;
    }

    return resultado;
}


int main(){
    int num;

    printf("\n\nDigite um numero inteiro e positivo: ");
    scanf("%d", &num);

    int resp = soma_primo(num);

    printf("\nA soma dos %d primeiros numeros primos e: %d\n\n", num, resp);

    return 0;
}