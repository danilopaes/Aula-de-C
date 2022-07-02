#include <stdio.h>
#include <stdlib.h>
#include "../lib_arvore/lib_arvore.h"

int main(){
    ARVORE *avr = avr_cria(avr_cria_no(1,
                                       avr_cria_no(2,
                                                   avr_cria_no(4,NULL,NULL),
                                                   avr_cria_no(5,NULL, NULL)),
                                       avr_cria_no(3,
                                                   avr_cria_no(6, NULL, NULL),
                                                   avr_cria_no(7, NULL, NULL))));

    avr_imprime(avr);

    printf("\n%d", avr_pertence(avr, 10));
    printf("\n%d", avr_pertence(avr, 6));
    return 0;
}

