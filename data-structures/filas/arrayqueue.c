#include "arrayqueue.h"
#include <stdlib.h>

Queue *cria_fila(){

    Queue *q = (Queue*) malloc(sizeof(Queue));

    if(!q) return NULL;
    
    q->start = -1;
    q -> end = -1;
    return q;
}

int vazia(Queue *q){

    if(!q) return -1;

    return (q->start == -1 && q->end == -1);
}

int cheia(Queue *q){

    if(!q) return -1;

    return (q->end + 1 + MAXQUEUE % MAXQUEUE == q->start);
}

int insere_fila(Queue *q, int dado){

    if(!q) return 0;

    if(vazia(q)){

        q->start = 0;
        q->end = 0;
        q->v[q->end] = dado;

        return 1;
    }

    if (cheia(q)) return 0;

    q->end = (q->end + 1 + MAXQUEUE % MAXQUEUE);
    q->v[q->end] = dado;

    return 1;
}

int remove_fila(Queue *q, int *out){

    if(!q || !out) return 0;

    if(vazia(q)){
        return 0;
    }

    *out = q->v[q->start];
    q->start = (q->start + 1 + MAXQUEUE % MAXQUEUE);

    return 1;
}