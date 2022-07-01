#ifndef LIB_VETOR_DIN_H_INCLUDED
#define LIB_VETOR_DIN_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>

typedef struct vetorDinamico VetorDin;

VetorDin * vd_cria(char *texto);
static void vd_realoca(VetorDin *v, int operacao);
void vd_insere(VetorDin *v, char *texto);
int vd_tamanho(VetorDin *v);
char vd_acessa(VetorDin *v, int pos);
void vd_libera(VetorDin *v);


#endif // LIB_VETOR_DIN_H_INCLUDED
