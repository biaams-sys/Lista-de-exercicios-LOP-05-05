#include <stdio.h>

int main() {

    int menu, n1, n2;
    float res;

    do {//apresenta as opções que o usuario pode solicitar
        printf("\n Escolha uma opção \n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Sair\n");
        scanf("%d", &menu);

        switch (menu) { //mostra o resultado da escolha do menu
            case 1://mostra o resultado caso a pessoa escolha a soma
                
                printf("\nFoi escolhido a soma.\n");
                printf("Digite o primeiro número: ");
                scanf("%d", &n1);
                printf("Digite o segundo número: ");
                scanf("%d", &n2);
                res = n1 + n2;//faz a soma
                printf("Resultado: %.2f\n", res);
                break;

            case 2://mostra caso a pessoa escolha subtração
               
                printf("\nFoi escolhido subtração.\n");
                printf("Digite o primeiro número: ");
                scanf("%d", &n1);
                printf("Digite o segundo número: ");
                scanf("%d", &n2);
                res = n1 - n2;//faz a subtração
                printf("Resultado: %.2f\n", res);
                break;

            case 3://mostra caso a pessoa escolha sair do sistema
                
                printf("\nVolte sempre!\n");
                break;//sai do do e do switch

            default://caso a pessoa nao coloque nenhuma das opções dentro do menu
               
                printf("\nOpção inválida!\n");
        }

    } while (menu != 3); //caso a pessoa errar o numero do menu, vai voltar para o começo do menu

    return 0;
}