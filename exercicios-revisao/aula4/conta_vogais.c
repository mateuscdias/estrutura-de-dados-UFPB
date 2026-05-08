/*
Exercício - Contagem de vogais de uma string local à main.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 08/05/2026
*/

#include <stdio.h>
#include <string.h>

int conta_vogais(char *str,int n){

    /*
    int conta_vogais(char *str, int n)

    Conta as vogais de um vetor de caracteres, ou uma string (vetor de caracteres que possui o caracter nulo
    '\0', indicando o seu final).

    Parametros:

    char *str -> Vetor de caracteres ou string que deseja calcular a quantidade de vogais
    int n -> Um inteiro que indique o tamanho do vetor.

    Retornos:

    Um inteiro representando a quantidade de vogais presentes na String
    */

    int i;
    int vog = 0;

    for(i = 0; i<n;i++){

        if (str[i] == 'A' || str[i] == 'a'){
            
            vog++;

        } else if (str[i] == 'E' || str[i] == 'e'){

            vog++;

        } else if (str[i] == 'I' || str[i] == 'i'){

            vog++;

        }else if (str[i] == 'O' || str[i] == 'o'){

            vog++;

        }else if (str[i] == 'U' || str[i] == 'u'){

            vog++;
        } 
    }

    return vog;
}

int main(void){

    char *str = "EsTruTURAdEDadOs";
    char vec[5] = {'E','O','D','f','u'};

    printf("vogais na string: %d\n",conta_vogais(str,strlen(str)));
    printf("vogais no vetor: %d\n",conta_vogais(vec,5));
}