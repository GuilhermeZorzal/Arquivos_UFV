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
int Percorre_ordem(TipoApontador * no){
    if ((*no) == NULL){
        return 0;
    }
    Percorre_ordem(&((*no)->Esq));
    printf("%ld\n",(*no)->Reg);
    Percorre_ordem(&((*no)->Dir));
    return 0;
}

int Percorre_preordem(TipoApontador * no);

int Percorre_posordem(TipoApontador * no){
    if ((*no) == NULL){
        return 0;
    }
    Percorre_ordem(&((*no)->Esq));
    Percorre_ordem(&((*no)->Dir));
    printf("%ld\n",(*no)->Reg);
    return 0;
}

