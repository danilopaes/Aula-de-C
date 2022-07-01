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

void lst2_insere_inicio(LISTAALUNOS *lst2, float n1, float n2, char nome[50]){
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

void lst2_insere_ultimo(LISTAALUNOS *lst2, float n1, float n2, char nome[50]){
    ALUNO *novo = (ALUNO *) malloc(sizeof(ALUNO));

    strcpy(novo->detalhes.nome, nome);
    novo->detalhes.n1 = n1;
    novo->detalhes.n2 = n2;

    novo->proximo = NULL;
    novo->anterior = lst2->ultimo;

    if(lst2->ultimo != NULL){
        //Lista não vazia
        lst2->ultimo->proximo = novo;
    }else{
        lst2->primeiro = novo;
    }

    lst2->ultimo = novo;
}

ALUNO * lst2_busca(LISTAALUNOS *lst2, char nome[50]){
    for(ALUNO *p = lst2->primeiro; p != NULL; p = p->proximo){
        //printf("%s\n",p->detalhes.nome);
        if(strcmp(p->detalhes.nome, nome) == 0){
            return p;
        }
    }
    return NULL;
}

char * nome_aluno(ALUNO *al){
    return al->detalhes.nome;
}

void lst2_remove(LISTAALUNOS *lst2, char nome[50]){
    ALUNO *al = lst2_busca(lst2, nome);

    if(al == NULL){
        printf("Elemento nao encontrado \n");
        return;
    }

    if(al == lst2->primeiro)
        lst2->primeiro = al->proximo;
    else
        al->anterior->proximo = al->proximo;

    if(al == lst2->ultimo)
        lst2->ultimo = al->anterior;
    else
        al->proximo->anterior = al->anterior;

    free(al);
}

void lst2_lista_alunos(LISTAALUNOS *lst2){
    printf("Lista Alunos\n");
    for(ALUNO *p = lst2->primeiro; p != NULL; p = p->proximo){
        printf("%s\n",p->detalhes.nome);
    }
}

float lst2_media_aluno(LISTAALUNOS *lst2, char nome[50]){
    ALUNO *al = lst2_busca(lst2, nome);
    float media = -1;

    if(al != NULL){
        media = (al->detalhes.n1 + al->detalhes.n2)/2;
    }

    return media;
}
