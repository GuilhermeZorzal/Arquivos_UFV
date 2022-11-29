//29-11-2022 resolvido

#include <stdio.h>
#define N 9

typedef struct item
{
    int num;
    char naipe;
}Titem;

int main(){

    Titem lista[N];
    char carta[4];

    //leitura :
    for (int i= 0; i < N; i++){
        scanf("%s",&carta[0]);
        
        switch (carta[0]){
        case 'K':
            lista[i].num = 13;
            lista[i].naipe = carta[1];
            break;
        case 'J':
            lista[i].num = 12;
            lista[i].naipe = carta[1];
            break;
        case 'Q':
            lista[i].num = 11;
            lista[i].naipe = carta[1];
            break;
        default:
            if (carta[0] == 1 && carta[1] == 0) {
                lista[i].naipe = carta[2];
                lista[i].num = 10;
                break;
            }
            else{
                lista[i].num = carta[0]-'0';
                lista[i].naipe = carta[1];
                break;
            }
        }
    }
    
    int i, j;
    Titem aux;
    for (i = 1; i < N; i++)    {
        aux = lista[i];
        j = i-1;
        while((j>=0) && (aux.num < lista[j].num)){
            lista[j+1] = lista[j];
            j--;
        }
        lista[j+1] = aux;
    }

    printf("\n");
    
    //impressao: 
    for ( i= 0; i < N; i++){
        switch (lista[i].num)
        {
        case 10:
            printf("10%c\n", lista[i].naipe);
            break;
        case 11:
            printf("Q%c\n", lista[i].naipe);
            break;
        case 12:
            printf("J%c\n", lista[i].naipe);
            break;
        case 13:
            printf("K%c\n", lista[i].naipe);
            break;
        default:
        printf("%d%c\n",lista[i].num, lista[i].naipe);
            break;
        }
    }
    return 0;
}

/*
b)Inserção - KE - QE - 8C - JE - 8E - 1O - 2O - 8O - 3O
KE
QE
8C
JE
8E
1O
2O
8O
3O
*/