#include "lib_vetor_din.h"

struct vetorDinamico{
    int n;
    int tamanho;
    float *lista;
};

VetorDin * vd_cria(int sizeV){
    VetorDin *v = (VetorDin *) malloc(sizeof(VetorDin));
    v->n = 0;
    v->tamanho = sizeV;
    v->lista = (float *) malloc(v->tamanho*sizeof(float));
    return v;
}

static void vd_realoca(VetorDin *v){
    v->tamanho += 5;
    v->lista = (float *) realloc(v->lista, v->tamanho*sizeof(float));
}

void vd_insere(VetorDin *v, float x){
    if(v->tamanho == v->n)
        vd_realoca(v);

    v->lista[v->n] = x;
    v->n++;
}

int vd_tamanho(VetorDin *v){
    return v->n;
}

float vd_acessa(VetorDin *v, int pos){
    if(pos >= 0 && pos < v->n)
        return v->lista[pos];
    else
        return -1;
}

void vd_libera(VetorDin *v){
    free(v->lista);
    free(v);
}
