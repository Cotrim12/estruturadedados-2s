// Implementar todas as funções do TAD Equipe

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

Equipe * LerDados(char * Arquivo){


    Equipe * X = malloc(20 * sizeof (Time));
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

int getPontos(Equipe * T, int Posicao){

    int i;

    for(i = 0; i < 20; i++)
    if(T[i].Posicao == Posicao)
    return T[i].Pontos;

    return ERRO;
}

float getAproveitamento(Equipe * T, char * Nome){

    int i;

    for(i = 0; i < 20; i++)
    if (strcmp(t[i].Nome, Nome) == 0)
    return T[i].Aproveitamento;

    return ERRO;
}