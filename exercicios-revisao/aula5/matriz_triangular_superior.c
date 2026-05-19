/*
Exercício - Programa para armazenar matrizes triangulares superiores economizando memoria.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 4.3
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **cria_matriz(int m){

    /*
    int **cria_matriz(int m, int n)

    Cria uma matriz triangular superior de tamanho mxm  alocada dinamicamente
    de maneira a economizar a memoria.

    Vale ressaltar que toda matriz triangular é quadrada.

    Parametros:

    int m -> Numero de linhas e colunas 

    Retorno:

    NULL -> Caso tenha ocorrido algum erro;
    **p -> Matriz alocada dinamicamente
    */

    int **p;
    p = (int **)malloc(m*sizeof(int*));

    if(!p){
        return NULL;
    }

    int i;

    for(i = 0; i<m;i++){

        p[i] = (int*) malloc((m-i)*sizeof(int));

        if(!p[i]){
            break;
        }

    }

    if(i < m){

        for(int j = i-1; j >= 0; j--){
            free(p[j]);
        }

        free(p);

        return NULL;
    }

    return p;
}

int libera_matriz(int **p, int m){

    /*
    int libera_matriz(int **p, int m)

    Libera uma matriz triangular superior alocada dinamicamente pela funcao cria_matriz

    Parametros:

    int **p -> Ponteiro para a matriz alocada dinamicamente
    int m -> Numero de linhas e colunas da matriz

    Retornos:

    0 -> Caso um parametro passado esteja incorreto
    1 -> Caso a matriz tenha sido liberada com sucesso.
    */

    if(m <= 0 || !p){
        return 0;
    }
    int i;

    for(i = 0; i<m; i++){

        free(p[i]);
    }

    free(p);

    return 1;
}

int preenche_matriz(int **p, int m){

    /*
    int preenche_matriz(int **p, int m)

    Preenche uma matriz triangular superior alocada dinamicamente com valores aleatorios

    Parametros:

    int **p -> Ponteiro para a matriz alocada dinamicamente
    int m -> Numero de linhas e colunas da matriz

    Retornos:

    1 -> Caso a matriz tenha sido preenchida com sucesso
    0 -> Caso contrario
    */

    srand(time(NULL));

    if(m <= 0 || !p){
        return 0;
    }

    int i,j;

    for(i = 0; i<m;i++){
        for(j = 0 ; j < m-i; j++){

            p[i][j] = rand() % 100;
        }
    }

    return 1;
}

int acessa(int **p, int m, int i, int j){

    /*
    int acessa(int **p, int m, int i, int j)

    Acessa o elemento de uma matriz triangular superior alocada dinamicamente utilizando
    cria_matriz

    Parametros:

    int **p -> Ponteiro para a matriz alocada dinamicamente
    int m -> Numero de linhas da matriz
    int i -> Indice da linha na qual se deseja acessar
    int j -> Indice da coluna na qual se deseja acessar

    Retorno:

    Caso nao ocorra erros, a funcao retorna o elemento na posicao p[i][j]
    */

    if(i < 0 || j < 0 || !p || m <= 0 || i >= m || j >= m){
        printf("Nao foi possivel acessar\n");
        return 0;
    }

    if(j < i){
        return 0;
    }

    return p[i][j-i];
}

int main(void){

    int tam = 5;
    int **p = cria_matriz(tam);
    int i,j,preenc;

    if(p){

        preenc = preenche_matriz(p,tam);

        if(preenc){

            for(i = 0; i<tam;i++){

                printf("Linha %d: ",i+1);

                for(j = 0; j<tam;j++){

                    printf("%d ",acessa(p,tam,i,j));
                }

                printf("\n");
            }

        }
        libera_matriz(p,tam);
    }

    return 0;
}