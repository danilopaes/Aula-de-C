#include <stdio.h>
#include <stdlib.h>
#include "../lib_pilha/lib_pilha.h"

int main(){
    PILHA *pilha;
    float valor;

    pilha = pilha_cria();

    printf("Informe valor 1:");
    scanf("%f", &valor);

    pilha_push(pilha, valor);

    printf("Informe valor 2:");
    scanf("%f", &valor);

    pilha_push(pilha, valor);

    printf("Informe valor 3:");
    scanf("%f", &valor);

    pilha_push(pilha, valor);

    printf("Valor 1: %.2f\n", pilha_pop(pilha));
    printf("Valor 2: %.2f\n", pilha_pop(pilha));
    printf("Valor 3: %.2f\n", pilha_pop(pilha));

    pilha_free(pilha);

    return 0;
}
