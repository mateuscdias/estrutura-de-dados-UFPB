#ifndef LISTA_HETEROGENEA_H
#define LISTA_HETEROGENEA_H

struct no {
    void *info;
    int tipo;
    struct no *prox;
};

typedef struct no No;

#endif