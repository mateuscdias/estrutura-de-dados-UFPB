#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

typedef struct No {

    int dado;
    struct No *prox;

} No;

typedef struct {

    No *topo;
} Pilha;

Pilha *cria_pilha();
void libera_pilha(Pilha *p);
int pilha_vazia(Pilha *p);
int push(Pilha *p, int info);
int pop(Pilha *p, int *inf0);
#endif

