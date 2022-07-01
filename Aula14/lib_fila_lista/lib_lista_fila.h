#ifndef LIB_LISTA_FILA_H_INCLUDED
#define LIB_LISTA_FILA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct fila FILA;
typedef struct no NO;

FILA * fila_cria();
void fila_insere(FILA *f, float valor);
float fila_remove(FILA *f);
int fila_vazia(FILA *f);
void fila_libera(FILA *f);
void fila_lista(FILA *f);

#endif // LIB_LISTA_FILA_H_INCLUDED
