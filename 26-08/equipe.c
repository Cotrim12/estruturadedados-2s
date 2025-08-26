// Implementar todas as funções do TAD Equipe

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

Time * LerDados(char * Arquivo){


    Time * X = malloc(20 * sizeof (Time));
    if (X == NULL) {
        printf("Erro: memoria insuficiente!\n");
        exit(1);

    }

    FILE * fp = fopen(Arquivo, "r");
    if(fp == NULL) {
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1);
    }

    fclose(fp);
    return X;

}