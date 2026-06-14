#ifndef LISTA_DUPLAMENTE_ENC_H
#define LISTA_DUPLAMENTE_ENC_H

struct no {

    int *dado;
    struct no *ante;
    struct no *prox;
};

typedef struct no No;

struct lista{
    No *inicio;
    No *fim;
};

typedef struct lista Lista;
#endif