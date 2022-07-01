#ifndef LIB_ALUNO_H_INCLUDED
#define LIB_ALUNO_H_INCLUDED

typedef struct aluno ALUNO;

ALUNO * aluno_cria(int matricula);
void aluno_libera(ALUNO *al);
void aluno_atribui(ALUNO *al, char nome[50], char sobrenome[50], int idade);
int aluno_matricula(ALUNO *al);
int aluno_maioridade(ALUNO *al);
int aluno_duplicado(ALUNO *al1, ALUNO *al2);
void aluno_nomeCompleto(ALUNO *al, char *nomeCompleto);

#endif // LIB_ALUNO_H_INCLUDED
