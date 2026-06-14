#include "arraystack.h"
#include <stdlib.h>

/*
Pilhas em vetor:

Pilha -> Lista com regras de insercao e remocao especificas

Algoritmo: LIFO -> Last in, First Out

Ou seja, em uma pilha, os elementos sempre sao inseridos no topo e removidos do topo

Operacoes:

inserir -> push()
retirada -> pop()
*/

ArrayStack *cria_pilha(){

    ArrayStack *p = (ArrayStack*) malloc(sizeof(ArrayStack));

    if(!p) return NULL;

    p -> topo = -1;

    return p;
}

void libera_pilha(ArrayStack *p){

    if(!p) return;

    free(p);
}

int pilha_vazia(ArrayStack *p){

    if(!p) return -1;

    return (p->topo == -1);

}

int pilha_cheia(ArrayStack *p){

    if(!p) return -1;

    return (p->topo == MAXSTACK - 1);
}

int push(ArrayStack *p, int info){

    if(!p) return 0;

    if(pilha_cheia(p)) return 0;

    p -> topo++;
    p -> stack[p->topo] = info;

    return 1;
}

int pop(ArrayStack *p, int* info){

    if(!p || info == NULL) return 0;

    if(pilha_vazia(p)) return 0;

    p -> topo--;

    return 1;
}