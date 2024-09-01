#include <stdio.h>

// criando struct base
struct Aluno
{
    int idade;
    int matricula;
    float nota;
};

typedef struct Aluno Aluno;

int main(){

    Aluno aluno;

    printf("\n\n=-=-=-=- Inserindo Dados do Aluno =-=-=-=-\n");
    printf("Digite a idade: ");
    scanf("%d", &aluno.idade );
    printf("Digite seu numero de matricula : ");
    scanf("%d", &aluno.matricula);
    printf("Digite sua nota: ");
    scanf("%f", &aluno.nota);
    printf("\n-=-=-==-=-==-=-==-=-=-=-=-====-=-=-=-=-=-=-=-=\n\n");

    printf("=-=-=-= Dados do Aluno =-=-=-=-\n");
    printf("Idade: %d\n", aluno.idade);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nota: %.2f\n\n", aluno.nota);
    return 0;
}