#include <stdio.h>

int main() {
    char operador;// é usado para caracteres com letras
    int num1, num2, resultado;

    printf("Digite dois números inteiros e um operador no meio: ");
    scanf("%d %c %d", &num1, &operador, &num2);

    switch (operador) {// é usado para abrir uma aba com casos de acordo com a informação da variavel inserida
        case '+'://nesse case o usuario escolheu a soma
            resultado = num1 + num2;//a conta é resolvida
            printf("%d + %d = %d\n", num1, num2, resultado);// apresenta o resultado da conta
            break;// depois do case funcionar ele dá uma pausa e vai para o final
        case '-':
            resultado = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultado);
            break;
        case '/':
                resultado = num1 / num2; 
                printf("%d / %d = %d\n", num1, num2, resultado);
            }

    return 0;
}