#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int Num;
    int Den;
} Fracao;

int calcularMDC(int A, int B);
Fracao criarFracao(int N, int D);
void exibirFracao(Fracao F);

Fracao simplificarFracoes(FracaoF){
    int mdc = calcularMDC(F.Num, F.Den);
    F.Num = F.Num / mdc;
    F.Den = F.Den / mdc;
    return 0;

}

int main(){

    system("cls");

    printf("%d", calcularMDC(24, 30));

    return 0;
}


Fracao criarFracao(int N, int D) {
    Fracao F;
} 