/*(8) Escreva uma fun��o que conta o n�mero de c�lulas de uma lista encadeada.*/

#include<stdio.h>
int contar(pessoa *p)
{
    pessoa *run;
    int n;
    while(run->prox != NULL)
    {
        run = run->prox;
        n++;
    }
    return n;
}
