#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lib_lista_encadeada.h"

struct lista
{
    LISTAN *primeiro;
};

struct listaN
{
    int valor;
    LISTAN *proximo;
};

LISTA *lst_cria(void)
{
    /*criação da lista encadeada*/
    LISTA *l = (LISTA *)malloc(sizeof(LISTA));
    l->primeiro = NULL;
    return l;
}

void lst_insere(LISTA *lst, int valor)
{
    LISTAN *novo = (LISTAN *)malloc(sizeof(LISTAN));
    novo->valor = valor;
    novo->proximo = lst->primeiro;
    lst->primeiro = novo;
}

void lst_imprimi(LISTA *lst, int valor)
{
    for (LISTAN *p = lst->primeiro; p != NULL; p = p->proximo)
    {
        printf("Valor:%d\n", p->valor);
    }
}

int lst_busca(LISTA *lst, int valor)
{
    for (LISTAN *p = lst->primeiro; p != NULL; p = p->proximo)
    {
        if (p->valor == valor)
            return 1;
    }
    return 0;
}

void lst_insere_ordenado(LISTA *lst, int valor)
{
    /*Estruturas auxiliares*/
    LISTAN *anterior = NULL;
    LISTAN *atual = lst->primeiro;

    /*Percorre o vetor para encontrar a posição correta*/

    while (atual != NULL && atual->valor < valor)
    {
        anterior = atual;
        atual = atual->proximo;
    }

    /*Cria o novo nó da lista*/

    LISTAN *novo = (LISTAN *)malloc(sizeof(LISTAN));
    novo->valor = valor;

    /*Insere o nó na lista existente*/

    if (anterior == NULL)
    {
        /*se a lista vazia insere no inicio*/
        novo->proximo = lst->primeiro;
        lst->primeiro = novo;
    }
    else
    {
        /*Caso contrario insere no meio*/
        novo->proximo = anterior->proximo;
        anterior->proximo = novo;
    }
}
