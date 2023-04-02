#include <stdio.h>
#include <stdlib.h>

#define max 50

typedef struct s_fila
{
    int primeiro, ultimo;
    int fila_vet[max];
}fila;
typedef fila * ponteiro_fila;

void Inicializa_fila(ponteiro_fila v_fila);
int Insere_fila(ponteiro_fila v_fila, int item);
int remove_fila(ponteiro_fila v_fila, int * item);
int fila_vazia(ponteiro_fila fila1);
