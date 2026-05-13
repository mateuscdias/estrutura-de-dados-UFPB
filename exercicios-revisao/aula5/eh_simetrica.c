/*
Exercício - Função para alocar matrizes estatica e dinamica, e avaliar se ela é simetrica.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 4.1
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAT 3

int **aloca_dinamica(int m, int n){

    /*
    int **aloca_dinamica(int m, int n)

    Aloca uma matriz de inteiros dinamicamente com m linhas e n colunas utilizando 
    a funcao malloc

    Parametros:

    int m -> Numero de linhas da matriz
    int n -> Numero de colunas da matriz

    Retorno:

    Caso a alocacao seja bem-sucedida, retornara um ponteiro para a matriz **p
    Caso contrário, retornara NULL
    */

    if(m <= 0){
        return NULL;
    }else if (n <= 0)
    {
        return NULL;
    }

    int **p;
    int i;

    p = (int**) malloc(m*sizeof(int*));

    if(!p){
        return NULL;
    }

    for(i = 0; i<m;i++){

        p[i] = (int*)malloc(n*sizeof(int));

        if(!p[i]){
            break;
        }
    }

    if(i<m){

        for(i = i-1; i >= 0; i--){

            free(p[i]);
        }

        free(p);

        return NULL;
    }

    return p;
    
}


void libera_dinamica(int **mat, int m){

    /*
    void libera_dinamica(int **matriz)

    Libera na memória, o espaço da matriz de m linhas
    alocada dinamicamente pela funcao cria_matriz

    Parametros:

    int **matriz -> Ponteiro para a matriz alocada dinamicamente
    int m -> O numero de linhas da matriz

    Retornos:

    A funcao nao possui retorno.
    */

    if(mat == NULL){
        return;
    }

    int i;

    for(i = 0; i<m;i++){
        free(mat[i]);
    }

    free(mat);

}

int dinamica_simetrica(int **mat){

    /*
    int dinamica_simetrica(int **m)

    Verifica se uma matriz quadrada alocada dinamicamente de tamanho TAM_MAT e simetrica.

    Parametros:

    int **mat = Matriz alocada dinamicamente

    Retornos:
    
    0 -> Caso nao seja simetrica
    1 -> Caso seja simetrica
    */

    if(!mat){
        return 0;
    }

    int i,j;

    for(i = 0; i<TAM_MAT;i++){

        for(j = 0; j<TAM_MAT;j++){

            if(mat[i][j] != mat[j][i]){
                return 0;
            }
        }
    }

    return 1;
}

int estatica_simetrica(int m[][TAM_MAT]){
 /*
    int estatica_simetrica(int **m)

    Verifica se uma matriz quadrada alocada estaticamente de tamanho TAM_MAT e simetrica.

    Parametros:

    int m[][TAM_VET] -> Matriz estatica

    Retornos:
    
    0 -> Caso nao seja simetrica
    1 -> Caso seja simetrica
    */

    int i,j;

    for(i = 0; i<TAM_MAT;i++){

        for(j = 0; j<TAM_MAT;j++){

            if(m[i][j] != m[j][i]){
                return 0;
            }
        }
    }

    return 1;
}

int main(void){

    int **mat_din = aloca_dinamica(TAM_MAT,TAM_MAT);
    int mat_est[TAM_MAT][TAM_MAT];

    for(int i = 0; i<TAM_MAT;i++){

        for(int j = 0; j < TAM_MAT; j++){

            if(i == j){
                mat_est[i][j] = 1;
                mat_din[i][j] = 0;
            }else{
                mat_din[i][j] = 1;
                mat_est[i][j] = 0;
            }
        }
    }

    int d = dinamica_simetrica(mat_din);
    int e = estatica_simetrica(mat_est);

    libera_dinamica(mat_din,TAM_MAT);

    if(d){
        printf("A matriz dinamica eh simetrica\n");
    }
    if (e) {
        printf("A matriz estatica eh simetrica\n");
    }
    
    return 0;
}