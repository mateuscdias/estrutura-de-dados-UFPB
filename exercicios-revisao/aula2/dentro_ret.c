/*
Exercício - Função para verificar se um ponto está em um Retângulo.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 29/04/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 114, Q. 1.1
*/

#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){

    /*
    int dentro_ret(int x0, int y0, int x1, int y1, int x, int y)

    Verifica se um ponto (x,y) está em um retângulo de vértices inferior esquerdo v1(x0,y0) e superior direito (x1,y1)
    Retorna 1 caso esteja e 0 caso contrário.

    Parâmetros:

    int x0 -> Coordenada x do vértice inferior esquerdo do retângulo
    int y0 -> Coordenada y do vértice inferior esquerdo do retângulo
    int x1 -> Coordenada x do vértice superior direito do retângulo
    int y1 -> Coordenada y do vértice superior direito do retângulo
    int x -> Coordenada x do ponto que se quer verificar
    int y -> Coordenada y do ponto que se quer verificar
    */

    /*Lógica:
    
    Basta verificarmos se o ponto está entre x0 e x1 no eixo x e entre y0 e y1 no eixo y
    para determinarmos se o ponto pertence ou nao ao retangulo

    Para isso x0 <= x <= x1 e y0 <= y <= y1
    */

    if(x0 <= x && x <= x1 && y0 <= y && y <= y1){
        return 1;
    }else{
        return 0;
    }
}

int main(void){

    int x0 = 10, y0 = 20;
    int x1 = 30, y1 = 40;
    int x = 10,y = 20;

    int is_in = dentro_ret(x0,y0,x1,y1,x,y);

    if(is_in){
        printf("O ponto esta no retangulo\n");
    }else{
        printf("O ponto nao esta no retangulo\n");
    }
}