#include <stdio.h>
#include <stdlib.h>
#include "../lib_lista_encadeada/lib_lista_encadeada.h"

int main()
{
    LISTA *lst;

    lst = lst_cria();

    /*lst_insere(lstN, 10);
    lst_insere(lstN, 25);
    lst_insere(lstN, 99);*/

    printf("Lista Vazia: %d\n", lst_vazia(lst));

    lst_insere_ordenada(lstN, 20);
    lst_insere_ordenada(lstN, 15);
    lst_insere_ordenada(lstN, 30);

    printf("Lista Vazia: %d\n", lst_vazia(lst));

    lst_imprimi(lstN);

    printf("Busca: %d\n", lst_busca(lstN,25));
    printf("Busca: %d\n", lst_busca(lstN,2));

    lst_libera_lista(lstN);


    return 0;
}
