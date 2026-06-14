#ifndef ARRAYQUEUE_H
#define ARRAYQUEUE_H

#define MAXQUEUE 100

typedef struct queue {

    int start;
    int end;
    int v[MAXQUEUE];
} Queue;

#endif
