#include "hash.h"

int inicializa(Thash * hash){
    int c;
    for (c = 0; c<M; c++){
        hash->tabela[c].codigo = -1;
    }
    return 0;
}

int Insere(Thash * tabela, char * nome, int codigo){
    int h;
    int i;
    h = hash(nome);
    printf("%d\n\n", h);
    if (tabela->tabela[h].codigo != -1){
        printf("printando hs:\n");
        for (i = 1; i < M-1; i++){
            h = (hash(nome)+i)%M;
            printf("%d\n", h);
            if (tabela->tabela[h].codigo == -1){
                break;
            }
        }
    }
    //printf("%s %d %d\n\n", nome, codigo, h);
    tabela->tabela[h].codigo = codigo;
    strcpy(tabela->tabela[h].nome, nome);
    printf("%s %d %d\n\n", tabela->tabela[h].nome, tabela->tabela[h].codigo, h);
    return 0;
}

int hash(char * chave){
    return f_universal(chave) % M;
}

int f_universal(char * chave){
    int h;
    int c;
    for (c = 0; chave[c] != '\0'; c++){
        h += (chave[c]-48) * (c+1);
    }
    return h;
}

void Imprime(Thash hash){
    int i;
    for (i = 0; i< M; i++){
        printf("\n");
        printf("%d\n", hash.tabela[i].codigo);
        printf("%s\n", hash.tabela[i].nome);
    }
}
int verifica(Thash * tabela, char * nome){
    int h,c;
    h = hash(nome);
    if (strcmp(tabela->tabela[h].nome, nome) == 0){
        printf("%s esta na tabela: \ncodigo: %d\n", tabela->tabela[h].nome, tabela->tabela[h].codigo);
        return 0;
    }
    for (c = 0; c < M; c++){
        h = (h+c+1)%M;
        if (strcmp(tabela->tabela[h].nome, nome) == 0){
            printf("%s esta na tabela: \ncodigo: %d\n", tabela->tabela[h].nome, tabela->tabela[h].codigo);
            return 0;
        }
    }
    printf("%s nao esta na tabela", nome);
    return 1;
}