/*
Exercício - Função para calcular superficie e volume de uma esfera.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 29/04/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 2.2
*/

#include <stdio.h>

// Vamos definir o macro PI para calcularmos os valores e deixa-lo como float usando o F ao final do numero

#define PI 3.1415F

int calc_esfera(float r, float *area, float *volume){

    /*
    void calc_esfera(float r, float *area, float *volume)

    Calcula a área de superfície e o volume de uma esfera dado um raio fornecido R,
    utilizando as seguintes formulas:

    A = 4*pi*r*r
    V = (4.0/3)*pi*r*r*r
    Os resultados serão salvos nas variaveis:
    
    *area (Area da superficie) e *volume (Volume da esfera)

    Parametros:

    float r -> Raio da esfera
    float *area -> Ponteiro para a variavel que guardara o valor da area da superficie
    float *volume -> Ponteiro para a variavel que guardara o valor do volume da esfera

    Retornos:

    -1 -> Caso encontre algum erro (entradas invalidas, erro de divisao, etc.)
    1 -> Caso o volume e a area possam ser calculados normalmente
    */

    // ERRO: O raio deve sempre ser positivo, pois é uma medida
    if(r <= 0){

        return -1;
    }

    *area = 4*PI*r*r;
    *volume = (4.0/3)*PI*r*r*r;

    return 1;

}

int main(void){

    float a,v,r;

    r = 5.5;

    int ret = calc_esfera(r,&a,&v);

    if(ret == 1){
        printf("A area da esfera eh A = %.4f e o volume eh V = %.4f\n",a,v);
    }else{
        printf("O valor de r = %.4f eh invalido, ele deve ser sempre positivo\n",r);
    }
}