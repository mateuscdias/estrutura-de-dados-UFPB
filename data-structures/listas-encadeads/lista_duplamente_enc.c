#include <stdio.h>
#include <stdlib.h>
#include "lista_duplamente_enc.h"

No *cria_no(int dado){

    No *n = (No*) malloc(sizeof(No));

    if(!n) return NULL;

    n ->dado = dado;
    n->ante = NULL;
    n->prox = NULL;
    return n;
}

Lista *cria_lista(){

    Lista *l = (Lista *) malloc(sizeof(Lista));
    
    if(!l) return NULL;

    l->inicio = NULL;
    l->fim = NULL;

    return l;
}

int tamanho(Lista *l){

    if(vazia(l)) return 0;

    No *aux = l->inicio;
    int tam = 1;
    while(aux->prox != NULL){

        tam++;
        aux = aux->prox;
    }
}

int vazia(Lista *l){

    if(l->inicio == NULL && l->fim == NULL){
        return 1;
    }

    return 0;
}

int insere_inicio(Lista *l, int dado){

    No *novo = cria_no(dado);

    if(!novo){
        return -1;
    }

    if(vazia(l)){

        l->inicio = novo;
        l->fim = novo;
        return 1;
    }

    novo->prox = l-> inicio;
    l->inicio->ante = novo;
    l->inicio = novo;
    return 1;
}

int insere_fim(Lista *l, int dado){

    No *novo = cria_no(dado);

    if(!novo) return -1;

    if(vazia(l)){

        l->inicio = novo;
        l->fim = novo;
        return 1;
    }

    novo->ante = l->fim;
    l->fim->prox = novo;
    l->fim = novo;
    return 1;
}

int insere_maio(Lista *l, int pos, int dado){


}