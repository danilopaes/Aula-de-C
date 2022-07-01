#include "lib_vetor_din.h"

struct vetorDinamico{
    int n;
    //int tamanho;
    char *lista;
};

VetorDin * vd_cria(char *texto){
    VetorDin *v = (VetorDin *) malloc(sizeof(VetorDin));
    v->n = strlen(texto);
    //v->tamanho = sizeV;
    v->lista = (char *) malloc(strlen(texto)*sizeof(char));
    strcpy(v->lista, texto);
    return v;
}

static void vd_realoca(VetorDin *v, int operacao){
    if(operacao == 1)
        v->lista = (char *) realloc(v->lista, strlen(v->lista)*2*sizeof(char));
    else
        v->lista = (char *) realloc(v->lista, (strlen(v->lista)/2)*sizeof(char));
}

void vd_insere(VetorDin *v, char *texto){
    if(strlen(v->lista) < strlen(texto)){
        vd_realoca(v, 1);
        printf("Aumentou vetor\n");
    }else{
        if((strlen(v->lista)/2) >= strlen(texto)){
            vd_realoca(v, 2);
            printf("Reduziu vetor\n");
        }
    }

    strcpy(v->lista, texto);
    v->n = strlen(v->lista);
}

int vd_tamanho(VetorDin *v){
    return v->n;
}

char vd_acessa(VetorDin *v, int pos){
    if(pos >= 0 && pos < v->n)
        return v->lista[pos];
    else
        return '\0';
}

void vd_libera(VetorDin *v){
    free(v->lista);
    free(v);
}
