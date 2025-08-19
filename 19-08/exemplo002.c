#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[]){
    FILE * fp;; // fp é um ponteiro para arquivo
    fp = fopen ("tabuada.txt", "a"); // abre teste.txt para escrita

    if (fp == NULL) {
        printf("Erro: Arquivo nao foi aberto!\n");
        exit(1);
    }
    int i;

    fprintf(fp, "Tabuada do 9:\n\n");

for ( i = 1; i <= 10; i++){
    fprintf(fp, "9 x %d = %d\n", i, 9 * i);

    fprintf(fp, "\n");
}

    

    fclose(fp);
    return 0;
}