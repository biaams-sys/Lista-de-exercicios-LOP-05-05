#include <stdio.h>

int main() {
    int opcao, numero, contador;

    do {// esse será o lugar que os passos que serão repetidos 
        printf("\nTabuada\n");//parte do menu
        printf("1- Digitar um número para ver a tabuada\n");//opção do menu
        printf("2- Sair\n");// opção do menu
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {// ele usa a variavel para a opção escolhida
            case 1://caso ele escolha a opção 1 acontecerá a seguinte  sequência
                printf("Digite um número: ");
                scanf("%d", &numero);
                printf("\nTabuada do %d:\n", numero);
                for (contador = 1; contador <= 10; contador++) {
                    printf("%d x %d = %d\n", numero, contador, numero * contador);
                }
                break;
            case 2://caso ele escolha a opção 2
                printf("Até logo!\n");
                break;
            default://depois do printf ele volta para o começo do laço
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);//enquanto ele for verdadeiro ele reprete o laço até ser falso

    return 0;
}

    