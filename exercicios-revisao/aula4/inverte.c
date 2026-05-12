/*
Exercício - Função para inverter os elementos em um vetor.
Disciplina: Estrutura de Dados
Autor: Mateus Dias @mateuscdias
Realizado em: 11/05/2026
OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
Lucas Rangel, na Pág. 115, Q. 3.3
*/

#include <stdio.h>

void inverte(int n, int *vet){

    /*
    void inverte(int n, int *vet)

    Funcao que inverte um vetor de tamanho n e salva no vetor original

    Parametros:

    int n -> Tamanho do vetor
    int *vet -> Vetor

    Retorno:

    A funcao nao possui retorno
    */
   
    int i;
    int temp;
   
    if(n <= 0){
        return;
        }
        
        if (n == 1){
            return;
        }
    

    for(i = 0; i < n/2; i++){

        temp = vet[i];
        vet[i] = vet[n-i-1];
        vet[n-i-1] = temp;
    }

    return;
}

int main(void){

    int vet[5];
    int i;
    
    printf("vet = [");

    for(i = 0; i<5;i++){
        vet[i] = i+1;
        printf("%d, ",i);
    }
    printf("]\n");

    inverte(5,vet);

    printf("vet = [");

    for(i = 0; i<5;i++){
        printf("%d, ",vet[i]);
    }
    printf("]\n");

    return 0;
}