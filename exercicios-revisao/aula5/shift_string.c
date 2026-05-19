/*
Exercício - Funcao que substitui todas as letras de uma string por suas sucessoras no alfabeto
(e z por a ou Z por A).
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 5.4
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *shift_string(char *str){

    /*
    char *shift_string(char *str){
    
    Funcao que retorna uma versao da string onde todas as letras sao substituidas por seus sucessores
    e Z por A ou z por a.

    Caracteres que nao sao letras permanecem inalterados.

    Parametros:

    char *str -> String na qual deseja realizar a operacao.

    Retornos:

    A funcao retorna a versao da string apos a operacao
    Caso ocorra um erro, a funcao retorna NULL
    */

    if(!str){
        return NULL;
    }

    int len = strlen(str);
    int i;
    char *ret = (char*) malloc((len+1)*sizeof(char));

    if(!ret){
        return NULL;
    }

    for(i = 0; i<len;i++){

        if(str[i] >= 'A' && str[i] < 'Z'){
            ret[i] = str[i] + 1;
        }else if (str[i] >= 'a' && str[i] < 'z'){
            ret[i] = str[i] + 1;
        }else if (str[i] == 'z'){
            ret[i] = 'a';
        }else if (str[i] == 'Z'){
            ret[i] = 'A';
        }else{
            ret[i] = str[i];
        }

        
    }

    ret[i] = '\0';

    return ret;
}

int main(void){

    char *str ="Casa";
    char *shift = shift_string(str);
    
    if(shift){
        printf("A versao shiftada de /%s/ eh /%s/\n",str,shift);
        free(shift);
    }else{
        printf("Nao foi possivel alocar a saida\n");
    }

    return 0;
}