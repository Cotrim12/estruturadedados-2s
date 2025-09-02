#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

int main (){

    Equipe * Tabela = LerDados("tabela.csv"); 

    printf("%2f%%\n", getAproveitamento(Tabela, "Palmeiras"));





    return 0;
}
