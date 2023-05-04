#include "dados.h"

int main(){
    char nome_arq[30];
    FILE * arq;

    char Linha[50];


    printf("Insira o nome do arquivo:\n");
    scanf("%s", &nome_arq);
    arq = fopen(nome_arq, "rt");
    

    if (arq == NULL){
        printf("Problemas na abertura do arquivo\n");
        return;
    }

    while (!feof(arq)){
        fgets(Linha, 100, arq);  
        
    }

    printf("roda");
    fclose(arq);
    return 0;
}