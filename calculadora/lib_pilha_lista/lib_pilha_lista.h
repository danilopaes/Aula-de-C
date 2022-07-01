#ifndef LIB_PILHA_LISTA_H_INCLUDED
#define LIB_PILHA_LISTA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct pilha PILHA;
typedef struct no NO;

PILHA * pilha_cria();
void pilha_push(PILHA *p, float valor);
float pilha_pop(PILHA *p);
int pilha_vazia(PILHA *p);
void pilha_free(PILHA *p);
float pilha_soma(PILHA *p);
float pilha_multiplica(PILHA *p);

#endif // LIB_PILHA_LISTA_H_INCLUDED
