#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0, media;

    for (int i = 0; i < 10; i++) {  //utilizei o for para ele fazer as repetições - 10 -
        printf("digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10; //soma da média
    printf("\nMédia das notas: %.2f\n", media);

    return 0;
}