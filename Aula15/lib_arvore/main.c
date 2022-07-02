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

