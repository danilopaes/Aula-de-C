#ifndef LIB_LISTA_DUPLA_H_INCLUDED
#define LIB_LISTA_DUPLA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct lista LISTAALUNOS;
typedef struct aluno ALUNO;
typedef struct info INFO;

LISTAALUNOS * lst2_cria(void);
void lst2_insere(LISTAALUNOS *lst2, float n1, float n2, char nome[50]);


#endif // LIB_LISTA_DUPLA_H_INCLUDED
