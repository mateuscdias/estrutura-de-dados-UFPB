#ifndef LISTAENCADEADA_H
#define LISTAENCADEADA_H

#include <stdlib.h>
#include <stdio.h>

struct no {
    int val;
    struct no* next;
};

typedef struct no No;

struct lista{
    
    No *inicio;
};

typedef struct lista Lista;
#endif