#ifndef LIB_LISTA_HET_H_INCLUDED
#define LIB_LISTA_HET_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct retangulo RETANGULO;
typedef struct triangulo TRIANGULO;
typedef struct circulo CIRCULO;
typedef enum tipo {RET, TRI, CIRC} TIPO;
typedef struct noLista NOLISTA;
typedef struct listaHet LISTAHET;
LISTAHET * lst2_cria(void);
void lst2_insere_inicio(LISTAHET *lst2, TIPO tipoDado, float a, float b);
NOLISTA * cria_retangulo(float l1, float l2);
NOLISTA *cria_triangulo(float b, float h);
NOLISTA * cria_circulo(float r);
static float ret_area(RETANGULO *r);
static float tri_area(TRIANGULO *t);
static float circ_area(CIRCULO *c);
float area(LISTAHET *lst2);



#endif // LIB_LISTA_HET_H_INCLUDED
