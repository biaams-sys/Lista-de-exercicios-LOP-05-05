#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0;

    for (int i = 0; i < 10; i++) { //aqui é onde determina a quantidade numeros que poderão ser digitados
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    if (numeros [i] % 2 == 0) { //aqui é a condição para saber se o numero é par
            pares++;
        }
    }

    printf("\nEsse é o total dos numeros pares: %d\n", pares);

    return 0;
}

