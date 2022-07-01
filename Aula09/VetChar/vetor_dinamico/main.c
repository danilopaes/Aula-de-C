#include <stdio.h>
#include <stdlib.h>
#include "../lib_vetor_din/lib_vetor_din.h"

int main(){
    VetorDin *vd;

    vd = vd_cria("novo");

    vd_insere(vd, "fernando");
    //vd_insere(vd, 4.33);
    //vd_insere(vd, 8);
    //vd_insere(vd, 99.5);

    printf("4 elemento: %c\n", vd_acessa(vd, 3));
    printf("Tamanho: %d\n", vd_tamanho(vd));

    vd_insere(vd, "aa");

    printf("Tamanho: %d\n", vd_tamanho(vd));

    vd_libera(vd);

    return 0;
}
