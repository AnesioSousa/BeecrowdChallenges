#include <stdio.h>

int main()
{

    int produtos;
    int pedidos = 2; // constante para o n�mero de produtos e de pedidos
    int i, j;
    int PRODUTO_MAIS_VENDIDO; // Produto mais vendido
    int indice;
    float FATURAMENTO_MAIS_VENDIDO;
    float PEDIDO_MAIOR_VALOR;

    do
    {
        printf("Digite a quantidade de produtos: ");
        scanf("%d", &produtos);

        if (produtos < 1 || produtos > 10)
        {
            printf("O numero inserido nao eh permitido!\n");
        }

    } while (produtos < 1 || produtos > 10);

    char NOMES_PRODUTOS[produtos][100];
    float PRECOS_PRODUTOS[produtos];
    float TAXACOMISSAO[produtos];          // MATRIZ DE TAXA DE COMISSAO EM PORCENTAGEM
    int qtd_produtos_por_compra[produtos]; // vendas esta atribuida a pedidos

    printf("\n______Magazine Alfredo Eletronicos______\n");

    for (i = 0; i < produtos; i++)
    {
        printf("\nInforme o nome do %d produto: ", i + 1);
        fflush(stdin);
        gets(NOMES_PRODUTOS[i]);
        printf("\n");

        do
        {
            printf("Digite o preco do produto %s: R$", NOMES_PRODUTOS[i]); // usando o nome do produto lido anteriormente
            scanf("%f", &PRECOS_PRODUTOS[i]);
        } while (PRECOS_PRODUTOS[i] < 0);

        do
        {
            printf("Digite a taxa de comissao (em porcentagem) para o produto %s: ", NOMES_PRODUTOS[i]);
            scanf("%f", &TAXACOMISSAO[i]);
        } while (TAXACOMISSAO[i] < 0);
    }

    printf("\nEfetuando as pedidos:\n");

    int valores_totais_dos_pedidos[5], soma = 0, indice_maior_compra;
    float maior_compra;

    for (i = 0; i < pedidos; i++)
    { // La�o de repeti��o  o indici (i) , testa a condi��o (< pedidos) ,e incrementa (i++)
        printf("**********Compra %d**********:\n", i + 1);
        soma = 0;
        for (j = 0; j < produtos; j++)
        {

            printf("Digite a quantidade de itens do produto %d: ", j + 1);
            // Esse código já supõe que o valor que o usuário inseriu é válido!
            scanf("%d", &qtd_produtos_por_compra[j]);
            soma += qtd_produtos_por_compra[j] * PRECOS_PRODUTOS[j];
        }
        valores_totais_dos_pedidos[i] = soma;
    }

    maior_compra = valores_totais_dos_pedidos[0];
    indice_maior_compra = 0;

    for (i = 1; i < pedidos; i++)
    {
        if (valores_totais_dos_pedidos[i] > maior_compra)
        {
            maior_compra = valores_totais_dos_pedidos[i];
            indice_maior_compra = i;
        }
    }

    // PRODUTO MAIS VENDIDO E FATURAMENTO DO MAIS VENDIDO
    PRODUTO_MAIS_VENDIDO = qtd_produtos_por_compra[0];

    for (i = 1; i < produtos; i++)
    {

        if (PRODUTO_MAIS_VENDIDO < qtd_produtos_por_compra[i])
        {
            PRODUTO_MAIS_VENDIDO = qtd_produtos_por_compra[i];
            indice = i;
        }
    }

    FATURAMENTO_MAIS_VENDIDO = PRODUTO_MAIS_VENDIDO * PRECOS_PRODUTOS[indice];
    printf("\nO produto mais vendido eh %s com %d e o faturamento eh %.2f: ", NOMES_PRODUTOS[indice], PRODUTO_MAIS_VENDIDO, FATURAMENTO_MAIS_VENDIDO);

    printf("\nA compra %d foi a maior compra e possui o valor de R$ %.2f!\n", indice_maior_compra + 1, maior_compra);

    return 0;
}
