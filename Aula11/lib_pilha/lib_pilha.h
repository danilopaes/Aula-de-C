#ifndef LIB_PILHA_H_INCLUDED
#define LIB_PILHA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct pilha PILHA;

PILHA * pilha_cria();
void pilha_push(PILHA *p, float valor);
float pilha_pop(PILHA *p);
int pilha_vazia(PILHA *p);
void pilha_free(PILHA *p);

#endif // LIB_PILHA_H_INCLUDED
