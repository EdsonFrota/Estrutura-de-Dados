/*7) Escreva uma fun��o que concatena duas listas encadeadas (isto �, "amarra" a
segunda no fim da primeira).*/

#include<stdio.h>

   void imprima (celula *ini)
{
   celula *p;
   for (p = ini->prox; p != NULL; p = p->prox)
      printf ("%d\n", p->conteudo);
}
