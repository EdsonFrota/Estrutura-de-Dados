/*(1) Escreva uma vers�o da fun��o busca para listas sem cabe�a.*/

#include<stdio.h>

    busca(int x, celula *inicio)
    {
        celula*p;
        p = inicio;
        while(p != NULL && p->conteudo !x)
        {
            p = p->prox;
            return(p);
        }
    }


