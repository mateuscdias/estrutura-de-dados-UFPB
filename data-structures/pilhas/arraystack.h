#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#define MAXSTACK 100

typedef struct arraystack
{
    int stack[MAXSTACK];
    int topo;

} ArrayStack;

#endif