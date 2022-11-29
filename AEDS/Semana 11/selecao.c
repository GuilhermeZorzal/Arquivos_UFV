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
    int i, j, Min;
    Titem aux;
    for (i = 0; i < N - 1; i++){ 
        Min = i;
        for (j = i + 1 ; j < N; j++)
            if ( lista[j].num < lista[Min].num) Min = j;
        aux = lista[Min];
        lista[Min] = lista[i];
        lista[i] = aux;
    }
    printf("\n");
    
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

/*Carlos adora jogar Pif, um jogo de cartas onde o objetivo é juntar trêstrios na mão do jogador, sendo que cada trio pode conter 3 cartas emsequência, ou três cartas com o mesmo número. Porém, Carlos tem umpéssimo hábito de não organizar suas cartas, e muitas vezes acabadescartando cartas úteis por isto. Seu objetivo é aplicar o algoritmo de ordenação simples indicado paraordenar a sequência de cartas de cada letra abaixo, verificando seCarlos conseguiu montar trincas. a) Faça manualmente o passo a passo do algoritmo, anotando cadacomparação e movimentação feita e indicando o estado do vetor ao finalde cada passada;b) Faça a implementação deste sistema que ordena as cartas, usando aimplementação do algoritmo estudada em sala de aula. Verifique se ascomparações   e   movimentações   estão   correspondentes   com   suasanotações realizadas na letra anterior.
Observe que:
●Cada carta é representada da seguinte forma: XN, sendo que X éo número da carta, e N é o naipe, podendo ser: (P) Paus, (O)Ouros, (C) Copas e (E) Espadas.
●O valete corresponde ao J, a dama ao Q, e o rei corresponde ao K
a)Seleção - 1P - 5C - 3O - 1C - 1E - 1O - 2O - KO - 3O
1P
5C
3O
1C
1E
1O
2O
KO
3O
*/