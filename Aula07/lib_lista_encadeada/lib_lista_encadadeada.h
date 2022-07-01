#ifndef LIB_LISTA_ENCADADEADA_H_INCLUDED
#define LIB_LISTA_ENCADADEADA_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>

typedef struct lista LISTA;

typedef struct listaN LISTAN;

LISTA *lst_cria(void);
void lst_insere(LISTA *lst, int valor);
void lst_imprime(LISTA *lst);
int lst_busca(LISTA *lst, int valor);
void lst_insere_ordenado(LISTA *lst, int valor);
int lst_vazia(LISTA *lst);
void lst_libera_lista(LISTA *lst);
void lst_exclui(LISTA *lst, int valor);
int lst_comprimento(LISTA *lst);
int lst_maiores(LISTA *lst, int valor);
int lst_ultimo(LISTA *lst);

#endif // LIB_LISTA_ENCADADEADA_H_INCLUDED
