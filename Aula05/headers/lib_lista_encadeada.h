#ifndef LIB_LISTA_ENCADEADA_H_INCLUDED
#define LIB_LISTA_ENCADEADA_H_INCLUDED

typedef struct lista LISTA;
typedef struct listaN LISTAN;

LISTA *lst_cria(void);
void lst_insere(LISTA *lst, int valor);
void lst_imprimi(LISTA *lst, int valor);
int lst_busca(LISTA *lst, int valor);
void lst_insere_ordenado(LISTA *lst, int valor);

#endif LIB_LISTA_ENCADEADA_H_INCLUDED