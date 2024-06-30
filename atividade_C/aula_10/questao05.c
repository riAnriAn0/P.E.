#include <string.h>
#include <stdio.h>

struct Paciente
{
    char nome[20];
    int idade;
    char num_card[10];
};

typedef struct Paciente paciente;

int main()
{   
    int cont = 0;
    paciente paciente[10];

    do
    {
        printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("Digite seu nome: ");
        fgets(paciente[cont].nome, sizeof(paciente[cont].nome), stdin);
        strtok(paciente[cont].nome, "\n"); 
        printf("Digite sua idade: ");
        scanf("%d", &paciente[cont].idade);
        getchar(); 
        printf("Digite o numero do seu cartao: ");
        fgets(paciente[cont].num_card, sizeof(paciente[cont].num_card), stdin);
        strtok(paciente[cont].num_card, "\n"); 

        cont += 1;
    } while (cont < 10);
    

    printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Pacientes com ate ou mais de 50 anos de idade:\n");
    for (int i = 0; i < 10; i++)
    {   
        if( paciente[i].idade >= 50 ){
            printf("\n- %s - %d - %s -", paciente[i].nome, paciente[i].idade, paciente[i].num_card);
        }
    }
    
    printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Pacientes com faixa de 29 - 49 anos de idade:\n");
    for (int i = 0; i < 10; i++)
    {    
        if( paciente[i].idade >= 29 && paciente[i].idade <= 49 ){
            printf("\n- %s - %d - %s -", paciente[i].nome, paciente[i].idade, paciente[i].num_card);
        }
    }

    printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("Pacientes com idade de 1 - 28 anos de idade:\n");
    for (int i = 0; i < 10; i++)
    {   
        if( paciente[i].idade >= 1 && paciente[i].idade <= 28 ){
            printf("\n- %s - %d - %s -", paciente[i].nome, paciente[i].idade, paciente[i].num_card);
        }
    }

    return 0;
}
