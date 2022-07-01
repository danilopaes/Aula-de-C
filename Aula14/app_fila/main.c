#include <stdio.h>
#include <stdlib.h>
#include "../lib_fila_lista/lib_lista_fila.h"

int main(){
    FILA *f = fila_cria();

    fila_insere(f, 4.33);
    fila_insere(f, 5.84);
    fila_insere(f, 104.22);

    fila_lista(f);

    printf("Removendo: %.2f\n", fila_remove(f));
    printf("Removendo: %.2f\n", fila_remove(f));

    printf("------\n");

    fila_lista(f);

    fila_insere(f, 88.88);
    fila_insere(f, 99.45);
    fila_insere(f, 6.20);
    fila_insere(f, 10.20);
    fila_insere(f, 7.33);
    fila_insere(f, 42.99);

    printf("------\n");

    fila_lista(f);
    return 0;
}
