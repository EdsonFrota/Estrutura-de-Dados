/*(6) Escreva uma fun��o que fa�a uma c�pia de uma lista dada como par�metro e
retorne a nova lista.*/

#include<stdio.h>

pessoa copiar(pessoa *lista1, pessoa *lista2)
{
    pessoa *p,*q;
    q = lista2;
    for(p = lista1; p->prox != NULL; p = p->prox)
    {
        q->num = p->num;
        q = q->prox;
    }
}
