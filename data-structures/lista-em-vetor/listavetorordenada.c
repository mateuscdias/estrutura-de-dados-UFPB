/*
Implementação da estrutura de dados Lista em Vetor Ordenada e funções auxiliares para a sua utilização.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
*/

#include <stdio.h>
#include "listavetorordenada.h"

void inicia_lista(lista_vet_ord *l){

    /*

    void inicia_lista(lista_vet_ord *l)
    Inicia uma lista em vetor ordenada vazia.

    Parametros:
    lista_vet_ord *l -> Ponteiro para uma lista em vetor ordenada

    Retornos:
    A funcao nao possui retornos
    */

    l -> ctr = -1;
}

void esvazia_lista(lista_vet_ord *l){

    /*

    void esvazia_lista(lista_vet_ord *l)
    Esvazia uma lista em vetor ordenada vazia.

    Parametros:
    lista_vet_ord *l -> Ponteiro para uma lista em vetor ordenada

    Retornos:
    A funcao nao possui retornos
    */

    l -> ctr = -1;
}

int eh_cheia(lista_vet_ord *l){

    /*
    int eh_cheia(lista_vet_ord *l)
    Verifica se uma lista ordenada está cheia 

    Parametros:
    lista_vet_ord *l -> Ponteiro para uma lista em vetor ordenada

    Retornos:
    1 -> Caso a lista esteja cheia
    0 -> Caso nao esteja
    */

    if(l -> ctr == MAX_VETOR-1){
        return 1;
    }

    return 0;
}

int eh_vazia(lista_vet_ord *l){

    /*
    int eh_vazia(lista_vet_ord *l)
    Verifica se uma lista ordenada está vazia 

    Parametros:
    lista_vet_ord *l -> Ponteiro para uma lista em vetor ordenada

    Retornos:
    1 -> Caso a lista esteja vazia
    0 -> Caso nao esteja
    */

    if(l -> ctr == -1){
        return 1;
    }

    return 0;
}

int insere(lista_vet_ord *l, int elemento){

    /*
    int insere(lista_vet_ord *l)
    Insere um elemento em uma lista em vetor ordenada numericamente
    
    Parametros:

    lista_vet_ord *l -> Ponteiro para uma lista em vetor ordenada
    int elemento -> Elemento o qual se deseja inserir

    Retornos:

    1 -> Caso a operacao tenha sido bem sucedida
    0 -> Caso contrario
    */

    if(eh_cheia(l)){
        return 0;
    }

    if(eh_vazia(l)){
        l->v[0] = elemento;
        l -> ctr = 0;
        return 1;
    }

    int i;

    for(i = 0; i <= l->ctr; i++){

        if(elemento <= l->v[i]){
            break;
        }
    }

    // Shift + insercao dos elementos

    for(int j = l->ctr; j >= i; j--){

        l->v[j+1] = l-> v[j]; // Shift dos elementos para a direita
    }

    l -> v[i] = elemento;
    l->ctr++;
    return 1;
}
