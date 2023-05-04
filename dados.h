
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 7
#define tam_str 30

typedef struct dados{
    char codigo;
    char nome[tam_str];
}dados;

typedef struct vetor{
    dados vetor[MAX];
}vetor;

int insere_item(vetor * vetor, dados * dados, int k){
    int indice = k % MAX;
    
}
