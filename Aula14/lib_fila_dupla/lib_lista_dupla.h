#ifndef LIB_LISTA_DUPLA_H_INCLUDED
#define LIB_LISTA_DUPLA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct fila FILA;
typedef struct no NO;

FILA * fila_cria();
void fila_insere_inicio(FILA *f, float valor);
void fila_insere_fim(FILA *f, float valor);
float fila_remove_inicio(FILA *f);
float fila_remove_fim(FILA *f);
int fila_vazia(FILA *f);
void fila_libera(FILA *f);
void fila_lista(FILA *f);

#endif // LIB_LISTA_DUPLA_H_INCLUDED
