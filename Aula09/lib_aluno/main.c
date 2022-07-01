#include "lib_aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    int matricula;
    char nome[50];
    char sobrenome[50];
    int idade;
};

ALUNO * aluno_cria(int matricula){
    ALUNO * al = (ALUNO *) malloc(sizeof(ALUNO));

    if(al== NULL){
        printf("Memoria insuficiente\n");
        exit(1);
    }

    al->matricula = matricula;

    return al;
}

void aluno_libera(ALUNO *al){
    free(al);
}

void aluno_atribui(ALUNO *al, char nome[50], char sobrenome[50], int idade){
    strcpy(al->nome, nome);
    strcpy(al->sobrenome, sobrenome);
    al->idade = idade;
}

int aluno_matricula(ALUNO *al){
    return al->matricula;
}

int aluno_maioridade(ALUNO *al){
    if(al->idade < 18)
        return 0;
    else
        return 1;
}

int aluno_duplicado(ALUNO *al1, ALUNO *al2){
    if(al1->matricula == al2->matricula)
        return 1;
    else
        return 0;
}

void aluno_nomeCompleto(ALUNO *al, char *nomeCompleto){
    strcpy(nomeCompleto, "");
    strcpy(nomeCompleto, al->nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, al->sobrenome);
}
