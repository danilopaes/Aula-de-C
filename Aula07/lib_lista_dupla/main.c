#include "lib_lista_dupla.h"

struct info{
    char nome[50];
    float n1;
    float n2;
};

struct lista{
    ALUNO *primeiro;
    ALUNO *ultimo;
};

struct aluno{
    INFO detalhes;
    ALUNO *anterior;
    ALUNO *proximo;
};

LISTAALUNOS * lst2_cria(void){
    LISTAALUNOS *lst = (LISTAALUNOS *) malloc(sizeof(LISTAALUNOS));
    lst->primeiro = NULL;
    lst->ultimo = NULL;
    return lst;
}

void lst2_insere(LISTAALUNOS *lst2, float n1, float n2, char nome[50]){
    //Criação do elemento
    ALUNO *novo = malloc(sizeof(ALUNO));

    //Atribuição de dados
    novo->detalhes.n1 = n1;
    novo->detalhes.n2 = n2;
    strcpy(novo->detalhes.nome, nome);

    //Atualizar os endereços da lista
    novo->proximo = lst2->primeiro;
    novo->anterior = NULL;

    if(lst2->primeiro != NULL)
        lst2->primeiro->anterior = novo;
    else
        lst2->ultimo = novo;

    lst2->primeiro = novo;
}
