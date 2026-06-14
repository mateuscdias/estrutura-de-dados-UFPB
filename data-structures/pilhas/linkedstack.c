#include "linkedstack.h"
#include <stdlib.h>

Pilha *cria_pilha(){

    Pilha *p = (Pilha *) malloc(sizeof(Pilha));

    if(!p) return NULL;

    p -> topo = NULL;
    
    return p;
}

void libera_pilha(Pilha *p){

    No *n;

    while(p -> topo != NULL){

        n = p -> topo;
        p -> topo = p -> topo -> prox;
        free(n);
    }

    free(p->topo);
    free(p);
}

int pilha_vazia(Pilha *p){

    if(!p) return -1;

    return (p->topo == NULL);
}

int push(Pilha *p, int info){

    if(!p) return 0;

    No* n = (No*) malloc(sizeof(No));

    n -> dado = info;
    n->prox = p -> topo;
    p->topo = n;

    return 1;
}

int pop(Pilha *p, int *info){

    if(!p || !info) return 0;

    if(pilha_vazia(p)) return 0;

    No *n = p -> topo;
    p -> topo = p -> topo -> prox;
    *info = n->dado;
    free(n);

    return 1;
}