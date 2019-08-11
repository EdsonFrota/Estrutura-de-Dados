/*(10) Escreva uma fun��o que inverte a ordem das c�lulas de uma lista encadeada
(a primeira c�lula passa a ser a �ltima, a segunda passa a ser a pen�ltima etc.).
Fa�a isso sem usar espa�o auxiliar; apenas altere os ponteiros.*/

#include<stdio.h>
void inverte(pessoa *p)
{
    pessoa *aux1, *aux2;
    aux1 = p;
    aux2 = p->prox;
    while(aux2->prox != NULL)
    {
        aux1->prox = aux1;
        aux1 = aux2;
        aux2 = aux2->prox;
    }
    p = aux2;
}
