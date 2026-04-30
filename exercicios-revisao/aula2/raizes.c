    /*
    Exercício - Função para determinar raizes de uma funcao quadratica.
    Disciplina: Estrutura de Dados
    Autor: Mateus Dias @mateuscdias
    Realizado em: 29/04/2026
    OBS.: O presente exercício faz parte do Livro "Introdução à Estrutura de Dados", de Waldemar Celes, Renato Cerqueira e José
    Lucas Rangel, na Pág. 115, Q. 2.1
    */

    #include <stdio.h>
    #include <math.h>

    int raizes(float a, float b, float c, float *x1, float *x2){

        /*
        int raizes(float a, float b, float c, float *x1, float *x2)
        
        Calcula as raizes de uma funcao quadratica e as salva em variáveis passadas por referência
        As raízes são calculadas pela fórmula de Bhaskara para uma funcao do formato:

        f(x) = ax²+bx+c, onde a,b,c são parametros reais

        A função retorna:
        -1 -> Caso não existam raizes reais
        0 -> Caso exista apenas uma raiz
        1 -> Caso existam as 2 raizes
        2 -> Caso ocorra algum erro durante a execucao

        Caso exista apenas uma raiz, ambas as variáveis receberão as raizes, sendo o retorno da funcao
        o principal indicador sera o retorno da funcao

        Parametros:

        float a -> Coeficiente do termo elevado ao quadrado
        float b -> Coeficiente do termo de grau 1
        float c -> Termo independente da funcao
        float *x1,*x2 -> Enderecos de memoria (ponteiros) para as variaveis onde serao salvas as raizes
        */

        // Erro -> a=0, pois teremos uma divisao por zero

        if (a == 0){
            return 2;
        }
        float delta; // Delta guardará o valor do discriminante, que determinará se a funcao admite raizes reais

        delta = b*b - 4*a*c; // Expressao para delta

        if (delta < 0){
            return -1; // Nesse caso, a funcao nao admite valores reais
        }else if (delta == 0)
        {
            *x1 = *x2 = -b/(2*a); // Nesse caso, a funcao admite somente 1 raiz real, e conforme dito na documentacao
            // Ambas as variaveis receberao o mesmo valor e o retorno indicara que as raizes sao iguais
            return 0;
        }else{

            *x1 = (-b + sqrt(delta))/(2*a);
            *x2 = (-b - sqrt(delta))/(2*a);

            return 1;
        }

    }

    int main(void){

        float x1,x2;
        float a = 1.0f ,b = 2.0f, c = -3.0f;

        raizes(a,b,c,&x1,&x2);

        printf("As raizes de %.3fx² + %.3fx + %.3f sao x1 = %.3f e x2 = %.3f\n",a,b,c,x1,x2);

        return 0;
    }