#include <stdio.h>
#include <stdlib.h>
#include "../lib_lista_encadeada/lib_lista_encadadeada.h"

int main(){
    printf("Inicio\n");
    LISTA *lstN;

    lstN = lst_cria();

    /*lst_insere(lstN, 10);
    lst_insere(lstN, 25);
    lst_insere(lstN, 99);*/

    printf("Lista vazia: %d\n", lst_vazia(lstN));

    lst_insere_ordenado(lstN, 20);
    lst_insere_ordenado(lstN, 15);
    lst_insere_ordenado(lstN, 30);
    lst_insere_ordenado(lstN, 53);
    lst_insere_ordenado(lstN, 45);

    printf("Lista vazia: %d\n", lst_vazia(lstN));

    lst_imprime(lstN);

    printf("Tamanho Lista: %d\n", lst_comprimento(lstN));

    //lst_exclui(lstN, 30);

    //printf("Tamanho Lista: %d\n", lst_comprimento(lstN));

    //printf("Tamanho Lista: %d\n", lst_comprimento(lstN));

    printf("Maiores que 23: %d\n", lst_maiores(lstN, 23));

    printf("Ultimo: %d\n", lst_ultimo(lstN));

    lst_exclui(lstN, 53);

    printf("Ultimo: %d\n", lst_ultimo(lstN));

    //lst_imprime(lstN);

    printf("Busca 20: %d\n", lst_busca(lstN,25));
    printf("Busca 2: %d\n", lst_busca(lstN,2));

    lst_libera_lista(lstN);

    return 0;
}
