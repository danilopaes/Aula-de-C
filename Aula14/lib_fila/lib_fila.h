#ifndef LIB_FILA_H_INCLUDED
#define LIB_FILA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct fila FILA;

FILA * fila_cria();
void fila_insere(FILA *f, float valor);
float fila_remove(FILA *f);
int fila_vazia(FILA *f);
void fila_libera(FILA *f);
void fila_lista(FILA *f);

#endif // LIB_FILA_H_INCLUDED
