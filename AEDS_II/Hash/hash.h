#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 7

typedef struct celula
{
    char nome[50];
    int codigo;
}celula;

typedef struct Thash
{
    celula tabela[M];
}Thash;


int inicializa(Thash * hash);
int Insere(Thash * tabela, char * nome, int codigo);
int hash(char * chave);
int f_universal(char * chave);
void Imprime(Thash hash);