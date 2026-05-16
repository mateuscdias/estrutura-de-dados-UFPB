/*
Implementação da estrutura de dados Lista em Vetor Circular e funções auxiliares para a sua utilização.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
*/

#include <stdio.h>
#include "listavetorcircular.h"

void inicia_lista_circ(lista_vet_circ *l){

    /*
    void inicia_lista_circ(lista_vet_circ *l)

    Inicia uma lista em vetor circular vazia, inicializando os ponteiros de inicio e final como -1

    Parametros:

    lista_vet_circ *l -> Ponteiro para a lista em vetor circular

    Retornos:

    A lista nao possui retorno
    */

    l -> ctrf = -1;
    l -> ctri = -1;

}

int eh_vazia(lista_vet_circ *l){

    
    /* 
    int eh_cheia(lista_vet_circ *l)

    Funcao que verifica se uma lista em vetor circular esta cheia

    Parametros:

    lista_vet_circ *l -> Ponteiro para uma lista em vetor circular

    Retornos:

    1 -> Caso esteja cheia
    0 -> Caso contrario
    */


    if(l -> ctrf == -1 || l -> ctri == -1){
        return 1;
    }

    return 0;
}

int eh_cheia(lista_vet_circ *l){

    /* 
    int eh_cheia(lista_vet_circ *l)

    Funcao que verifica se uma lista em vetor circular esta cheia

    Parametros:

    lista_vet_circ *l -> Ponteiro para uma lista em vetor circular

    Retornos:

    1 -> Caso esteja cheia
    0 -> Caso contrario
    */

    if(l->ctrf + 1 % MAX_VETOR == l->ctri){
        return 1;
    }

    return 0;
}

int insere_inicio(lista_vet_circ *l, int elemento){

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

    if(eh_cheia(l)){
        return 0;
    }

    if(eh_vazia(l)){

        l -> v[0] = elemento;
        l -> ctrf = 0;
        l -> ctri = 0;

        return 1;
    }

    l -> v[(l->ctri - 1 + MAX_VETOR) % MAX_VETOR] = elemento;
    l -> ctri = (l->ctri - 1 + MAX_VETOR) % MAX_VETOR;

    return 1;

}

int insere_final(lista_vet_circ *l, int elemento){

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

    if(eh_cheia(l)){

        return 0;
    }

    if(eh_vazia(l)){

        l -> v[0] = elemento;
        l -> ctri = elemento;
        l -> ctrf = elemento;

        return 1;
    }

    l -> v[(l-> ctrf + 1 + MAX_VETOR) % MAX_VETOR] = elemento;
    l -> ctrf = (l-> ctrf + 1 + MAX_VETOR) % MAX_VETOR;

    return 1;
}

int remove_inicio(lista_vet_circ *l){

    /*
    int remove_inicio(lista_vet_circ *l)

    Funcao que remove o primeiro elemento de uma lista em vetor circular

    Parametros:

    lista_vet_circ *l -> Ponteiro para a lista em vetor circular

    Retornos:

    1 -> Caso seja bem-sucedida
    0 -> Caso contrario
    */


    if(eh_vazia(l)){
        return 0;
    }

    l -> ctri = (l->ctri + 1 + MAX_VETOR) % MAX_VETOR;

    return 1;

}

int remove_final(lista_vet_circ *l){

    /*
    int remove_final(lista_vet_circ *l)

    Funcao que remove o ultimo elemento de uma lista em vetor circular

    Parametros:

    lista_vet_circ *l -> Ponteiro para a lista em vetor circular

    Retornos:

    1 -> Caso seja bem-sucedida
    0 -> Caso contrario
    */

    if(eh_vazia(l)){
        return 0;
    }

    l -> ctrf = (l->ctrf - 1 + MAX_VETOR) % MAX_VETOR;

    return 1;
    
}

void esvaziar_lista(lista_vet_circ *l){

    /*
    void esvaziar_lista(lista_vec_circ *l)

    Funcao que esvazia uma lista circular l

    Parametros:

    lista_vec_circ *l -> Ponteiro para uma lista circular l

    Retorno:

    A funcao nao possui retorno
    */
    
    l -> ctrf = -1;
    l -> ctri = -1;
}

int tamanho(lista_vet_circ *l){

    /*
    int tamanho(lista_vet_circ *l)

    Funcao que calcula o tamanho de uma lista circular em vetor l

    Parametros:

    lista_vet_circ *l -> Ponteiro para uma lista em vetor circular

    Retornos:

    A funcao retorna o tamanho da lista em vetor passado como parametro
    */

    if(eh_cheia(l)){
        return MAX_VETOR;
    }

    if(eh_vazia(l)){
        return 0;
    }

    int i = l->ctri;
    int tam = 1;

    while(i != l->ctrf){
        
        i = (i + 1 + MAX_VETOR) % MAX_VETOR;
        tam++;
    }

    return tam;
}

void mostrar_lista(lista_vet_circ *l){
    /*
    void mostar_lista(lista_vet_circ *l)\

    Imprime na saida padrao todos os elementos de uma lista circular em vetor l

    Parametros:

    lista_vet_circ *l -> Ponteiro para uma lista circular em vetor l
    */

    printf("[");

    int i;

    for(i = 0; i<tamanho(l);i++){
        printf("%d, ", l->v[(l->ctri + i + MAX_VETOR) % MAX_VETOR]);
    }

    printf("]\n");
}