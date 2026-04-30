/*
Exercício - Função para soma dos n primeiros numeros impares.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 29/04/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q 1.5
*/

#include <stdio.h>

int soma_impares(int n){

    /*
    int soma_impares(int n)

    Calcula a soma dos n primeiros números ímpares e retorna o valor da soma
    Retorna -1 caso os parâmetros fornecidos sejam inválidos

    Parametros:

    int n -> Limite de posição da soma

    */

    // Casos especiais e erros (parametro n invalido)

    if (n <= 0){

        return -1;
    }

    int s = 0;

    for(int i = 1; i<=n;i++){
        s += 2*i-1; // Calcula o numero impar usando a formula 2n-1, onde n sera o nosso contador i
    }

    return s;
}

int main(void){

    int n = 7;
    int s = soma_impares(n);

    printf("A soma dos %d numeros impares eh: %d\n",n,s);
}