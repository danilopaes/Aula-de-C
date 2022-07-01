#include <stdio.h>
#include <stdlib.h>
#include "../lib_aluno/lib_aluno.h"

int main(){
    ALUNO *listaAluno[10];
    int opcao, qtde = 0, auxMatricula, auxIdade, pos, pos2;
    char auxNome[50], auxSobrenome[50], nomeCompleto[100];
    do{
        system("cls");
        printf(" - Menu - \n");
        printf("1 - Cria Aluno\n");
        printf("2 - Libera Aluno\n");
        printf("3 - Atribui Aluno\n");
        printf("4 - Consulta Matricula\n");
        printf("5 - Maioridade Aluno\n");
        printf("6 - Aluno Duplicado\n");
        printf("7 - Nome Completo\n");
        printf("8 - Sair\n");
        printf("Informe uma opcao:");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Informe a matricula:");
                scanf("%d", &auxMatricula);
                listaAluno[qtde] = aluno_cria(auxMatricula);
                qtde++;
            break;
            case 2:
                printf("Informe a posicao que deseja liberar(0-9):");
                scanf("%d", &auxMatricula);
                aluno_libera(listaAluno[auxMatricula]);
            break;
            case 3:
                printf("Informe a posicao que deseja atribuir(0-9):");
                scanf("%d", &auxMatricula);
                printf("Informe o nome:");
                scanf(" %50[^\n]", auxNome);
                printf("Informe o sobrenome:");
                scanf(" %50[^\n]", auxSobrenome);
                printf("Informe a idade:");
                scanf("%d", &auxIdade);
                aluno_atribui(listaAluno[auxMatricula], auxNome, auxSobrenome, auxIdade);
            break;
            case 4:
                printf("Informe a posicao que deseja consultar(0-9):");
                scanf("%d", &auxMatricula);
                printf("Matricula: %d\n",aluno_matricula(listaAluno[auxMatricula]));
            break;
            case 5:
                printf("Informe a posicao que deseja consultar(0-9):");
                scanf("%d", &auxMatricula);
                if(aluno_maioridade(listaAluno[auxMatricula]) == 0)
                    printf("Aluno matricula: %d - Menor\n",aluno_matricula(listaAluno[auxMatricula]));
                else
                    printf("Aluno matricula: %d - Maior\n",aluno_matricula(listaAluno[auxMatricula]));
            break;
            case 6:
                printf("Informe a posicao do primeiro aluno (0-9):");
                scanf("%d", &pos);
                printf("Informe a posicao do segundo aluno (0-9):");
                scanf("%d", &pos2);
                if(aluno_duplicado(listaAluno[pos], listaAluno[pos2]) == 0)
                    printf("Alunos nao duplicados\n");
                else
                    printf("Alunos duplicados\n");
            break;
            case 7:
                printf("Informe o aluno que deseja consultar (0-9):");
                scanf("%d", &pos);
                aluno_nomeCompleto(listaAluno[pos], nomeCompleto);
                printf("Nome completo: %s\n", nomeCompleto);
            break;
        };
        system("pause");
    }while(opcao != 8);

    return 0;
}
