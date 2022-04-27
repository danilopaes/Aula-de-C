#include "funcoes.h"

unsigned int cp = 1252;

int main(){
    SetConsoleCP(cp);
    SetConsoleOutputCP(cp);

    veiculo *veiculos;
    vaga *estacionamento;
    int sizeveic = 10;
    int sizevaga = 10;
    int opcao = 0;
    int opcao2 = 0;
    int auxpos;

    veiculos = calloc(sizeveic,sizeof(veiculo));
    //veiculos = realloc(veiculos, 20);

    estacionamento = calloc(sizevaga, sizeof(vaga));

    inicializa_listas(veiculos, estacionamento, sizeveic, sizevaga);

    do{
        opcao = menu_geral();
        switch(opcao){
        case 1:
            do{
                opcao2 = menu_veiculo();
                switch(opcao2){
                    case 1:
                    //Cadastra veiculo
                        auxpos = veiculo_livre(veiculos, sizeveic);
                        if(auxpos == -1){
                            printf("Lista Cheia!");
                            system("pause");
                        }
                        else
                            cadastra_veiculo(veiculos, auxpos);
                    break;
                    case 2:
                    //Edicao
                        printf("Informe o c�digo do veiculo que deseja editar:");
                        scanf("%d", &auxpos);
                        if(veiculos[auxpos].status != 0)
                            cadastra_veiculo(veiculos, auxpos);
                        else{
                            printf("Ve�culo n�o cadastrado\n");
                            system("pause");
                        }
                    break;
                    case 3:
                    //Remover
                        printf("Informe o c�digo do veiculo que deseja remover:");
                        scanf("%d", &auxpos);
                        if(veiculos[auxpos].status != 0)
                            remove_veiculo(veiculos, auxpos);
                        else{
                            printf("Cadastro n�o utilizado\n");
                            system("pause");
                        }
                    break;
                    case 4:
                    //Lista Veiculo
                        lista_veiculos(veiculos, sizeveic);
                    break;
                }
            }while(opcao2 != 5);
        break;
        case 2:
            do{
                opcao2 = menu_vaga();
                switch(opcao2){
                    case 1:
                        //Entrada
                        auxpos = vaga_livre(estacionamento, sizevaga);
                        if(auxpos == -1){
                            printf("Lista Cheia!");
                            system("pause");
                        }else
                            entrada_vaga(veiculos, sizeveic, estacionamento, auxpos);
                    break;
                    case 2:
                        //Edicao
                        printf("Informe o c�digo da vaga que deseja editar:");
                        scanf("%d", &auxpos);
                        if(estacionamento[auxpos].status != 0)
                            entrada_vaga(veiculos, sizeveic, estacionamento, auxpos);
                        else{
                            printf("Vaga n�o utilizada!\n");
                            system("pause");
                        }
                    break;
                    case 3:
                        //Sa�da Ve�culo
                        printf("Informe o c�digo da vaga que deseja registrar sa�da:");
                        scanf("%d", &auxpos);
                        if(estacionamento[auxpos].status == 1)
                            saida_vaga(estacionamento, auxpos);
                        else{
                            printf("Vaga n�o utilizada ou sa�da j� informada!\n");
                            system("pause");
                        }
                    break;
                    case 4:
                        //lista vagas
                        lista_vaga(estacionamento, sizevaga, veiculos);
                    break;
                    case 5:
                        //remover vaga
                        printf("Informe o c�digo da vaga que deseja remover:");
                        scanf("%d", &auxpos);
                        if(estacionamento[auxpos].status != 0)
                            remove_vaga(estacionamento, auxpos);
                        else{
                            printf("Vaga n�o utilizada\n");
                            system("pause");
                        }
                }
            }while(opcao2 != 6);
        break;
        }
    }while(opcao != 10);

    return 0;
}
