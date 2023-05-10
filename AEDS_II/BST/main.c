#include "struct.h"

int main(){
    long vetor[] = {1,3,2,7,8,5,9,0,12,54};
    int c,opcao,chave,result;
    TipoApontador ponta;
    inicializa(&ponta);
    for (c = 0; c< 10; c++){
        Insere(&ponta, vetor[c]);
    }

    Percorre_ordem(&ponta);
    Retira(&ponta, 12);
    Percorre_ordem(&ponta);


    /*while(1){
        system("cls");
        printf("Escolha uma opcao:\n(1)Percorre_ordem\n(2)Percorre_posordem\n(3)Percorre_preordem\n(4)Procura_item\n(5)Conta_nos\n(6)Maior_item\n(7)Profundidade_no\n(8) Remove\n(0)Exit\n");
        scanf("%d",&opcao);

        switch (opcao)
        {
        case 0:
            exit(0);
            break;
        case 1:
            Percorre_ordem(&ponta);
            break;
        case 2:
            Percorre_posordem(&ponta);
            break;
        case 3:
            //Percorre_preordem(&ponta);
            break;
        case 4:
            printf("Digite a chave:\n");
            scanf("%d", &chave);
            result = Procura_item(&ponta, chave);
            if (result == 1){
                printf("Item esta na arvore\n");
            }
            else{
                printf("Item nao esta na arvore\n");
            }
            break;
        case 5:
            printf("%d\n",Conta_nos(&ponta));
            break;
        case 6:
            printf("%d\n", Maior_item(&ponta));
            break;
        case 7:
            printf("Qual valor deseja procurar?\n");
            scanf("%d",&chave);
            printf("%d\n", Profundidade_no(&ponta, chave));
            break;
        case 8:
            printf("Qual valor deseja retirar?\n");
            scanf("%d",&chave);
            Retira(&ponta, chave);
            break;
        default:
            break;
        }
        printf("Digite qualquer numero para continuar:\n");
        scanf("%d",&result);
    }*/
    return 0;
}