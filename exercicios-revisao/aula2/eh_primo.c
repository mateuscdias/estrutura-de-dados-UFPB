/*
Exercício - Função para verificar se um numero é primo.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 29/04/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 114, Q. 1.2
*/

#include <stdio.h>

int primo(int n){

    /*
        int primo(int n)

        Determina se um ponto é primo, por meio do método de determinação de primos, que diz que um número é primo
        caso não haja divisores diferentes de 1 e menores ou iguais à sua raiz quadrada.

        Retorna 1 caso seja primo e 0 caso não seja primo

        parametros:

        int n -> Numero que queremos determinar se é primo 
    */

    if(n <= 0 || n == 1){
        return 0;
    }

    for(int i = 2; i*i <= n;i++){

        if( n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(void){

    int n = 13;
    int eh_primo = primo(n);

    if(eh_primo){

        printf("%d eh primo\n",n);
    }else{
        printf("%d nao eh primo\n",n);
    }

    return 0;
}