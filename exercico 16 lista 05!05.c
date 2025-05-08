#include <stdio.h>

typedef struct { // Define as características do produto
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto produtos[5]; // Declara um array de 5 produtos

    // Cadastro dos produtos
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do produto %d:\n", i + 1);

        printf("Nome: ");
        scanf("%49s", produtos[i].nome); // Lê o nome de forma segura limita o numero de letras

        printf("Preço: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("\n");
    }

    printf("Totais dos produtos:\n");
    for (int i = 0; i < 5; i++) {
        float total = produtos[i].preco * produtos[i].quantidade; // aqui é calculado  o total
        printf("Produto: %s, Total: %.2f\n", produtos[i].nome, total); // coloca duas 2 casas decimais no numero, como 2.0
    }

    return 0;
}
