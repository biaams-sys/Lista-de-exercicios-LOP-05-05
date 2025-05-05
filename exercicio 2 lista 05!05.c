#include <stdio.h>

int main(){
    float numero1, numero2;//declara as variaveis que serão usadas, serão apenas números
    
    printf("Digite 2 números:\n");
    scanf("%f" "%f", &numero1, &numero2);
    if(numero1 > numero2){// a condição verdadeira é para declarar se o numero 1 maior que o 2
        printf("O número %2.f é maior que %2.f", numero1, numero2);
    }
    else // a codição falsa declara que o numero 2 é maior que o numero 1
    {
        printf("O número %2.f é maior que %2.f", numero2, numero1);
    }
    return 0;
}