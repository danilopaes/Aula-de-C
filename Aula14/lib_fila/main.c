#include "lib_fila.h"

struct fila{
    int n;
    int inicio;
    int dimensao;
    float *vetor;
};

FILA * fila_cria(){
    FILA *f = (FILA *) malloc(sizeof(FILA));
    f->dimensao = 5;
    f->n = 0;
    f->inicio = 0;
    f->vetor = (float*) malloc(sizeof(float)*f->dimensao);
    return f;
}

void fila_insere(FILA *f, float valor){
    int fim;
    if(f->n == f->dimensao){
        f->dimensao *= 2;
        f->vetor = (float *) realloc(f->vetor, f->dimensao * sizeof(float));
        if(f->inicio != 0){
            memmove(&f->vetor[f->dimensao-f->inicio], &f->vetor[f->inicio],
                    (f->n - f->inicio) * sizeof(float));
        }
    }
    fim = (f->inicio + f->n) % f->dimensao;
    printf("Inserindo em: %d\n", fim);
    f->vetor[fim] = valor;
    f->n++;
}

float fila_remove(FILA *f){
    float valor = f->vetor[f->inicio];
    f->inicio = (f->inicio+1) % f->dimensao;
    f->n--;
    return valor;
}

int fila_vazia(FILA *f){
    return (f->n == 0);
}
void fila_libera(FILA *f){
    free(f->vetor);
    free(f);
}

void fila_lista(FILA *f){
    for(int i = f->inicio; i != (f->inicio + f->n) % f->dimensao; i = ((i+1)% f->dimensao)){
        printf("%.2f\n", f->vetor[i]);
    }
}
