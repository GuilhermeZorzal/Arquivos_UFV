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
