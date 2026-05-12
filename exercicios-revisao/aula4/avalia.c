/*
Exercício - Função para avaliar um polinomio através de um vetor.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 3.4
*/

#include <stdio.h>
#include <math.h>

double avalia(double *poli, int grau, double x){

    /*
    double avalia(double *poli, int grau, double x)

    Avalia o valor de um polinômio simples de grau n, cujos coeficientes foram repassados através 
    de um vetor de numeros reais *poli

    Parametros:

    double *poli -> Vetor com os coeficientes ordenado da seguinte maneira [coef. menor grau -> coef. maior grau]
    OBS.: Um polinomio de grau n tem n+1 coeficientes
    int grau -> Grau do polinomio
    double x -> Valor em que o polinomio sera avaliado

    Retornos:

    A funcao retorna o valor do polinomio avaliado em x.
    */

    double ret = 0;
    int i;

    for(i = 0; i<=grau; i++){

        ret += poli[i]*pow(x,i);
    }

    return ret;
}

int main(void){

    double x = 2.0;
    double poli[3] = {1,3,2};
    int grau = 3;

    printf("P(%lf) = %lf\n",x,avalia(poli,grau,x));

    return 0;
}