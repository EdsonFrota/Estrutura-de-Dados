/*Escreva uma fun��o que receba uma lista encadeada e devolva o endere�o de uma c�lula
que esteja o mais pr�ximo poss�vel do meio da lista. Fa�a isso sem contar explicitamente o
n�mero de c�lulas da lista./*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int n;
	struct lista *prox;
}lista;

lista *meioDaLista(lista *a){
	lista *aux1=NULL;
	lista *aux2=NULL;
	aux1 = a;
	aux2 = a;

	while(aux1!=NULL){
		aux1 = aux1->prox;
		if(aux1!=NULL){
			aux1 = aux1->prox;
			aux2 = aux2->prox;
		}
	}
	return aux2;
}

