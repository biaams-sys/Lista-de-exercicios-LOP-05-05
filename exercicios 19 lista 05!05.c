#include <stdio.h>

// cria a esturtura aluno com variaveis
typedef struct {
    char nome[15];  
    float media;
}
Aluno;

int main() {
    Aluno alunos[3];
    char nome_busca[15];
    int encontrado;
    char opcao;

   
    for (int i = 0; i < 3; i++) {
   
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

       
        printf("Digite a média do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].media);
    }
    do {
        encontrado = 0;
        printf("Digite o nome do aluno para buscar: ");
        scanf("%14s", nome_busca);
        for (int i = 0; i < 3; i++) {//procura o nome do aluno
            int igual = 1;
            for (int j = 0; j < 15; j++) { //faz comparação com quantidade de letras
                if (alunos[i].nome[j] != nome_busca[j]) {
                    igual = 0;
                    break;
                }
            }
            if (igual) {
                printf("Aluno encontrado:\n");
                printf("Nome: %s\n", alunos[i].nome);
                printf("Média: %.2f\n", alunos[i].media);
                encontrado = 1;
                break;
            }
        }


        if (!encontrado) {
            printf("Aluno não encontrado.\n");
        }
        printf("Deseja buscar outro aluno? (s/n): ");//pergunta se querem procurar outro aluno
        scanf(" %c", &opcao);
    } while (opcao == 'sim' || opcao == 'SIM');

    return 0;
}