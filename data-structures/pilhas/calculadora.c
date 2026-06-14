#include <stdio.h>
#include <string.h>
#include "linkedstack.h"

int calculadora(char *str, float *res){

    if(!str || !res) return 0;

    int i = 0;
    int x,y;
    char c = str[i];
    Pilha *p = cria_pilha();

    while( '0' <= c && c <= '9'){

        push(p, c - '0');
        i++;
        c = str[i];
    }

    while(i < strlen(str)){

        switch (c){
        case '+':
            if(!pop(p, &x)) return 0;
            if(!pop(p, &y)) return 0;
            push(p, x+y);            
            break;
        case '-':
            if(!pop(p, &x)) return 0;
            if(!pop(p, &y)) return 0;
            push(p, x-y);
            break;          
        case '*':
            break;
        case '/':
            break;
        default:
            break;
        }
    }

}