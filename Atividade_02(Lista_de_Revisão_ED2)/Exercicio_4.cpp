/*(4) Invente um jeito de remover uma c�lula de uma lista encadeada sem
cabe�a. (Ser� preciso tomar algumas decis�es de projeto antes de
come�ar a programar.)*/

#include<stdio.h>

void remover(pessoa *p){
   pessoa *remove;
   remove = p->prox;
   p->prox = remove->prox;
   remover(lixo);
}
