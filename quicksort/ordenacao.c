#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void TrocarElemento(int * A, int * B);
int Particao(int * V, int Inf, int Sup);
void QuickSort(int * V, int Inf, int Sup);
void ExibirVetor(int * V, int N);


int main(){

    int Vetor[] = {3, 6, 4, 5, 1, 7, 2};
    int Tamanho = sizeof(Vetor) / sizeof(int);
    Particao(Vetor, 0, Tamanho - 1);

    int X = 25;
    int Y = 37;
    TrocarElemento(&X, &Y);
    printf("%d %d", X, Y);

}

void TrocarElemento(int * A, int * B){

// Obs: A e B são ponteiros (guardam endereço de memória)

int temp = *A; // Temp recebe o valor apontado por A
*A = *B; // O valor apontado por A passa a ser o valor apontado pro B
*B = temp; // O valor apontado por B recebe temp(valor apontado)


}

int Particao(int * V, int Inf, int Sup){
    int Pivot = V[(Inf + Sup) / 2];
    int i = Inf;
    int j = Sup;

    while (i <= j){
        while(V[i] < Pivot) i++;
        while(V[j] < Pivot) j--;
        if(i <= j){
            TrocarElemento(&V[i], &V[j]);
            i++;
            j--;
        }
    
    return i;
        
    }




void QuickSort(int * V, int Inf, int Sup){
if(Inf < Sup);
int P = Particao(V, Inf, Sup);
QuickSort(V, Inf, P - 1);
QuickSort(V, P, sup);

}

}

void ExibirVetor(int * V, int N){
    for(int i = 0; i < N; i++) printf("%d\t", V[i]);
    printf("\n");
}