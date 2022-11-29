#include <stdio.h>
#define N 3

typedef struct item
{
    int num;
    char naipe;
}Titem;

int main(){

    Titem lista[N];
    char carta[3];
    for (int i= 0; i < N; i++){
        scanf("%s",&carta[0]);
        lista[i].num = carta[0]-'0';
        lista[i].naipe = carta[1];
    }
    int i, j, Min;
    Titem aux;
    for (i = 0; i < N - 1; i++){ 
        Min = i;
        for (j = i + 1 ; j < N; j++)
            if ( lista[Min].num < lista[i].num) Min = j;
        aux = lista[Min];
        lista[Min] = lista[i];
        lista[i] = aux;
    }

    
    for ( i= 0; i < N; i++){
        printf("%d%c",lista[i].num, lista[i].naipe);
    }
    

}