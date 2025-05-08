#include <stdio.h>

int main() {
    int numeros[10];
    int maior, menor;

    
    for (int i = 0; i < 10; i++) {//aqui é a ordens que o numeros tem que seguir para serem armazenados, tipo ter somente 10 numeros
    printf("Digite um número %d: ", i + 1);
    scanf("%d", &numeros[i]);
    
    if (i == 0) {       
    maior = numeros[i];
    menor = numeros[i];
    } else {  //aqui adiciona as condições dos numeros para sabermos qualé maior e o menor
    if (numeros[i] > maior) {
    maior = numeros[i];
     }
    if (numeros[i] < menor) {
    menor = numeros[i];
    }
    }
    }

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}

