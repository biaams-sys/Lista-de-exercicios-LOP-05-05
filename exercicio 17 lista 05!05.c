#include <stdio.h>

// Define a estrutura Pessoa com outras variaveis
typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa pessoa1, pessoa2;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    scanf("%s", pessoa1.nome);
    printf("Idade: ");
    scanf("%d", &pessoa1.idade);


    printf("\nDados da segunda pessoa:\n");
    printf("Nome: ");
    scanf("%s", pessoa2.nome);
    printf("Idade: ");
    scanf("%d", &pessoa2.idade);


    if (pessoa1.idade > pessoa2.idade) {
        printf("\n%s é mais velho(a) do que %s.\n", pessoa1.nome, pessoa2.nome);
    } else if (pessoa2.idade > pessoa1.idade) {
        printf("\n%s é mais velho(a) do que %s.\n", pessoa2.nome, pessoa1.nome);
    } else {
        printf("\n%s e %s têm a mesma idade.\n", pessoa1.nome, pessoa2.nome);
    }

    return 0;
}