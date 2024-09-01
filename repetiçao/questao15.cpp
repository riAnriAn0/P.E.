// 15. Escreva um programa que gere um número aleatório entre 1 e 100 e peça ao usuário
// adivinhar o número. O programa deve dar dicas ao usuário se o seu palpite foi maior ou
// menor. O jogo deve terminar quando o usuário adivinhar o número corretamente. Utilize a
// estrutura while para controlar o loop do jogo.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){  

    int num;

    srand(time(NULL));

    printf("Tente adivinhar o numero entre 1 e 100\n");
    printf("Digite um numero: ");
    scanf("%d", &num);

    int num_sort = rand() % 100 + 1;

    while ( num != num_sort)
    {
        if (num < num_sort )
        {
            printf("\n-=--=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nDica : o numero sorteado e maior\n");
            printf("\n-=--=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        } else {
            printf("\n-=--=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nDica : o numero sorteado e menor\n");
            printf("\n-=--=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        }

        printf("\nTente novamente\n");
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    
    printf("\n-=--=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\nVoce acertou !!!!,\n o numero sorteado era: %d\n\n", num_sort);
    
    return 0;
}
