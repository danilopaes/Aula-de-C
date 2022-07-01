#include "lib_pilha.h"

struct pilha{
    int capacidade;
    int tamanho;
    float *info;
};

PILHA * pilha_cria(){
    PILHA *p = (PILHA*) malloc(sizeof(PILHA));
    p->capacidade = 10;
    p->tamanho = 0;
    p->info = malloc(p->capacidade*sizeof(float));
    return p;
}
void pilha_push(PILHA *p, float valor){
    if(p->tamanho == p->capacidade){
        p->capacidade+=5;
        p->info = (float *) realloc(p->info, p->capacidade*sizeof(float));
    }

    p->info[p->tamanho] = valor;

    p->tamanho++;
}

float pilha_pop(PILHA *p){
    float valor;

    if(pilha_vazia(p) == 1)
        return -1;

    p->tamanho--;

    valor = p->info[p->tamanho];

    return valor;
}

int pilha_vazia(PILHA *p){
    return (p->tamanho == 0);

}

void pilha_free(PILHA *p){
    free(p->info);
    free(p);
}
