#include "struct.h"

int main(){
    aponta_no raiz;
    inicializa(&raiz);
    char nome[23];
    int nota, matricula,i;
    float median;
    for (i = 0; i < 5; i++){
        
        scanf("%d",&nota);
        scanf("%s", &nome);
        scanf("%d", &matricula);
        insere(&raiz, nota, &nome[0], matricula);
    }
    imprime(&raiz);
    maior(&raiz);
    menor(&raiz);
    printf("%d\n", tot(&raiz));
    printf("%d\n", soma(&raiz));
    median = media(&raiz);
    printf("%f\n", median );
    printf("%d\n", tot_abaixo_media(median, &raiz));

    return 0;
}