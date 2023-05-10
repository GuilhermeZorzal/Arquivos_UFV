#include "functions.h"

int main(){
    TipoArvore arvore;
    TipoChave chave;
    for (int c; c < 10; c++){
        scanf("%c", &chave);
        Insere(chave, &arvore);
    }
    Pesquisa('d', arvore);
    return 0;
}