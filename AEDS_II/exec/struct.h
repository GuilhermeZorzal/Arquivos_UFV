#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct al
{
    char name[40];
    int nota;
    int matricula;
} aluno;

typedef struct struct_no * aponta_no;
typedef struct struct_no
{
    aluno alunos;
    aponta_no dir;
    aponta_no esq;
} no;


int inicializa( aponta_no *raiz);
int insere (aponta_no *raiz, int nota, char* nome, int matricula );
int imprime(aponta_no * raiz);
int menor(aponta_no * raiz);
int maior(aponta_no * raiz);
int tot(aponta_no * raiz);
int soma(aponta_no * raiz);
float media(aponta_no * raiz);
int tot_abaixo_media(float media, aponta_no * raiz);


