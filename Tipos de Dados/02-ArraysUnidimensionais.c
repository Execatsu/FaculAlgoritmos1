#include <stdio.h>

// Exercicio 2 - Arrays Unidimensionais
// Crie um programa que leia 6 números inteiros de
// um array, calcule a média dos números e exiba o
// maior e o menor número.

void main() {
    
    //Declara todas as variaveis a serem usadas no programa
    int n1, n2, n3, n4, n5, n6;
    
    //Faz a pergunta e popula cada variavel numérica
    printf("Escreva 6 números inteiro (que não contem virgula ou ponto):");
    scanf("%i %i %i %i %i %i", &n1, &n2, &n3, &n4, &n5, &n6);
    
    //Declara e popula o array com os números digitados pelo usuário
    int array[] = {n1, n2, n3, n4, n5, n6};
    
    // Técnica usada para adquirir tamanho do array, sizeof traz o tamanho em bits
    // do array, e o outro traz o tamanho de um elemento, fazendo a divisão do
    // tamanho de todos os bits do array por um unico elemento retornando seu tamanho
    int tamanho = sizeof(array) / sizeof(array[0]);
    
    //Salva o primeiro elemento como menor número
    int menor = array[0];
    
    //Salva o primeiro elemento como maior número
    int maior = array[0];
    
    //Cria variavel para somar todos os números
    int soma = 0;
    
    for (int i = 1; i < tamanho; i++) { //Percorre cada elemento do array
    
        if (array[i] < menor) { //Verifica se o elemento atual é menor que o salvo
            menor = array[i]; //Atualiza o menor número
        }
        
        else if (array[i] > maior) { //Verifica se o elemento atual é maior que o salvo
            maior = array[i]; //Atualiza o maior número
        }
        
        soma += array[i];
    }
    
    //Calcula e popula variavel média
    double media = soma / tamanho;
    
    //Imprime todos os resultados na tela
    printf("O menor número é: %d\n", menor);
    printf("O maior número é: %d\n", maior);
    printf("A media dos números é: %.2f\n", media);  
}
