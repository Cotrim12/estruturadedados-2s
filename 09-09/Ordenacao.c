#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Protótipos

void InsertionSort(int * V, int N);
void ExibirVetor(int * V, int N);

// Função Principal

int main() {
    int Conjunto[] = {1, 9, 7, 8, 5, 2};
    int Tamanho = sizeof(Conjunto) / sizeof(int);
    InsertionSort(Conjunto, Tamanho);
    printf("Vetor ordenado: \n");
    ExibirVetor(Conjunto, Tamanho);

}

// Implementação das Funções

void InsertionSort(int * V, int N) {

    int Chave;
    int i;
    int j;

    for(i = 1; i < N; i++){

        Chave = V[i];
        j = i - 1;

        while(j >= 0 && V[j] > Chave){
            V[j + 1] = V[j];
            j--;
        }

        V[j + 1] = Chave; // Copiando o chave no último lugar modificado
    }


}

void ExibirVetor(int * V, int N){

    int i;
    for(i = 0; i < N; i++) printf("%d\t", V[i]);
    printf("\n");

}