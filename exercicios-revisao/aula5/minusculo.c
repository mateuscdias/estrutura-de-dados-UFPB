/*
Exercício - Funcao que aloca a versao minuscula de uma string.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 5.3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *minusculo(char *str){
    /*
    char *minusculo(char *str)

    Funcao que retorna a versao minuscula de uma string

    Parametros:

    char *str -> string que se deseja obter a versao em minusculo

    Retornos:

    Caso nao ocorra erros -> Versao da string em minusculo
    Caso ocorra erros -> Retorna NULL
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

        if(str[i] >= 'A' && str[i] <= 'Z'){

            ret[i] = str[i] + 32;
        }else{
            ret[i] = str[i];
        }
    }

    ret[i] = '\0';


    return ret;
}

int main(void){

    char *str = "MiNhaStRing";
    char *min = minusculo(str);

    if(!min){
        printf("Houve um erro de alocacao da string\n");
    }else{
        
        printf("Versao de /%s/ em minusculo eh /%s/\n",str,min);
        free(min);
    }

    return 0;
}