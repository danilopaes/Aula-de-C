#include <stdio.h>
#include <stdlib.h>
#include "../lib_ponto.h"

int main()
{
    PONTO *p;
    PONTO *q;


    p = pto_cria(2.0,1.0);
    q = pto_cria(3.4,2.1);

    float *x1, *y1;
    float *x2, *y2;

    float d = pto_distancia(p,q);

    pto_acessa(p, x1, y1);
    pto_acessa(q, x2, y2);

    printf("O ponto 1 e: %.2f %.2f\n", x1, y1);
    printf("O ponto 1 e: %.2f %.2f\n", x2, y2);
    printf("A distancia entre os pontos e: %.2f", d);

    pto_libera(p);
    pto_libera(q);

    return 0;
}
