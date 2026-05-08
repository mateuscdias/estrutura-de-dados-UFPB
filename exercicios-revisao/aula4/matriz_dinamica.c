/*
Exercício - Alocação de matrizes dinamicamente.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 08/05/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **cria_matriz(int m, int n){

    /*
    int **cria_matriz(int m, int n)

    Aloca uma matriz de inteiros dinamicamente com m linhas e n colunas utilizando 
    a funcao malloc

    Parametros:

    int m -> Numero de linhas da matriz
    int n -> Numero de colunas da matriz

    Retorno:

    Caso a alocacao seja bem-sucedida, retornara um ponteiro para a matriz **p
    Caso contrário, retornara NULL
    */

    int **p;

    p = (int **) malloc(m*sizeof(int*));

    if(!p){
        return NULL;
    }

    int i;

    for(i = 0; i<m; i++){

        p[i] = (int *) malloc(n*sizeof(int));

        if(!p[i]){
            break;
        }
    }

    if(i < m){

        for(i = i - 1; i >= 0; i--){

            free(p[i]);
        }

        free(p);
        return NULL;
    }

    return p;
}

void libera_matriz(int **matriz, int m){

    /*
    void libera_matriz(int **matriz)

    Libera na memória, o espaço da matriz de m linhas
    alocada dinamicamente pela funcao cria_matriz

    Parametros:

    int **matriz -> Ponteiro para a matriz alocada dinamicamente
    int m -> O numero de linhas da matriz

    Retornos:

    A funcao nao possui retorno.
    */

    if(matriz == NULL){
        return;
    }

    int i;

    for(i = 0; i<m;i++){

        free(matriz[i]);
    }

    free(matriz);
}

int main(void){

    srand(time(NULL));

    int m = 3;
    int n = 3;
    int i,j;
    int **matriz = cria_matriz(m,n);

    if(matriz == NULL){
        return 1;
    }

    // Preenchendo a matriz

    for(i = 0; i<m;i++){

        for(j = 0; j<n;j++){

            matriz[i][j] = rand() % 101;
        }
    }
    // Imprimindo
    for(i = 0; i<m;i++){

        for(j = 0; j<n;j++){

            printf("%d ",matriz[i][j]);
        }

        printf("\n");
    }

    libera_matriz(matriz,m);
    return 0;
}