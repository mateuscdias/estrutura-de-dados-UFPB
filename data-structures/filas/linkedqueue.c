#include "linkedqueue.h"
#include <stdlib.h>

Queue *cria_fila(){

    Queue *q = (Queue *) malloc(sizeof(Queue));
     
    if(!q) return NULL;

    q->start = NULL;
    q->end = NULL;

    return q;
}

void libera_fila(Queue *q){

    if(!q) return;

    if (vazia(q)){
        free(q);
        return;
    }

    Node *aux = q->start;
    Node *prox;
    
    while(aux != NULL){

        prox = aux->next;
        free(aux);
        aux = prox;
    }

    free(q);
}

Node *cria_no(int dado){

    Node *n = (Node *) malloc(sizeof(Node));

    if(!n) return NULL;

    n->val = dado;

    return n;
}

int vazia(Queue *q){

    if(!q) return 0;

    return (q->end == NULL && q -> start == NULL);
}

int insere_fila(Queue *q, int dado){

    if(!q) return 0;

    Node *n = cria_no(dado);
    if(!n) return 0;

    if(vazia(q)){

        q->start = n;
        q->end = n;
        n->before = NULL;
        n->next = NULL;

        return 1;
    }

    n-> before = q->end;
    n->next = NULL;
    q -> end -> next = n -> before;
    q -> end = n;

    return 1;
}

int remove_fila(Queue *q, int *dado){

    if(!q || !dado) return 0;

    if(vazia(q)) return 0;


}