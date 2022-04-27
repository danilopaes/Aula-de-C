#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
#include "../../texto/texto.h"

unsigned int cp = 1252;

int main(){
    char str[101], str1[51], str2[51];

    //SetConsoleCP(cp);
    //SetConsoleOutputCP(cp);

    printf("Informe um texto:");
    scanf(" %50[^\n]", str1);

    printf("Informe outro texto:");
    scanf(" %50[^\n]", str2);

    printf("%s\n", str1);
    printf("O comprimento da str 1 �: %d\n", comprimento(str1));
    printf("%s\n", str2);

    copia(str1, str);


    concatena(str, str2);
    printf("%s\n", str);

    return 0;
}
