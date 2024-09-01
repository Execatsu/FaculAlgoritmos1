#include <stdio.h>
#include <string.h>

// Exercicio 5 - Manipulando Strings
// Crie um programa que leia duas Strings, compare-as,
// e exiba se são iguais ou diferentes

void main() {
    //Declaração das variáveis dque armazenam as palavras
    char palavra1[40] = "";
    char palavra2[40] = "";

    //Pergunta ao usuário a primeira palavra e salva em palavra1
    printf("Escreva a primeira palavra: ");
    scanf("%s", palavra1);
    
    //Pergunta ao usuário a segunda palavra e salva em palavra2
    printf("Escreva a segunda palavra: ");
    scanf("%s", palavra2);
    
    //strcmp (String Compare), compara as duas strings e cado sejam iguais retorna 0
    //Logo se 0 == 0 imprime que são iguais, caso contrário imprime que são diferentes
    if(strcmp(palavra1, palavra2) == 0) {
        printf("As palavras são iguais!");
    } else {
        printf("As palavras são diferentes!");
    }
}