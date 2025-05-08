#include <stdio.h>

int main() {
    int numeros[5];  
    int i;

    printf("Digite 5 numeros inteiros:\n");

    for (i = 0; i < 5; i++) { //é usado para determinar a quantidade de numeros que poderão ser digitados e armazenados
        scanf("%d", &numeros[i]);  
    }
    printf("Números na ordem inversa:\n");
    for (i = 4; i >= 0; i--) {   //aqui é onde os numeros digitados vão ser colocados na ordem inversa
        printf("%d ", numeros[i]);  
    }
    return 0;
}