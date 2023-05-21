/*• Tabela hash com endereçamento fechado
– Lista encadeada
• Tabela hash com endereçamento aberto
– Hashing linear
* Implementar a função de transformação (Hashing Universal)

Hash duplo:
h(k) = k % M (Se deu colisão):
h2(k) = 1 + (k % (M-1))
novo h(k) = (j*h2(k) + h(k)) % M   se der colisão, soma-se 1 a j e realiza a conta novamente.

*/
#include "hash.h"

int main(){
    int c,codigo;
    Thash hash;
    char nome[50];
    inicializa(&hash);
    for (c = 0; c < M; c++){
        scanf("%d", &codigo);
        scanf("%s", &nome);
        Insere(&hash, &nome[0],codigo);
    }
    Imprime(hash);
    verifica(&hash, "joana");
    verifica(&hash, "ana");
}

/*

123
jose 
6342
ana
02392 
mateus
329
caleta
320
thais
23029
jao
325 
pedro

*/