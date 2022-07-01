#include "lib_pilha_lista.h"

struct no{
    float info;
    NO *proximo;
};

struct pilha{
    NO *primeiro;
};

PILHA * pilha_cria(){
    PILHA *p  = (PILHA *) malloc(sizeof(PILHA));
    p->primeiro = NULL;
    return p;
}

void pilha_push(PILHA *p, float valor){
    NO *n = (NO*) malloc(sizeof(NO));
    n->info = valor;
    n->proximo = p->primeiro;
    p->primeiro = n;
}

float pilha_pop(PILHA *p){
    NO *aux = p->primeiro;
    float numero = aux->info;

    p->primeiro = aux->proximo;
    free(aux);

    return numero;
}

int pilha_vazia(PILHA *p){
    //return (p->primeiro == NULL)
    if(p->primeiro == NULL)
        return 1;
    else
        return 0;
}

void pilha_free(PILHA *p){
    free(p->primeiro);
    free(p);
}

