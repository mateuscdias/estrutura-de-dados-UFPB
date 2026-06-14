/*
Biblioteca com a implementação da estrutura de dados Lista em Vetor e funções auxiliares para a sua utilização.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
*/


#ifndef LISTAVETOR_H
#define LISTAVETOR_H

#define MAX_VETOR 100

/*
lista_vetor -> Tipo definido pelo programador para salvar uma lista em vetor de inteiros.

Atributos:

int v[MAX_VETOR] -> Vetor da nossa lista que armazenara um maximo de MAX_VETOR inteiros.
int ctr -> Variavel para controle da lista em vetor
*/

typedef struct lista_vetor{

    int v[MAX_VETOR];
    int ctr;

} lista_vetor;



int eh_cheia(lista_vetor *l);
/*  
    int eh_cheia(lista_vetor *l)
    Função que mostra se uma lista em vetor de inteiros está cheia ou não.

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor de inteiros

    Retornos:

    1 -> Se a lista estiver cheia
    0 -> Se a lista não estiver cheia
    */

int eh_vazia(lista_vetor *l);

    /*
    Função que mostra se uma lista em vetor de inteiros está vazia ou não.

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor de inteiros

    Retornos:

    1 -> Se a lista estiver vazia
    0 -> Se a lista não estiver vazia (contiver pelo menos algum elemento)
    */

void mostrar_lista(lista_vetor *l);

    /*
    void mostrar_lista(lista_vetor *l)

    Funcao que exibe todos os elementos e seus respectivos índices em uma lista em vetor de inteiros

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor de inteiros

    Retornos:

    A funcao nao possui retornos, ela exibe na I/O padrao os elementos da lista e seus indices, ou
    se a lista esta vazia (erro, pois ela nao possui elementos)
    */

void esvaziar_lista(lista_vetor *l);

    /*
    int esvaziar_lista(lista_vetor *l)

    Funcao que esvazia uma lista em vetor de inteiros l 

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor de inteiros

    Retornos:

    A funcao nao possui retornos
    */

int insere_final(lista_vetor *l, int valor);

    /*
    int insere_final(lista_vetor *l)

    Funcao que insere um elemento no final de uma lista em vetor de inteiros, caso ela nao estiver cheia.

    Parametros:

    lista_vetor *l -> Ponteiro para uma lista em vetor de inteiros
    int valor -> Valor que deve ser adicionado na lista em vetor de inteiros.
    
    Retornos:

    0 -> Caso a lista esteja cheia e nao seja possivel inserir o elemento no final
    1 -> Caso a operacao tenha sido um sucesso.
    */
#endif