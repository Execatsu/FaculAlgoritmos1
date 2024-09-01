#include <stdio.h>

// Exercicio 3 - Arrays Multidimensionais
// Crie um programa que inicializa uma matriz 3x3 com
// valores inteiro e imprima a matriz na tela, bem
// como a soma de todos os seus elementos.

void main() {
    //Declara a matriz
    int mtz[3][3]; 
    
    //Pede para que o usuário informe os valores das tabelas
    printf("Preencha todos os campos da tabela:\n");
    for (int i = 0; i < 3; i++) { //Percorre as linhas
        for (int j = 0; j < 3; j++) { //Percorre as colunas
            printf("Dado posicionado em [%i][%i]: ", i, j); //Mostra qual dado o usuário esta populando
            scanf ("%d", &mtz[i][j]); //Permite usuario escrever
        }
    }
    
    //Informa os dados da tabela ao usuário
    printf("Sua tabela ficou assim:\n");
    for (int i = 0; i < 3; i++) { //Percorre as linhas
        for (int j = 0; j < 3; j++) { //Percorre as colunas
            printf ("%d ", mtz[i][j]); //Imprime o valor no console
        }
        printf("\n"); //Quebra linha no final da impressão e cada linha
    }
}