#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 7
#define tam_str 30

typedef struct dados{
    int codigo;
    char nome[tam_str];
}

typedef struct vetor{
    dados vetor[MAX];
}vetor;

int gera_vetor_aleatorio(int * vetor_aleaorio);
int insere_item(dados * vetor, char * nome, int * codigo);


