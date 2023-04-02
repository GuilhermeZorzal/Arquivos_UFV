#include "fila.h"

void Inicializa_fila(ponteiro_fila v_fila){
    v_fila->primeiro = 0;
    v_fila->ultimo = 0;
}
int Insere_fila(ponteiro_fila v_fila, int item){
    v_fila->fila_vet[v_fila->ultimo++] = item;
    return 0;
}
int remove_fila(ponteiro_fila v_fila, int * item){
    item = v_fila->fila_vet[v_fila->primeiro];
    v_fila->primeiro++;

    return 0;
}
int fila_vazia(ponteiro_fila fila1){
    if (fila1->ultimo == 0 && fila1->primeiro == 0){
        return 1;
    }
    return 0;
}