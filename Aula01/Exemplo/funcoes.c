#include "funcoes.h"

void inicializa_listas(veiculo *v, vaga *vg, int sVei, int sVaga){
    for(int i=0; i< sVei; i++)
        v[i].status = 0;

    for(int i=0; i< sVaga; i++){
        vg[i].status = 0;
        vg[i].horaSaida = -1;
    }
}

int veiculo_livre(veiculo *v, int sVei){
    for(int i=0; i< sVei; i++){
        if(v[i].status == 0)
            return i;
    }

    return -1;
}

int vaga_livre(vaga *vg, int sVaga){
    for(int i=0; i< sVaga; i++){
        if(vg[i].status == 0)
            return i;
    }

    return -1;
}

int menu_geral(){
    int opc = 0;
    do{
        system("cls");
        printf(" -- Menu Geral -- \n");
        printf("1 - Veículo\n");
        printf("2 - Vagas\n");
        printf("10 - Sair\n");
        printf("Informe uma opção:");
        scanf("%d", &opc);
    }while(opc != 1 && opc != 2 && opc != 10);
    return opc;
}

int menu_veiculo(){
    int opc = 0;
    do{
        system("cls");
        printf(" -- Menu Veiculo -- \n");
        printf("1 - Cadastro\n");
        printf("2 - Edição\n");
        printf("3 - Remover\n");
        printf("4 - Lista\n");
        printf("5 - Voltar\n");
        printf("Informe uma opção:");
        scanf("%d", &opc);
    }while(opc < 0 && opc >= 5);
    return opc;
}

int menu_vaga(){
    int opc = 0;
    do{
        system("cls");
        printf(" -- Menu Estacionamento -- \n");
        printf("1 - Entrada Veiculo\n");
        printf("2 - Edição\n");
        printf("3 - Registrar Saída\n");
        printf("4 - Lista\n");
        printf("5 - Remover\n");
        printf("6 - Voltar\n");
        printf("Informe uma opção:");
        scanf("%d", &opc);
    }while(opc < 0 && opc >= 6);
    return opc;
}

void cadastra_veiculo(veiculo *v, int pos){
    printf("Informe o cliente:");
    fflush(stdin);
    fgets(v[pos].cliente, 50, stdin);
    v[pos].cliente[strlen(v[pos].cliente)-1] = '\0';

    printf("Informe a placa:");
    fflush(stdin);
    fgets(v[pos].placa, 10, stdin);
    v[pos].placa[strlen(v[pos].placa)-1] = '\0';

    v[pos].status = 1;
}

void lista_veiculos(veiculo *v, int sVei){
    system("cls");
    printf("Id\tCliente\tPlaca\n");
    for(int i=0; i< sVei; i++){
        if(v[i].status == 1)
            printf("%d\t%s\t%s\n", i+1, v[i].cliente, v[i].placa);
    }
    system("pause");
}

void remove_veiculo(veiculo *v, int pos){
    v[pos].status = 0;
    printf("Veículo removido com sucesso!\n");
    system("pause");
}

void entrada_vaga(veiculo *v, int sizeV, vaga *vagas, int pos){
    lista_veiculos(v, sizeV);
    printf("Informe o código do veículo que deseja dar entrada:");
    scanf("%d", &vagas[pos].idVeiculo);
    vagas[pos].idVeiculo--;
    printf("Informe a hora de entrada:");
    scanf("%d", &vagas[pos].horaEntrada);
    vagas[pos].status = 1;
    printf("Vaga registrada com sucesso!\n");
    system("pause");
}

void lista_vaga(vaga *vagas, int size_vagas, veiculo *veiculos){
    printf("Id\tPlaca\tH Entrada\tH Saída\n");
    for(int i=0; i<size_vagas; i++){
        if(vagas[i].status!= 0){
            if(vagas[i].horaSaida!= -1)
                printf("%d\t%s\t%d\t%d\n",i+1,veiculos[vagas[i].idVeiculo].placa, vagas[i].horaEntrada, vagas[i].horaSaida);
            else
                printf("%d\t%s\t%d\n",i+1,veiculos[vagas[i].idVeiculo].placa, vagas[i].horaEntrada);
        }
    }
    system("pause");

}

void remove_vaga(vaga *vagas, int pos){
    vagas[pos].status = 0;
    vagas[pos].horaSaida = -1;
    printf("Vaga removida com sucesso!\n");
    system("pause");
}

void saida_vaga(vaga *vagas, int pos){
    int tempo = 0;
    printf("Informe a hora de saída:");
    scanf("%d", &vagas[pos].horaSaida);
    vagas[pos].status = 2;
    tempo = vagas[pos].horaSaida - vagas[pos].horaEntrada;
    printf("Saída registrada com sucesso!\nO veículo permaneceu %d horas\n", tempo);
    system("pause");
}
