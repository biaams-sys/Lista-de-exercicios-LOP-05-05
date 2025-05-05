#include <stdio.h>// biblioteca

int main(){
    int numero;//informa uma váriavel
    
    printf("Digite um número:");// é usado para declarar a primeira informação
    scanf("%d", &numero);// é usado para guardar a informação que o cliente disse como a variavel
    if (numero % 2 == 0){// é usado para dar uma condição a informação do cliente
        printf("O número %d é par", numero);// caso a condição for verdadeira essa declaração funcionará
    } else{// é usado caso a condição não for verdadeira
        printf("O número %d é impar", numero);// o caso falso dará essa declaração
    }
    return 0;//acaba o codigo depois da ultima declaração
}