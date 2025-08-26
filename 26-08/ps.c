// Implementando o algoritmo de pesquisa sequencial

#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

int PesquisaSequencial(int * V, int N, int Chave);

int main(){

}

// Implementação...

int PesquisaSequencial(int * V, int N, int Chave){
    int i;
    for(i = 0; i < N; i++){
        if (V[i] == Chave) {
            return i; // O elemento chave foi encontrado no vetor
        }
    }
    return ERRO;
    
}