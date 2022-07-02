#include "lib_arvore.h"

struct no{
    int info;
    NO *sae;
    NO *sad;
};

struct arvore{
    NO *raiz;
};

NO * avr_cria_no(int valor, NO *esq, NO *dir){
    NO *n = (NO*) malloc(sizeof(NO));

    n->info = valor;
    n->sae = esq;
    n->sad = dir;

    return n;
}

ARVORE * avr_cria(NO *n){
    ARVORE *avr = (ARVORE*) malloc(sizeof(ARVORE));
    avr->raiz = n;
    return avr;
}

static void imprime(NO *n){
    printf("< ");
    if(n != NULL){
        printf("%d ", n->info);
        imprime(n->sae);
        imprime(n->sad);
    }
    printf(" >");
}

void avr_imprime(ARVORE *avr){
    imprime(avr->raiz);
}

static int pertence(NO *n, int valor){
    if(n == NULL)
        return 0;
    else
        return n->info == valor || pertence(n->sae, valor) || pertence(n->sad, valor);
}

int avr_pertence(ARVORE *avr, int valor){
    return pertence(avr->raiz, valor);
}

static NO * busca(NO *n, int valor){
    if(n == NULL)
        return NULL;
    else{
        if(n->info == valor)
            return n;
        else{
            NO *p = busca(n->sae, valor);
            if(p == NULL)
                p = busca(n->sad, valor);

            return p;
        }
    }
}

NO * avr_busca(ARVORE *avr, int valor){
    return busca(avr->raiz, valor);
}

static NO * insere(NO *n, int valor){
    if(n == NULL){
        NO *aux = (NO *) malloc(sizeof(NO));
        aux->sad = NULL;
        aux->sae = NULL;
        aux->info = valor;

        return aux;
    }else{
        if(n->info > valor)
            n->sae = insere(n->sae, valor);
        else
            n->sad = insere(n->sad, valor);
    }
}

void avr_insere(ARVORE *avr, int valor){
    if(avr->raiz == NULL)
        avr->raiz = insere(avr->raiz, valor);
    else{
        if(avr->raiz->info > valor)
            avr->raiz->sae = insere(avr->raiz->sae, valor);
        else
            avr->raiz->sad = insere(avr->raiz->sad, valor);
    }
}

int no_imprime_valor(NO *n){
    return n->info;
}
