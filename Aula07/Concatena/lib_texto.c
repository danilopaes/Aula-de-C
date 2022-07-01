#include "lib_texto.h"

void txt_insere(TEXTO *txt, char *nome, char *sobrenome){
    strcpy(txt->nome, nome);
    strcpy(txt->sobrenome, sobrenome);
}

void txt_lista(TEXTO *txt){
    printf("Nome: %s\n", txt->nome);
    printf("Sobrenome: %s\n", txt->sobrenome);
}

void txt_nome_completo(TEXTO *txt, char * nome_completo){
    strcpy(nome_completo, "");
    strcpy(nome_completo, txt->nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, txt->sobrenome);
}
