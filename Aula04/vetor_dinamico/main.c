#include <stdio.h>
#include <stdlib.h>
#include "../lib_vetor_din/lib_vetor_din.h"

int main(){
    VetorDin *vd;

    vd = vd_cria(3);

    vd_insere(vd, 5.84);
    vd_insere(vd, 4.33);
    vd_insere(vd, 8);
    vd_insere(vd, 99.5);

    printf("4 elemento: %.2f\n", vd_acessa(vd, 3));
    printf("Tamanho: %d\n", vd_tamanho(vd));

    vd_libera(vd);

    return 0;
}
