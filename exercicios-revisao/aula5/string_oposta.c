/*
Exercício - Funcao que substitui todas as letras de uma string por suas opostas no alfabeto.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 5.5
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *string_oposta(char *str){

    /*
    char *string_oposta(char *str)

    Funcao que retorna uma string onde cada letra da string original e substituida por sua oposta no alfabeto

    Parametros:

    char *str -> String na qual se deseja realizar a operacao

    Retornos:

    NULL -> Caso haja algum erro
    String alocada dinamicamente com a versao da string original apos a operacao
    */

    if(!str){
        return NULL;
    }

    int len = strlen(str);
    int i;
    char *ret = (char *) malloc((len+1)*sizeof(char));

    if(!ret){
        return NULL;
    }

    for(i = 0; i < len; i++){

        if(str[i] >= 'A' && str[i] <= 'Z'){
            ret[i] = 'Z' - (str[i] - 'A');

        } else if(str[i] >= 'a' && str[i] <= 'z'){
            ret[i] = 'z' - (str[i] - 'a');
        }else{
            ret[i] = str[i];
        }
    }

    ret[i] = '\0';

    return ret;
}

int main(void){

    char *str = "ABCDefgh";
    char *ret = string_oposta(str);

    printf("a string oposta de /%s/ eh /%s/\n",str,ret);

    free(ret);

    return 0;
}