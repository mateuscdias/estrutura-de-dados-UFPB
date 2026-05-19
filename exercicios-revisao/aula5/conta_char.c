/*
Exercício - Programa para contar a quantidade de caracteres de uma string.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 5.2
*/

#include <stdio.h>

int conta_char(char *str, char c){

    /*
    int conta_char(char *str, char c)

    Conta as ocorrencias de um caracter c dentro de uma string str

    Parametros:

    char *str -> String
    char c -> Caracter que se deseja contar dentro de uma string

    Retornos:

    A funcao retorna a quantidade de vezes que o caracter aparece na string
    */

    int i = 0;
    int ret = 0;

    while (str[i] != '\0'){
        
        if(str[i] == c){
            ret++;
        }
        i++;
    }
    
    return ret;
}

int main(void){

    char *str = "Minha String";
    int qtd = conta_char(str,'a');

    printf("A string %s tem %d chars %c\n",str,qtd,'a');

    return 0;
}