#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

typedef struct Node {

    int val;
    struct Node *before;
    struct Node *next;
} Node;

typedef struct Queue{

    Node *start;
    Node *end;
} Queue;

#endif