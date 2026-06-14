#include "lista_circular.h"
#include "listaencadeada.h"

LC *cria_lista_circular(){

    LC *lc = (LC*) malloc(sizeof(LC));

    lc -> inicio = NULL;

    return lc;
}

LC  *converte_lista_para_circular(Lista *l){

    No *aux = l->inicio;

    while(aux ->next != NULL){
        aux = aux->next;
    }

    LC *lc = (LC*)malloc(sizeof(LC));

    lc -> inicio = l ->inicio;
    aux -> next = lc->inicio;

    return lc;
}

int vazia(Lista *l){

    if(l->inicio == NULL) return 1;

    return 0;
}

int tamanho(LC *l){

    if(vazia(l)) return 0;

    int tam = 1;
    No *aux = l->inicio;

    while(aux != l->inicio){

        aux = aux -> next;
        tam++;
    }

    return tam;
}

int insere(LC *l, int dado, int pos){

    No *novo = (No *)malloc(sizeof(No));

    if(vazia(l)){

        novo -> val = dado;
        novo -> next = novo;
        l -> inicio = novo;

        return 1;
    }

    if(!novo) return 0;

    No *aux = l->inicio;

    while(aux -> next != l ->inicio){

        aux = aux ->next;
    }
    
    novo->next = aux->next;
    aux->next = novo;
    novo->val = dado;

}

int remove(LC *l, int pos){

    /* remove a primeira ocorrencia de um valor dado em uma lista c */
}