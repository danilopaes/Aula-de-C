#include "lib_lista_fila.h"

struct no{
    float valor;
    NO *proximo;
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

void fila_insere(FILA *f, float valor){
    NO *n = (NO *) malloc(sizeof(NO));
    n->valor = valor;
    n->proximo = NULL;

    if(f->fim != NULL)
        f->fim->proximo = n;
    else
        f->inicio = n;

    f->fim = n;
}


float fila_remove(FILA *f){
    NO *aux = f->inicio;
    float valor = aux->valor;

    f->inicio = aux->proximo;

    if(f->inicio == NULL)
        f->fim = NULL;

    free(aux);
    return valor;
}

int fila_vazia(FILA *f){
    return (f->inicio == NULL);
}

void fila_libera(FILA *f){
    NO *aux = f->inicio;
    while(aux != NULL){
      NO *aux2 = aux->proximo;
      free(aux);
      aux = aux2;
    };
    free(f);
}

void fila_lista(FILA *f){
    for(NO *aux = f->inicio; aux != NULL; aux = aux->proximo){
        printf("%.2f\n", aux->valor);
    }
}
