#include "lib_lista_dupla.h"

struct no{
    float valor;
    NO *proximo;
    NO *anterior;
};

struct fila{
    NO *inicio;
    NO *fim;
};

FILA * fila_cria(){
    FILA *f = (FILA *) malloc(sizeof(FILA));
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void fila_insere_fim(FILA *f, float valor){
    NO *n = (NO *) malloc(sizeof(NO));
    n->valor = valor;
    n->proximo = NULL;
    n->anterior = f->fim;

    if(f->fim != NULL)
        f->fim->proximo = n;
    else
        f->inicio = n;

    f->fim = n;
}

void fila_insere_inicio(FILA *f, float valor){
    NO *n = (NO *) malloc(sizeof(NO));
    n->valor = valor;
    n->proximo = f->inicio;
    n->anterior = NULL;

    if(f->inicio != NULL)
        f->inicio->anterior = n;
    else
        f->inicio = n;

    f->inicio = n;
}

float fila_remove_inicio(FILA *f){
    NO *aux = f->inicio;
    float valor = aux->valor;

    f->inicio = aux->proximo;

    if(f->inicio == NULL)
        f->fim = NULL;
    else
        f->inicio->anterior = NULL;

    free(aux);
    return valor;
}

float fila_remove_fim(FILA *f){
    NO *aux = f->inicio;
    float valor = aux->valor;

    f->fim = aux->anterior;

    if(f->fim == NULL)
        f->inicio = NULL;
    else
        f->fim->proximo = NULL;

    free(aux);
    return valor;
}
