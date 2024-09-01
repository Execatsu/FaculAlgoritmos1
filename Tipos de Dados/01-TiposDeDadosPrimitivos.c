#include <stdio.h>

// Exercicio 1 - Tipos de dados primitivos
// Crie um programa que declare variáveis dos tipos
// int, float, char e double, inicialize-as com
// valores e imprima esses valores na tela.

void main() {

    //Declaração de todos as variaveis
    char alfanumerico = 'A';
    int inteiro = 0;
    float decimalMenor = 2.01f;
    double decimalMaior = 4.02;
    
    //Imprimindo todas as variaveis declaradas
    printf("%i\n", inteiro);
    printf("%c\n", alfanumerico);
    printf("%.2f\n", decimalMenor);
    printf("%.2f\n", decimalMaior);
}