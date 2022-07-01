#include <stdio.h>
#include <stdlib.h>
#include "../lib_lista_dupla/lib_lista_dupla.h"

int main(){
    LISTAALUNOS *lst2;
    float n1, n2;
    char nome[50];

    n1 = 8.5;
    n2 = 6.4;
    strcpy(nome, "Mateus");

    lst2 = lst2_cria();

    lst2_insere(lst2, n1, n2, nome);

    printf("Hello world!\n");
    return 0;
}
