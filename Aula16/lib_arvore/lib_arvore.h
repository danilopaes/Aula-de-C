#ifndef LIB_ARVORE_H_INCLUDED
#define LIB_ARVORE_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

typedef struct no NO;
typedef struct arvore ARVORE;

NO * avr_cria_no(int valor, NO *esq, NO *dir);
ARVORE * avr_cria(NO *n);
static void imprime(NO *n);
void avr_imprime(ARVORE *avr);
static int pertence(NO *n, int valor);
int avr_pertence(ARVORE *avr, int valor);
static NO * busca(NO *n, int valor);
NO * avr_busca(ARVORE *avr, int valor);
static NO * insere(NO *n, int valor);
void avr_insere(ARVORE *avr, int valor);
int no_imprime_valor(NO *n);


#endif // LIB_ARVORE_H_INCLUDED
