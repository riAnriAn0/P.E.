#include <stdio.h>

int main() {
  float n1, n2, n3;
  char nome[20];

  for (int i = 0; i < 10; i++)
  {
      printf("Digite o nome do aluno: ");
      scanf("%s", nome);

      printf("Digite as notas dos alunos separadas por espaco (n1 n2 n3): ");
      scanf("%f %f %f", &n1, &n2, &n3);

      float media = (n1 + n2 + n3) / 3;

      if (media >= 7) {
        printf("%s aprovado\n", nome);
      } else {
        if (media < 4) {
          printf("%s reprovado\n", nome);
        } else {
          printf("%s em prova final\n", nome);
        }
      }

  }
  
  return 0;
}
 