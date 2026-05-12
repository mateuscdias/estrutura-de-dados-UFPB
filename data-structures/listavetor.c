/*
Implementação da estrutura de dados Lista em Vetor e funções auxiliares para a sua utilização.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
*/

#include "listavetor.h"
#include <stdio.h>

int insere_final(lista_vetor *l, int valor){

    /*
    int insere_final(lista_vetor *l)

    Funcao que insere um elemento no final de uma lista em vetor de inteiros, caso ela nao estiver cheia.

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor
    int valor -> Valor que deve ser adicionado na lista em vetor.
    
    Retornos:

    0 -> Caso a lista esteja cheia e nao seja possivel inserir o elemento no final
    1 -> Caso a operacao tenha sido um sucesso.
    */

    if(eh_cheia(l)){
        return 0;
    }

    l -> ctr += 1;
    l -> v[l -> ctr] = valor;

    return 1;
}

void esvaziar_lista(lista_vetor *l){

    /*
    int esvaziar_lista(lista_vetor *l)

    Funcao que esvazia uma lista em vetor l

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor

    Retornos:

    A funcao nao possui retornos
    */

    l -> ctr = -1;

    return;

}

void mostrar_lista(lista_vetor *l){

    /*
    void mostrar_lista(lista_vetor *l)

    Funcao que exibe todos os elementos e seus respectivos índices em uma lista em vetor

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor

    Retornos:

    A funcao nao possui retornos, ela exibe na I/O padrao os elementos da lista e seus indices, ou
    se a lista esta vazia (erro, pois ela nao possui elementos)
    */

    if(eh_vazia(l)){
        printf("Lista nao e capaz de ser exibida (esta vazia)\n");
    }

    int i;

    for(i = 0; i<= l->ctr;i++){
        
        printf("Indice %d -> %d\n", i, l->v[i]);
    }

}

int eh_cheia(lista_vetor *l){

    /*
    Função que mostra se uma lista em vetor está cheia ou não.

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor

    Retornos:

    1 -> Se a lista estiver cheia
    0 -> Se a lista não estiver cheia
    */
    if(l->ctr == MAX_VETOR-1){
        return 1;
    }

    return 0;
}

int eh_vazia(lista_vetor *l){

    /*
    Função que mostra se uma lista em vetor está vazia ou não.

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor

    Retornos:

    1 -> Se a lista estiver vazia
    0 -> Se a lista não estiver vazia (contiver pelo menos algum elemento)
    */
    
    if (l -> ctr == -1){
        
        return 1;
    }

    return 0;
}