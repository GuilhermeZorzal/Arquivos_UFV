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

int Percorre_preordem(TipoApontador * no){
        if ((*no) == NULL){
        return 0;
    }
    printf("%ld\n",(*no)->Reg);
    Percorre_ordem(&((*no)->Esq));
    Percorre_ordem(&((*no)->Dir));
    return 0;
}

int Percorre_posordem(TipoApontador * no){
    if ((*no) == NULL){
        return 0;
    }
    Percorre_ordem(&((*no)->Esq));
    Percorre_ordem(&((*no)->Dir));
    printf("%ld\n",(*no)->Reg);
    return 0;
}

int Procura_item(TipoApontador *no, int chave){
    if ((*no) == NULL){
        return 0;
    }
    if ((*no)->Reg == chave){
        return 1;
    }
    Procura_item(&(*no)->Esq, chave);
    Procura_item(&(*no)->Dir, chave);
} //false or true
int Conta_nos(TipoApontador  * no){
    if ((*no) == NULL){
        return 0;
    }
    return Conta_nos(&(*no)->Dir)+Conta_nos(&(*no)->Esq) +1;
}
int Maior_item(TipoApontador *no){
    if ((*no)->Dir == NULL){
        return (*no)->Reg;
    }
    Maior_item(&(*no)->Dir);
}
int Profundidade_no(TipoApontador *no, int chave){
    int prof;
    if ((*no)->Reg == chave){
        return 1;
    }
    if ((*no) == NULL){
        return 0;
    }
    prof = Profundidade_no(&(*no)->Esq, chave);
    if (prof >= 1){
        return 1 + prof;
    }
    prof = Profundidade_no(&(*no)->Dir, chave);
    if (prof >= 1){
        return 1 + prof;
    }
    return 0;

}

void Antecessor(TipoApontador q, TipoApontador *r){
    TipoApontador aux;
    if ((*r)->Dir != NULL){
        Antecessor(q, &(*r)->Dir);
        return;
    }
    q->Reg = (*r)->Reg;
    aux = *r;
    *r = (*r)->Esq;
    free(aux);
}

void Retira(TipoApontador *no, int chave){
    if ((*no) == NULL){
        printf("No nao existe");
        return;
    }
    if ((chave > (*no)->Reg)){
        Retira(&(*no)->Dir, chave);
    }
    else if (chave < (*no)->Reg){
        Retira(&(*no)->Esq, chave);
    }
    else if (chave == (*no)->Reg){
        if ((*no)->Dir == NULL && (*no)->Esq != NULL){
            TipoApontador aux;
            aux = (*no);
            (*no) = (*no)->Esq;
            free(aux);
            return;
        }
        if ((*no)->Dir != NULL && (*no)->Esq == NULL){
            TipoApontador aux;
            aux = (*no);
            (*no) = (*no)->Dir;
            free(aux);
            return;
        }
        if ((*no)->Dir != NULL && (*no)->Esq != NULL){
            Antecessor((*no), &(*no)->Esq);

            return;
        }
        if ((*no)->Dir == NULL && (*no)->Esq == NULL){
            TipoApontador pAux;
            pAux=(*no);
            (*no)= NULL;
            free(pAux);
            return;
        }
    }
}