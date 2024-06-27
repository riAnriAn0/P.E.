#include <stdio.h>

struct Produto
{
    int codigo;
    float preco;
    int qnt_estoque;
    int validade[3];
};


typedef struct Produto produto;

int main(){

    produto novo_produto;

    printf("\n\n=-=-=-=-=- Produto =-=-=-=-=-\n");
    printf("Digigte o Codigo: ");
    scanf("%d", &novo_produto.codigo);
    printf("Digite o Preco: ");
    scanf("%f", &novo_produto.preco);
    printf("Digigte a quantidade em estoque: ");
    scanf("%d", &novo_produto.qnt_estoque);
    printf("Digite a Data de validade\n");
    printf("    Dia: ");
    scanf("%d", &novo_produto.validade[0]);
    printf("    Mes: ");
    scanf("%d", &novo_produto.validade[1]);
    printf("    Ano: ");
    scanf("%d", &novo_produto.validade[2]);

    printf("\n\n=-=-=-=-=- Detalhe do Produto =-=-=-=-=-\n");
    printf("Codigo: %d\n", novo_produto.codigo);
    printf("Preco: %.2f\n", novo_produto.preco);
    printf("Quant. Estoque: %d\n", novo_produto.qnt_estoque);
    printf("Validade: %d/%d/%d \n\n\n", novo_produto.validade[0], novo_produto.validade[1], novo_produto.validade[2]);


    return 0;
}