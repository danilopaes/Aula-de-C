#include <stdio.h>
#include <stdlib.h>
#include "../lib_lista_encadeada/lib_lista_encadeada.h"

int main()
{
    LISTA *lst;

    lst = lst_cria();

    lst_insere(lstN, 10);
    lst_insere(lstN, 25);
    lst_insere(lstN, 99);

    lst_imprimi(lstN);

    return 0;
}
