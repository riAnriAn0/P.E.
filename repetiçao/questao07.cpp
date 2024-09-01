// 7. Leia números inteiros do usuário até que ele digite um número negativo, então imprima a soma desses números usando um laço do-while.

#include <stdio.h>

int main()
{

  int num = 0;
  int soma = 0;

  do
  {
    soma += num;

    printf("Digite um qualquer numero inteiro:");
    scanf("%d", &num);

  } while (num >= 0);

  printf("A soma dos numeros digitados foi: %d", soma);

  return 0;
}

// #include <stdio.h>

//   int main()
//   {
//     int numero;
//     int soma = 0;

//     // Laço do-while
//     do
//     {
//       printf("Digite um número inteiro (digite um número negativo para parar): ");
//       scanf("%d", &numero);

//       if (numero >= 0)
//       {
//         soma += numero;
//       }

//     } while (numero >= 0);

//     printf("A soma dos números digitados é: %d\n", soma);

//     return 0;
//   }
