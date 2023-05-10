#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct TipoNo * TipoApontador;

typedef struct TipoNo{
    long Reg;
    TipoApontador Esq, Dir;
} TipoNo;

void inicializa(TipoApontador *no);
int Insere(TipoApontador * no, long vetor);
int Percorre_ordem(TipoApontador * no);
int Percorre_preordem(TipoApontador * no);
int Percorre_posordem(TipoApontador * no);
int Procura_item(TipoApontador *no, int chave); //false or true
int Conta_nos(TipoApontador *no);
int Maior_item(TipoApontador *no);
int Profundidade_no(TipoApontador *no, int chave); //profundidade da chave dada
void Antecessor(TipoApontador q, TipoApontador * r);
void Retira(TipoApontador *no, int chave);
