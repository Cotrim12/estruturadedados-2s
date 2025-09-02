#ifndef EQUIPE_H
#define EQUIPE_H

#define ERRO -999

typedef struct {
    int Pos; // Posição final da equipe no Brasileirão 2024
    char Estado [30];
    char Equipe[50]; // Nome do time
    int Pts;
    int J;
    int V;
    int E;
    int D;
    int GP; // Gold pró/Gols marcados
    int GC; // Gols Contra/Sofridos
    int SG; // Saldo de Gols = GP - GC = SG
    float Aproveitamento;
    }Equipe;

    Equipe * LerDados(char * NomeArquivo);

    int getPontos(Equipe * T, int Posicao);
    float getAproveitamento(Equipe * T, char * Nome);




#endif