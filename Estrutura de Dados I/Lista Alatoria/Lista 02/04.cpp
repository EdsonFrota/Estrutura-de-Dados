/* Considerando listas de valores inteiros, implemente uma fun��o que receba como
par�metro uma lista encadeada e um valor inteiro n, e divida a lista em duas, de tal forma
que a segunda lista comece no primeiro n� logo ap�s a primeira ocorr�ncia de n na lista
original. A figura a seguir ilustra essa separa��o:

Essa fun��o deve obedecer ao prot�tipo:

Lista* separa (Lista* l, int n);

A fun��o deve retornar um ponteiro para a segunda subdivis�o da lista original, enquanto l
deve continuar apontando para o primeiro elemento da primeira subdivis�o da lista.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

Lista *separa (Lista *l, int n)
{
    Lista *p; /* vari�vel auxiliar para percorrer a lista */
    Lista *q; /* vari�vel auxiliar para nova lista */
    for (p = l; p != NULL ; p = p->prox)
        if (p->info == n)
        {
            q = p->prox;
            p->prox = NULL;
            return q;
        }
    return NULL;
}
