#include <stdio.h>
#include <stdlib.h>
#include "lib_texto.h"

int main(){
    TEXTO *meu_texto;

    meu_texto = malloc(sizeof(TEXTO));
    char nome[50];
    char sobrenome[50];
    char *nome_completo = malloc(100*sizeof(char));

    printf("Informe o nome:");
    scanf(" %50[^\n]", nome);

    printf("Informe o sobrenome:");
    scanf(" %50[^\n]", sobrenome);

    txt_insere(meu_texto, nome, sobrenome);

    txt_lista(meu_texto);

    txt_nome_completo(meu_texto, nome_completo);

    printf("Nome completo: %s\n", nome_completo);

    return 0;
}
