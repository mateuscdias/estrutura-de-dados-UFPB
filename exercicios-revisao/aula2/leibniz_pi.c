/*
Exercício - Função para aproximar pi utilizando a fórmula de Leibniz.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 29/04/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 1.5
*/

#include <stdio.h>

double leibniz_pi(int n){

    /*
    double leibniz_pi(int n)

    Aproxima o valor de pi utilizando a fórmula de Leibniz e retorna o valor calculado,
    Caso os parametros sejam inválidos, retorna -1
    A Fórmula de Leibniz é dada por

    pi = 4*(1-1/3+1/5+...(-1)**i/(2*i+1))

    Parametros:

    int n -> O limite do somatório da fórmula

    */

    // Casos especiais e erro dos parametros
    int i = 0;
    double pi = 0;

    if(n < 0){
        return -1;
    }

    for(i = 0; i<=n;i++){

        if(i % 2 == 0){
            pi += 1.0/(2*i + 1);
        }else{
            pi += -1.0/(2*i+1);
        }
    }

    pi *= 4;

    return pi;
}

int main(void){

    double pi = leibniz_pi(10000000);

    printf("pi approx = %lf\n",pi);

    return 0;
}