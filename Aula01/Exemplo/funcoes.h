#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct{
    char cliente[50];
    char placa[10];
    int status;
}veiculo;

typedef struct{
    int idVeiculo;
    int horaEntrada;
    int horaSaida;
    int status;
}vaga;

void inicializa_listas(veiculo *v, vaga *vg, int sVei, int sVaga);
int veiculo_livre(veiculo *v, int sVei);
int vaga_livre(vaga *vg, int sVaga);

int menu_geral();
int menu_veiculo();
int menu_vaga();

//opcoes veiculo
void cadastra_veiculo(veiculo *v, int pos);
void lista_veiculos(veiculo *v, int sVei);
void remove_veiculo(veiculo *v, int pos);

//opcoes estacionamento
void entrada_vaga(veiculo *v, int sizeV, vaga *vagas, int pos);
void lista_vaga(vaga *vagas, int size_vagas, veiculo *veiculos);
void remove_vaga(vaga *vagas, int pos);
void saida_vaga(vaga *vagas, int pos);



#endif // FUNCOES_H_INCLUDED
