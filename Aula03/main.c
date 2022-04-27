#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lib_ponto.h"


struct ponto
{
    float x;
    float y;
};

PONTO * pto_cria(float x, float y){
    PONTO * p = (PONTO*) malloc(sizeof(PONTO));
    if(p == NULL){
        printf("Memória Insuficiente!");
        exit(1);
    }
    p->x = x;
    p->y = y;

    return p;
}

void pto_libera(PONTO *p){
    free(p);
}

void pto_acesso(PONTO *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

void pto_atribui(PONTO *p, float x, float y){
    p->x = x;
    p->y = y;
}

float pto_distancia(PONTO *p1, PONTO *p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;

    float resultado = sqrt((dx*dx) + (dy*dy));

    return resultado;
}
