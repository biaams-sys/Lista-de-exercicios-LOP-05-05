#include <stdio.h> 


struct Aluno {//cria estrutura com variaveis
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno aluno; //usa a estrutura aluno para criar os alunos
    float media;

    printf("Digite o nome do aluno: "); 
    scanf("%s", aluno.nome); 

    printf("Digite a nota 1: ");
    scanf("%f", &aluno.nota1); 

    printf("Digite a nota 2: ");
    scanf("%f", &aluno.nota2); 

    printf("Digite a nota 3: ");
    scanf("%f", &aluno.nota3); 

    // Cálculo da média das três notas
    media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3; //calcula a média

    printf("Média do aluno %s é: %.2f\n", aluno.nome, media);

 
    if (media >= 6.0) {
        printf("Aluno aprovado!\n"); 
    } else {
        printf("Aluno reprovado.\n"); 
        
    }

    return 0; 
}