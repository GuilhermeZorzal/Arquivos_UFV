
#include "dados.h"

int main(){
    char nome_arq[30];


    char Linha[50], nome[30];
    char codigo[8];
    int vetor_aleatorio,valor;
    gera_vetor_aleatorio(&vetor_aleatorio);

    dados info;
    vetor tripu;

    for(int i=0; i < MAX; i++){
        scanf("%s",&codigo);
        scanf("%s",&nome);
        for (int c = 0; c < 30 || nome[c] == ' '; c++){
            valor += (nome[c] - 48)*(c+1);
        }
        strcpy(&info.codigo, &codigo);
        strcpy(&info.nome, &nome);
        insere_item(&tripu, &info, valor );
    }

    return 0;
}