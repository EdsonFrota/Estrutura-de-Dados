/*(3) Escreva uma fun��o que insira um novo elemento em uma lista
encadeada sem cabe�a. (Ser� preciso tomar algumas decis�es de
projeto antes de come�ar a programar.)*/

#include<stdio.h>

    void insere (int x, celula *p)
    {
        celula *nova, *q = ini;
        nova = malloc (sizeof (celula));
        nova->conteudo = x;
        if (p == ini)
        {
            ini = nova;
            ini->prox = p;
        }
        else
        {
            while (q->prox != p)
                q = q->prox;
            nova->prox = q->prox;
            q->prox = nova;
        }
    }

