#include "lib_lista_het.h"

struct retangulo{
    float l1;
    float l2;
};

struct triangulo{
    float b;
    float h;
};

struct circulo{
    float r;
};

struct noLista{
    TIPO tipoDado;
    void *info;
    NOLISTA *anterior;
    NOLISTA *proximo;
};

struct listaHet{
    NOLISTA *primeiro;
    NOLISTA *ultimo;
};

LISTAHET * lst2_cria(void){
    LISTAHET *lst2 = (LISTAHET *) malloc(sizeof(LISTAHET));
    lst2->primeiro = NULL;
    lst2->ultimo = NULL;
    return lst2;
}

void lst2_insere_inicio(LISTAHET *lst2, TIPO tipoDado, float a, float b){
    NOLISTA *n;

    switch(tipoDado){
        case RET:
            n = cria_retangulo(a, b);
        break;
        case TRI:
            n = cria_triangulo(a, b);
        break;
        case CIRC:
            n = cria_circulo(a);
        break;
    }

    //Atualizar os endereços da lista
    n->proximo = lst2->primeiro;
    n->anterior = NULL;

    if(lst2->primeiro != NULL)
        lst2->primeiro->anterior = n;
    else
        lst2->ultimo = n;

    lst2->primeiro = n;
}

NOLISTA * cria_retangulo(float lado1, float lado2){
    RETANGULO *r = (RETANGULO*) malloc(sizeof(RETANGULO));
    r->l1 = lado1;
    r->l2 = lado2;

    NOLISTA *n = (NOLISTA*) malloc(sizeof(NOLISTA));
    n->tipoDado = RET;
    n->info = r;
    n->anterior = NULL;
    n->proximo = NULL;

    return n;
}

NOLISTA *cria_triangulo(float b, float h){
    TRIANGULO *t = (TRIANGULO*) malloc(sizeof(TRIANGULO));
    t->b = b;
    t->h = h;

    NOLISTA *n = (NOLISTA*) malloc(sizeof(NOLISTA));
    n->tipoDado = TRI;
    n->info = t;
    n->anterior = NULL;
    n->proximo = NULL;

    return n;
}

NOLISTA * cria_circulo(float r){
    CIRCULO *c = (CIRCULO*) malloc(sizeof(CIRCULO));
    c->r = r;

    NOLISTA *n = (NOLISTA*) malloc(sizeof(NOLISTA));
    n->tipoDado = CIRC;
    n->info = c;
    n->anterior = NULL;
    n->proximo = NULL;

    return n;
}

#define PI 3.14159

static float ret_area(RETANGULO *r){
    return r->l1 * r->l2;
}

static float tri_area(TRIANGULO *t){
    return (t->b * t->h)/2;
}

static float circ_area(CIRCULO *c){
    return PI * c->r * c->r;
}

float area(LISTAHET *lst2){
    for(NOLISTA *p; p == NULL; p = p->proximo){
        switch(p->tipoDado){
            case RET:
                printf("Area ret: %.2f\n", ret_area(p->info));
            break;
            case TRI:
                printf("Area tri: %.2f\n", tri_area(p->info));
            break;
            case CIRC:
                printf("Area circ: %.2f\n", circ_area(p->info));
            break;
        }
    }
}
