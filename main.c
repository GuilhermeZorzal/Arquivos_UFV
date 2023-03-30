#include "struct.h"

int main(){
    long vetor[] = {1,3,2,7,8,5,9,0,12,54};
    int c;
    TipoApontador ponta;
    inicializa(&ponta);
    for (c = 0; c< 10; c++){
        Insere(&ponta, vetor[c]);
    }

    Percorre(&ponta);
    return 0;
}