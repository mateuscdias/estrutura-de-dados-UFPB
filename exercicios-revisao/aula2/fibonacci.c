/*
Exercício - Função para calcular o n-ésimo termo da sequência de Fibonacci.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 29/04/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 114, Q. 1.3
*/
/* Para esse exercício, vamos fazer 2 funções, uma com passagem de valores por referência e outra por
cópia de valor*/

#include <stdio.h>

// Passagem por cópia de valor

int fib_valor(int n){

    /*
    int fib_valor(int n)

    Calcula o valor do termo na posição fornecida n da sequência de Fibonacci
    
    Parâmetros:
        int n -> Posição do termo que queremos calcular da sequência de Fibonacci
    */

    int a,b,temp; // Valores que iremos utilizar para calcular Fibonacci.
    // temp servirá de apoio para calcularmos o Fibonacci e podermos atualizar os valores
    // Casos Base (Já definidos em Fibonacci)
    if(n == 1 || n == 2){
        return 1;
    }

    // Inicializando as variaveis:
    a = 1;
    b = 1;

    /*
    Lógica:

    temp guardará o valor atual de a
    a será atualizado para a soma de a e b
    b passará a guardar o valor salvo em temp
    ao concluir o loop, retornaremos a, que contém o termo atual de Fibonacci
    */

    for(int i = 3; i<=n;i++){

        temp = a;
        a = a + b;
        b = temp;

    }

    return a;
}

void fib_ref(int n, int *save){
    /*
    int fib_ref(int n, int *save)

    Calcula o valor do termo na posição fornecida n da sequência de Fibonacci e salva no endereço da variável fornecido,
    não tendo assim, retorno.
    
    Parâmetros:
        int n -> Posição do termo que queremos calcular da sequência de Fibonacci
        int *save -> Endereço da memória que queremos salvar o resultado
    */

    int a,b,temp; // Valores que iremos utilizar para calcular Fibonacci.
    // temp servirá de apoio para calcularmos o Fibonacci e podermos atualizar os valores
    // Casos Base (Já definidos em Fibonacci)
    if(n == 1 || n == 2){
        *save = 1;
        return; // Para saida da funcao
    }

    // Inicializando as variaveis:
    a = 1;
    b = 1;

    /*
    Lógica:

    temp guardará o valor atual de a
    a será atualizado para a soma de a e b
    b passará a guardar o valor salvo em temp
    ao concluir o loop, salvaremos no endereco fornecido, o resultado das operacoes
    */

    for(int i = 3; i<=n;i++){

        temp = a;
        a = a + b;
        b = temp;

    }

    *save = a;
    return; // Saida da funcao
}
int main(void){

    int n = 16;
    int fib_v, fib_p;

    fib_v = fib_valor(n);
    printf("Por copia de valor: fib(%d) = %d\n",n,fib_v);
    fib_ref(n,&fib_p);
    printf("Por referencia: fib(%d) = %d\n",n,fib_p);

    return 0;
}

