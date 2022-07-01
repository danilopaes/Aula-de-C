#ifndef LIB_LISTA_DUPLA_H_INCLUDED
#define LIB_LISTA_DUPLA_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct lista LISTAALUNOS;
typedef struct aluno ALUNO;
typedef struct info INFO;

LISTAALUNOS * lst2_cria(void);
void lst2_insere_inicio(LISTAALUNOS *lst2, float n1, float n2, char nome[50]);
void lst2_insere_ultimo(LISTAALUNOS *lst2, float n1, float n2, char nome[50]);
ALUNO * lst2_busca(LISTAALUNOS *lst2, char nome[50]);
char * nome_aluno(ALUNO *al);
void lst2_remove(LISTAALUNOS *lst2, char nome[50]);
void lst2_lista_alunos(LISTAALUNOS *lst2);
float lst2_media_aluno(LISTAALUNOS *lst2, char nome[50]);

#endif // LIB_LISTA_DUPLA_H_INCLUDED
