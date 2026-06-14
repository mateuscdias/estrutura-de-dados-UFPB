/*
Biblioteca com a implementação da estrutura de dados Lista em Vetor Circular
e funções auxiliares para a sua utilização.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
*/

#ifndef LISTAVETORCIRCULAR_H
#define LISTAVETORCIRCULAR_H

#define MAX_VETOR 100

typedef struct lista_circular{

    int v[MAX_VETOR];
    int ctri;
    int ctrf;
} lista_vet_circ;

void inicia_lista_circ(lista_vet_circ *l);
/*
    void inicia_lista_circ(lista_vet_circ *l)

    Inicia uma lista em vetor circular vazia, inicializando os ponteiros de inicio e final como -1

    Parametros:

    lista_vet_circ *l -> Ponteiro para a lista em vetor circular

    Retornos:

    A lista nao possui retorno
    */


int eh_cheia(lista_vet_circ *l);

    /* 
    int eh_cheia(lista_vet_circ *l)

    Funcao que verifica se uma lista em vetor circular esta cheia

    Parametros:

    lista_vet_circ *l -> Ponteiro para uma lista em vetor circular

    Retornos:

    1 -> Caso esteja cheia
    0 -> Caso contrario
    */

int eh_vazia(lista_vet_circ *l);


    /* 
    int eh_vazia(lista_vet_circ *l)

    Funcao que verifica se uma lista em vetor circular esta vazia

    Parametros:

    lista_vet_circ *l -> Ponteiro para uma lista em vetor circular

    Retornos:

    1 -> Caso esteja vazia
    0 -> Caso contrario
    */

int insere_inicio(lista_vet_circ *l, int elemento);
    /*
    int insere_inicio(lista_vet_circ *l, int elemento)

    Funcao que insere um elemento no inicio de uma lista em vetor circular

    Parametros:

    lista_vet_circ *l -> Ponteiro para a lista em vetor circular
    int elemento -> Elemento que se deseja colocar

    Retornos:

    1 -> Caso seja bem-sucedida
    0 -> Caso contrario
    */


int insere_final(lista_vet_circ *l, int elemento);

    /*
    int insere_final(lista_vet_circ *l, int elemento)

    Funcao que insere um elemento no final de uma lista em vetor circular

    Parametros:

    lista_vet_circ *l -> Ponteiro para a lista em vetor circular
    int elemento -> Elemento que se deseja colocar

    Retornos:

    1 -> Caso seja bem-sucedida
    0 -> Caso contrario
    */

int remove_inicio(lista_vet_circ *l);

    /*
    int remove_inicio(lista_vet_circ *l)

    Funcao que remove o primeiro elemento de uma lista em vetor circular

    Parametros:

    lista_vet_circ *l -> Ponteiro para a lista em vetor circular

    Retornos:

    1 -> Caso seja bem-sucedida
    0 -> Caso contrario
    */

int remove_final(lista_vet_circ *l);

    /*
    int remove_final(lista_vet_circ *l)

    Funcao que remove o ultimo elemento de uma lista em vetor circular

    Parametros:

    lista_vet_circ *l -> Ponteiro para a lista em vetor circular

    Retornos:

    1 -> Caso seja bem-sucedida
    0 -> Caso contrario
    */

void esvaziar_lista(lista_vet_circ *l);

    /*
    void esvaziar_lista(lista_vec_circ *l)

    Funcao que esvazia uma lista circular l

    Parametros:

    lista_vec_circ *l -> Ponteiro para uma lista circular l

    Retorno:

    A funcao nao possui retorno
    */

int tamanho(lista_vet_circ *l);

    /*
    int tamanho(lista_vet_circ *l)

    Funcao que calcula o tamanho de uma lista circular em vetor l

    Parametros:

    lista_vet_circ *l -> Ponteiro para uma lista em vetor circular

    Retornos:

    A funcao retorna o tamanho da lista em vetor passado como parametro
    */

void mostrar_lista(lista_vet_circ *l);
    /*
    void mostar_lista(lista_vet_circ *l)\

    Imprime na saida padrao todos os elementos de uma lista circular em vetor l

    Parametros:

    lista_vet_circ *l -> Ponteiro para uma lista circular em vetor l
    */

#endif