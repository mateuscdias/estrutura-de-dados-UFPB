/*
Exercício - Gerador de Tabela ASCII
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 29/04/2026
*/

#include <stdio.h>

int main(void){

    short int i = 0; // short int, para evitar o overflow que ocorre com o tipo 'char'

    printf("Tabela ASCII\n"); // explicações acerca da organização e layout de impressão
    printf("ORGANIZAÇÃO:  Indice -> Caractere\n");

    for(i = 0; i<256;i++){ // loop de impressão

        printf("%d -> %c\n",i,i); // Realiza a impressão em inteiro %d e depois o seu caracter associado (char) em %c
    }

    return 0;
}