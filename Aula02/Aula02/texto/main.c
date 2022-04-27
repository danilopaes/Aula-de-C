/*
    Função que retorna a quantidade de caracteres de um vetor de char
*/
int comprimento(char *str){
    int n = 0;
    for(int i=0; str[i] != '\0'; i++)
        n++;
    return n;
}

/*
    Função que faz a copia de uma string
*/
void copia(char *origem, char *destino){
    int i;
    for(i=0; origem[i] != '\0'; i++)
        destino[i] = origem[i];

    destino[i] = '\0';
}


/*
Função que cocatena 2 strings
*/
void concatena (char *destino, char *origem){
    int i = 0;
    int j;
    i = comprimento(destino);
    //while(destino[i] != '/0')
    // i++
    for (j=0; origem[j] != '/0'; j++){
        destino[i] = origem[j];
        i++;
    }
    destino[i] = '/0';
}
