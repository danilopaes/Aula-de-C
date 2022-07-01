#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../lib_pilha_lista/lib_pilha_lista.h"

int main(){
    char aux[7];

    PILHA *p = pilha_cria();

    while(strcmp(aux,"2022")){
        printf("Informe um numero:");
        scanf(" %6[^\n]", &aux);

        switch(aux[0]){
            case '+':
                printf("Soma: %.2f\n", pilha_soma(p));
            break;
            case '-':
                printf("subtracao\n");
            break;
            case '*':
                printf("Multiplicacao: %.2f\n", pilha_multiplica(p));
            break;
            case '/':
                printf("divisao\n");
            break;
            default:
                pilha_push(p, atof(aux));
            break;
        }

        printf("%s\n", aux);
    }

    return 0;
}
