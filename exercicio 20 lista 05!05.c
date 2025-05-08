#include <stdio.h> // Biblioteca 

int main() { 
    float media, soma = 0.0, mediageral; 
    
    for (int i = 0; i < 5; i++) {//cria um lugar para cada aluno
        printf("Digite a média do aluno %d: ", i + 1);
        scanf("%f", &media);
        soma += media;//adiciona a media a soma da media total da sala
    }
    mediageral = soma / 5;//faz a conta da media geral da sala
    printf("Média geral da turma: %.1f\n", mediageral);
    return 0;
}