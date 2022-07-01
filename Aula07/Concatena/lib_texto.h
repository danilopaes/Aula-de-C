#ifndef LIB_TEXTO_H_INCLUDED
#define LIB_TEXTO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct txt{
    char nome[50];
    char sobrenome[50];
} TEXTO;

void txt_insere(TEXTO *txt, char *nome, char *sobrenome);
void txt_lista(TEXTO *txt);
void txt_nome_completo(TEXTO *txt, char * nome_completo);

#endif // LIB_TEXTO_H_INCLUDED
