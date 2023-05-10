#include "struct.h"


int inicializa( aponta_no *raiz){
    *raiz = NULL;
    return 0;
}
int insere (aponta_no *raiz, int nota, char* nome, int matricula ){
    if (*raiz == NULL){
        *raiz = (aponta_no)malloc(sizeof(no));
        (*raiz)->alunos.matricula = matricula;
        (*raiz)->alunos.nota = nota;
        strcpy((*raiz)->alunos.name, nome);
        (*raiz)->dir = NULL;
        (*raiz)->esq = NULL;
        return 0;
    }
    if (nota > (*raiz)->alunos.nota){
        insere(&(*raiz)->dir, nota, nome, matricula);
        return 0;
    }
    insere(&(*raiz)->esq, nota, nome, matricula);
}
int imprime(aponta_no * raiz){
    if (*raiz == NULL){
        return 0;
    }
    imprime(&(*raiz)->dir);
    printf("matricula: %d\n", (*raiz)->alunos.matricula);
    printf("nome: %s\n", (*raiz)->alunos.name);
    printf("nota: %d\n\n", (*raiz)->alunos.nota);
    imprime(&(*raiz)->esq);
    return 0;
}
int maior (aponta_no * raiz){
    if ((*raiz)->dir == NULL){
        printf("%d\n",(*raiz)->alunos.nota);
        return 0;
    }
    maior(&(*raiz)->dir);
    return 0;
}

int menor(aponta_no * raiz){
        if ((*raiz)->esq == NULL){
        printf("%d\n",(*raiz)->alunos.nota);
        return 0;
    }
    maior(&(*raiz)->esq);
    return 0;
}

int tot(aponta_no * raiz){
    if (*raiz == NULL){
        return 0;
    }
    return tot(&(*raiz)->esq) + tot(&(*raiz)->dir) + 1;
}

int soma(aponta_no * raiz){
    if (*raiz == NULL){
        return 0;
    }
    
    //printf("teste: %d\n", (*raiz)->alunos.nota);
    return soma(&(*raiz)->esq) + soma(&(*raiz)->dir) + (*raiz)->alunos.nota ;
}

float media(aponta_no * raiz){
    return (soma(&(*raiz))/tot(&(*raiz)));
}

int tot_abaixo_media(float media, aponta_no * raiz){
    if (*raiz == NULL){
        return 0;
    }
    if ((*raiz)->alunos.nota < media){
        printf("%d", (*raiz)->alunos.nota);
        printf("esta abaixo da media\n");
        return (1 + tot_abaixo_media(media, &((*raiz)->dir)) + tot_abaixo_media(media, &((*raiz)->esq)));
    }
    return 0;

}