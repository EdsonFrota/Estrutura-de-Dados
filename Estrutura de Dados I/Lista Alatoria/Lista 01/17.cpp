/*Fa�a um programa que gerencie o estoque de um mercado e:
� Crie e leia um vetor de 5 produtos, com os dados: c�digo (inteiro), nome (m�ximo
15 letras), pre�o e quantidade.

� Leia um pedido, composto por um c�digo de produto e a quantidade. Localize este
c�digo no vetor e, se houver quantidade suficiente para atender ao pedido
integralmente, atualize o estoque e informe o usu�rio. Repita este processo at� ler
um c�digo igual a zero.
Se por algum motivo n�o for poss�vel atender ao pedido, mostre uma mensagem
informando qual erro ocorreu.*/

#include <stdio.h>
#include <string.h>
#define N 50
int main()
{
    struct produto
    {
        int codigo;
        char nome[15];
        float preco;
        int qtde;
    } estoque[N], aux;
    int i, pedcod, pedqtde;
    char trocou;

    for (i=0; i<N; i++)
    {
        printf("%d� produto\n", i+1);
        printf("\tC�digo: ");
        scanf("%d", &estoque[i].codigo);
        printf("\tNome: ");
        scanf("%[^\n]s", estoque[i].nome);
        printf("\tPre�o: ");
        scanf(" %f", &estoque[i].preco);
        printf("%d", &estoque[i].qtde);
    }

    printf("\nPedido (c�digo e quantidade): ");
    scanf("%d %d", &pedcod, &pedqtde);
    i = 0;
    while (i < N && estoque[i].codigo != pedcod)
        i++;
    if (i < N)
        if (estoque.qtde[i] >= pedqtde)
            estoque.qtde[i] -= pedqtde;
        else
            printf("Estoque insuficiente\n");
    else
        printf("Produto %d n�o localizado\n", pedcod);

    do
    {
        trocou = 'N';
        for (i=0; i<N-1; i++)
        {
            if (estoque[i].qtde > estoque[i+1].qtde)
            {
                aux.codigo = estoque[i].codigo;
                estoque[i].codigo = estoque[i+1].codigo;
                estoque[i+1].codigo = aux.codigo;
                strcpy(aux.nome, estoque[i].nome);
                strcpy(estoque[i].nome, estoque[i].nome);
                strcpy(estoque[i+1].nome, aux.nome);
                aux.preco = estoque[i].preco;
                estoque[i].preco = estoque[i+1].preco;
                estoque[i+1].preco = aux.preco;
                aux.qtde = estoque[i].qtde;
                estoque[i].qtde = estoque[i+1].qtde;
                estoque[i+1].qtde = aux.qtde;
                trocou = 'S';
            }
        }
    }
    while (trocou == 'S');

    printf("Estoque\n");
    for (i=0; i<N; i++)
        printf("%d\t%s\t%.2f\t%d\n", estoque[i].codigo, estoque[i].nome, estoque[i].preco, estoque[i].qtde);
    return 0;
}
