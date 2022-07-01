#include <stdio.h>
#include <stdlib.h>
#include "../lib_lista_dupla/lib_lista_dupla.h"

int main(){
    LISTAALUNOS *lst2;
    float n1, n2;
    char nome[50];
    ALUNO *al;

    n1 = 8.5;
    n2 = 6.4;
    strcpy(nome, "Mateus");

    lst2 = lst2_cria();

    lst2_insere_inicio(lst2, n1, n2, nome);

    strcpy(nome, "Pedro");
    n1 = 7.5;
    n2 = 5;

    lst2_insere_ultimo(lst2, n1, n2, nome);

    strcpy(nome, "Alex");
    n1 = 9;
    n2 = 6.6;

    lst2_insere_ultimo(lst2, n1, n2, nome);

    strcpy(nome, "Joao");
    n1 = 10;
    n2 = 8;

    lst2_insere_inicio(lst2, n1, n2, nome);

    lst2_lista_alunos(lst2);

    printf("Media Pedro: %.2f\n", lst2_media_aluno(lst2, "Pedro"));
    printf("Media Alex: %.2f\n", lst2_media_aluno(lst2, "Alex"));

    al = lst2_busca(lst2, "Joao");

    if(al != NULL)
        printf("Aluno: %s\n", nome_aluno(al));
    else
        printf("Aluno não econtrado\n");

    al = lst2_busca(lst2, "Alex");

    lst2_remove(lst2, "Joao");

    lst2_lista_alunos(lst2);

    return 0;
}
