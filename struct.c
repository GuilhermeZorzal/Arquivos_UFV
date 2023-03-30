#include "struct.h"

void inicializa(TipoApontador *no){
    *no = NULL;
}

int Insere(TipoApontador *no, long item){
    if (*no == NULL){
        *no = (TipoApontador)malloc(sizeof(TipoNo));
        (*no)->Reg = item;
        (*no)->Dir = NULL;
        (*no)->Esq = NULL;
        return 0;
    }
    if (item < (*no)->Reg){
        Insere(&((*no)->Esq), item);
    }
    else{
        Insere(&((*no)->Dir), item);
    }

}
int Percorre(TipoApontador * no){
    if ((*no) == NULL){
        return 0;
    }
    Percorre(&((*no)->Esq));
    printf("%ld\n",(*no)->Reg);
    Percorre(&((*no)->Dir));
    return 0;
}