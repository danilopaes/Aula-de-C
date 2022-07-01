#include "lib_lista_encadadeada.h"

struct lista{
    LISTAN *primeiro;
};

struct listaN{
    int valor;
    LISTAN *proximo;
};

LISTA *lst_cria(void){
    /* Criação da lista encadeada */
    LISTA *lst = (LISTA*) malloc(sizeof(LISTA));
    lst->primeiro = NULL;
    return lst;
}

void lst_insere(LISTA *lst, int valor){
    LISTAN *novo = (LISTAN*) malloc(sizeof(LISTAN));
    novo->valor = valor;
    novo->proximo = lst->primeiro;
    lst->primeiro = novo;
}

void lst_imprime(LISTA *lst){
    printf("Lista Valores\n");
    for(LISTAN *p = lst->primeiro; p != NULL; p=p->proximo){
        printf("Valor: %d\n", p->valor);
    }
}

int lst_busca(LISTA *lst, int valor){
    for(LISTAN *p = lst->primeiro; p != NULL; p=p->proximo){
        if(p->valor == valor)
            return 1;
    }
    return 0;
}

void lst_insere_ordenado(LISTA *lst, int valor){
    /*Estruturas auxiliares*/
    LISTAN *anterior = NULL;
    LISTAN *atual = lst->primeiro;

    /*Percorre o vetor para encontrar a posição correta*/
    while(atual != NULL && atual->valor < valor){
        anterior = atual;
        atual = atual->proximo;
    }

    /*Criar o novo nó da lista*/
    LISTAN *novo = (LISTAN*) malloc(sizeof(LISTAN));
    novo->valor = valor;

    /*Inserir o nó na lista existente*/
    if(anterior == NULL){
        /* Se a lista vazia insere no inicio */
        novo->proximo = lst->primeiro;
        lst->primeiro = novo;
    }else{
        /*Caso contrario insere no meio */
        novo->proximo = anterior->proximo;
        anterior->proximo = novo;
    }
}

int lst_vazia(LISTA *lst){
    return lst->primeiro == NULL;
}

void lst_libera_lista(LISTA *lst){
    LISTAN *atual = lst->primeiro;
    while(atual != NULL){
        LISTAN *aux = atual->proximo;
        free(atual);
        atual = aux;
    }
    free(lst);
}

void lst_exclui(LISTA *lst, int valor){
    LISTAN *anterior = NULL;
    LISTAN *atual = lst->primeiro;

    if(lst_vazia(lst) != 1){
        while((atual != NULL) && (atual->valor != valor)){
            /* Percorre a lista em busca do valor */
            anterior = atual;
            atual = atual->proximo;
        }

        if(atual != NULL){//Verifica se o elemento foi encontrado
            /*Remover o elemento*/
            if(anterior == NULL)
                lst->primeiro = atual->proximo;
            else
                anterior->proximo = atual->proximo;

            free(atual);
        }
    }
}

int lst_comprimento(LISTA *lst){
    int contador = 0;
    LISTAN *atual = lst->primeiro;

    if(lst_vazia(lst))
        return contador;
    else{
       while(atual != NULL){
            contador++;
            atual = atual->proximo;
       }
       return contador;
    }
}

int lst_maiores(LISTA *lst, int valor){
    int contador = 0;
    LISTAN *atual = lst->primeiro;

    if(lst_vazia(lst))
        return contador;
    else{
        while(atual != NULL){
            if(atual->valor >= valor)
                contador++;

            atual = atual->proximo;
        }
        return contador;
    }
}

int lst_ultimo(LISTA *lst){
    LISTAN *atual = lst->primeiro;

    if(atual == NULL)
        return NULL;
    else{
        while(atual->proximo != NULL){
            atual = atual->proximo;
        }
        return atual->valor;
    }
}
