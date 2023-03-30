#include <stdio.h>
#include <stdlib.h>

typedef struct TipoNo * TipoApontador;

typedef struct TipoNo{
    long Reg;
    TipoApontador Esq, Dir;
} TipoNo;

void inicializa(TipoApontador *no);

int Insere(TipoApontador * no, long vetor);

int printa(TipoApontador * no);