/*
Exercício - Funcao que desloca todos os caracteres de uma string uma casa para a direita.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 5.6
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *roda_string(char *str){
    /*
    char *roda_string(char *str)

    Funcao que desloca todos os caracteres de uma string uma casa para a direita.

    Parametros:

    char *str -> String na qual se deseja realizar a operacao

    Retornos:

    A funcao retorna uma string alocada dinamicamente apos a operacao
    NULL -> Caso contrario
    */

    if(!str){
        return NULL;
    }

    int len = strlen(str);

    if(len == 0){
        return NULL;
    }
    
    int i;
    char *ret = (char*)malloc((len+1)*sizeof(char));
    
    if(!ret){
        return NULL;
    }

    for(i = 0; i < len;i++){
        ret[(i + 1 + len) % len] = str[i];
    }
    ret[i] = '\0';

    return ret;
}

int main(void){

    char *str = "casa";
    char *ret = roda_string(str);

    if(!ret){
        printf("Houve um erro na alocacao do retorno");
    }else{
        printf("A string /%s/ apos deslocar eh /%s/\n",str,ret);
    }

    free(ret);
    return 0;
}