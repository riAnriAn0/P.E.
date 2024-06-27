#include <stdio.h>

struct Produtos
{
    float preco_unitario;
    int qnt_vendidos;
    int qnt_disponivel;
};

typedef struct Produtos produtos;

int main(){

    produtos p_prossecados;
    produtos p_natura;

    printf("\n\n-=-=-=-==-=-=-= Controle de Estoque =-=-=-=-=-=-=-=-=\n\n");
    printf("=-==----=-=- Produtos Ultraprocessados =-=-=-=-=-=\n");
    printf("Preco unitario: ");
    scanf("%f", &p_prossecados.preco_unitario);
    printf("Quant. vendida: ");
    scanf("%d", &p_prossecados.qnt_vendidos);
    printf("Quant. Disponivel: ");
    scanf("%d", &p_prossecados.qnt_disponivel);
    printf("\n\n");


    printf("=-=--=-=- Produtos com Alimentos In Natura =-=-=-=\n");
    printf("Preco unitario: ");
    scanf("%f", &p_natura.preco_unitario);
    printf("Quant. vendida: ");
    scanf("%d", &p_natura.qnt_vendidos);
    printf("Quant. Disponivel: ");
    scanf("%d", &p_natura.qnt_disponivel);
    printf("\n\n");

    int total_produtos, total_vendido; 
    float valor_vendido, valor_n_vendido, valor_esperado;

    total_produtos = p_prossecados.qnt_disponivel + p_natura.qnt_disponivel + p_prossecados.qnt_vendidos + p_natura.qnt_vendidos;

    total_vendido = p_prossecados.qnt_vendidos + p_natura.qnt_vendidos;

    valor_vendido = (p_prossecados.qnt_vendidos * p_prossecados.preco_unitario )+( p_natura.qnt_vendidos * p_natura.preco_unitario);

    valor_n_vendido = (p_prossecados.qnt_disponivel * p_prossecados.preco_unitario )+( p_natura.qnt_disponivel * p_natura.preco_unitario);

    valor_esperado = valor_vendido + valor_n_vendido;


    printf("=-==-=-=-=-=-=-=-=-= Relatório -=-=-=-=-=-==-==-=-=\n\n");
    printf("Quantidade total de produtos: %d\n", total_produtos);
    printf("Quantidade total de produtos vendidos: %d\n", total_vendido);
    printf("Valor total recebido com a venda: %.2f \n", valor_vendido);
    printf("Valor total de produtos não vendidos: %.2f\n", valor_n_vendido);
    printf("Valor total que esperava receber: %.2f\n\n\n", valor_esperado);

    }