/*
Exercício - Função para calcular quantos numeros pares estao em um vetor.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 08/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 3.2
*/

#include <stdio.h>

#define VEC_SIZE 10

int pares(int n, int *vet){

    /*
    int pares(int n, float *vet)

    Função que calcula quantos números pares existem em um vetor de números inteiros.

    Parametros:

    int n -> Tamanho do vetor
    float *vet -> Vetor de numeros inteiros

    Retornos:

    A função retorna a quantidade de números pares existem no vetor, caso o vetor seja inválido, retorna -1,
    caso o parametro n seja passado incorretamente, o programa retorna -2
    */
   
    if(!vet){
        return -1;
    }
    if(n < 0){
        return -2;
    }

    int i;
    int ret = 0;

    for(i = 0; i<n;i++){

        if (vet[i] % 2 == 0){
            ret++;
        }
    }

    return ret;
}

int main(void){

    int vec[VEC_SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int qtd = pares(VEC_SIZE,vec);

    if(qtd == -1){
        printf("O vetor dado como entrada era invalido\n");
        return 1;
    }else if (qtd == -2)
    {
        printf("O parametro do tamanho do vetor dado como entrada era invalido\n");
        return 1;
    }

    printf("A quantidade de numeros pares no vetor vec eh: %d\n",qtd);

    return 0;
}