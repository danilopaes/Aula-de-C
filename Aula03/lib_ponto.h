#ifndef LIB_PONTO_H_INCLUDED
#define LIB_PONTO_H_INCLUDED

typedef struct ponto PONTO;

PONTO * pto_cria(float x, float y);
void pto_libera(PONTO * p);
void pto_acessa(PONTO * p, float * x, float * y);
void pto_atribui(PONTO * p, float x, float y);
float pto_distancia(PONTO * p1, PONTO * p2);



#endif // LIB_PONTO_H_INCLUDED