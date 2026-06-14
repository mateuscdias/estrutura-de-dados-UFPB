#include "listaencadeada.h"

Lista *cria_lista(){

    Lista *l = (Lista *) malloc(sizeof(Lista));

    if(!l) return NULL;

    l->inicio = NULL;

    return l;
}

No *cria_no(int dado){

    No *n = (No*) malloc(sizeof(No));

    if(!n) return NULL;

    n -> val = dado;
    n->next = NULL;

    return n;
}

int vazia(Lista *l){

    if(l->inicio == NULL) return 1;

    return 0;
}

int tamanho(Lista *l){

    if(vazia(l)) return 0;

    No *aux = l->inicio;
    int tam = 0;

    while (aux->next != NULL){

        tam++;
        aux = aux->next;
    }

    tam++;
    return tam;
}

int insere_inicio(Lista *l, int dado){

    No *novo = cria_no(dado);

    if(!novo) return 0;

    if(vazia(l)){

        l->inicio = novo;
        novo -> val = dado;

        return 1;
    }

    novo -> next = l -> inicio;
    l->inicio = novo;

    return 1;
}

int insere_meio(Lista *l, int pos, int dado){

    No *novo = cria_no(dado);

    if(vazia(l)){

    }
}

int remove_inicio(Lista *l, int dado){


}