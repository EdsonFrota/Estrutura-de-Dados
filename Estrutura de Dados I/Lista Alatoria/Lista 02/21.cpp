 /*Uma lista encadeada circular � uma lista encadeada cujo �ltimo elemento aponta para o
primeiro:

Vantagem: cada elemento � acess�vel a partir de qualquer outro. Numa lista circular,
n�o faz mais sentido se falar em primeiro ou �ltimo elemento. Por�m, devemos saber,
durante um percurso na lista, se j� demos uma volta completa, para evitarmos loops
infinitos. Para isso, assumimos a exist�ncia de um registro especial, chamado Cabe�a
de Lista, cujo campo de informa��o n�o pertence ao conjunto de elementos da lista
(poderia at� servir de sentinela numa busca):

Situa��o lista circular vazia:

Construa algoritmos para:
a. Contar o n�mero de elementos numa lista circular;
b. Inserir um elemento � esquerda da cabe�a da lista;
c. Eliminar o elemento de valor x;
d. Concatenar duas listas circulares;

e. Intercalar duas listas ordenadas;
f. Fazer uma c�pia da lista;/*/

#include<stdio.h>

struct ListaC
{
    int data;
    struct ListaC *prox;
};

typedef struct ListaC listac;

listac* cria(int data)
{
    listac* retorno = (listac*) malloc(sizeof(listac));
    retorno->data = data;
    retorno->prox = retorno;
    return retorno;
}

void escreve(listac* lista)
{

    if(lista == NULL)

    {

        printf("Lista vazia!");

        return;

    }

    listac* loop = lista;

    void insere(listac* lista, int data)
    {

        if(lista == NULL) return;

        listac* loop;

        for(loop = lista; loop->prox != lista; loop = loop->prox);

        loop = loop->prox = (listac*) malloc(sizeof(listac));

        loop->data = data;

        loop->prox = lista;

    }
