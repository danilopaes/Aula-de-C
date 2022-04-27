#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lib_lista_encadeada.h"

struct lista {
    LISTAN * primeiro;
};

struct listaN {
    int valor;
    LISTAN *proximo;
};

LISTA *lst_cria(void){
    /*criação da lista encadeada*/
    LISTA *l = (LISTA*) malloc(sizeof(LISTA));
    l->primeiro = NULL;
    return l;
}

