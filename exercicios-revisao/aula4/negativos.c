/*
Exercício - Função para calcular quantos numeros negativos estao em um vetor.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 08/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 3.1
*/

#include <stdio.h>
#define VEC_SIZE 10

int negativos(int n, float *vet){

    /*
    int negativos(int n, float *vet)

    Função que calcula quantos números negativos existem em um vetor de números reais.

    Parametros:

    int n -> Tamanho do vtor
    float *vet -> Vetor de numeros reais

    Retornos:

    A função retorna a quantidade de números negativos existem no vetor, caso o vetor seja inválido, retorna -1,
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

        if (vet[i] < 0){
            ret++;
        }
    }

    return ret;
}

int main(void){

    float vet[VEC_SIZE] = {1.5, 2.4, -1, -5.34, -8, 76 ,-2,1 ,2.3,2.45};
    int qtd = negativos(VEC_SIZE,vet);

    if(qtd == -1){
        printf("O vetor dado como entrada era invalido\n");
        return 1;
    }else if (qtd == -2)
    {
        printf("O parametro do tamanho do vetor dado como entrada era invalido\n");
        return 1;
    }
    

    printf("Quantidade de numeros negativos no vetor: %d\n",qtd);

    return 0;
}