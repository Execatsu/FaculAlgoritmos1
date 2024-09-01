#include <stdio.h>

// Exercicio 4 - Trabalhando com Structs
// Definir uma estrutura para armazenar informações
// de um aluno (nome, idade, nota) e criar um
// programa que leia essas informações para 3
// alunos e as exiba na tela

struct aluno {
    char nome[20];
    int idade;
    double nota;
};
    
void main() {
    struct aluno a1, a2, a3;
    
    printf("Qual o nome, idade e nota do aluno 1: ");
    scanf("%s %i %f", a1.nome, a1.idade, a1.nota);
    
    printf("Qual o nome, idade e nota do aluno 2: ");
    scanf("%s %i %f", a2.nome, a2.idade, a2.nota);
    
    printf("Qual o nome, idade e nota do aluno 3: ");
    scanf("%s %i %f", a3.nome, a3.idade, a3.nota);
    
    printf("Imprimindo os alunos\n");  
    printf("Nome; Idade; Nota");
    printf("%s; %d; %f\n",a1.nome,a1.idade,a1.nota);  
    printf("%s; %d; %f\n",a2.nome,a2.idade,a2.nota);  
    printf("%s; %d; %f\n",a3.nome,a3.idade,a3.nota);  
}