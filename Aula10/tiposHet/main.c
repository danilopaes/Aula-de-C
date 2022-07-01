#include <stdio.h>
#include <stdlib.h>
#include "../lib_lista_het/lib_lista_het.h"

int main(){
    LISTAHET *lst2;
    float n1, n2;

    n1 = 8.5;
    n2 = 6.4;

    lst2 = lst2_cria();

    lst2_insere_inicio(lst2, RET,  n1, n2);
    lst2_insere_inicio(lst2, TRI,  5, 7);
    lst2_insere_inicio(lst2, CIRC,  8.5, 0);

    area(lst2);
    return 0;
}
