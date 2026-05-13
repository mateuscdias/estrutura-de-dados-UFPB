/*
Exercício - Função para achar os coeficientes da derivada de um polinomio através de um vetor.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 12/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 3.5
*/

#include <stdio.h>

void deriva(double *poli, int grau, double *out){

    /*
    double deriva(double *poli, int grau, double* out)

    Calcula o valor dos coeficientes da derivadade um polinômio simples de grau n, 
    cujos coeficientes foram repassados através de um vetor de numeros reais *poli

    Parametros:

    double *poli -> Vetor com os coeficientes ordenado da seguinte maneira [coef. menor grau -> coef. maior grau]
    OBS.: Um polinomio de grau n tem n+1 coeficientes
    int grau -> Grau do polinomio
    double* out -> Vetor de tamanho igual ao grau, onde serao armazenados os coeficientes da derivada

    Retornos:

    Nao possui retorno
    */

    if(!poli){
        return;
    }

    if(!out){
        return;
    }

    if(grau <= 0){
        return;
    }

    int i;

    // Como a derivada do termo independente é zero, iremos iniciar do coeficiente do x.

    for(i = 1; i<= grau;i++){

        out[i-1] = poli[i]*i;
    }
}

int main(void){

    double poli[3] = {1,3,2};
    int grau = 2;
    double out[2];

    deriva(poli,grau,out);

    printf("Coef da derivada eh: [%.2lf, %.2lf]\n",out[0],out[1]);

    return 0;
}
