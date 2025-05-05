#include <stdio.h>

int main(){
    float idade;
    
    printf("Digite a sua idade:\n");
    scanf("%f", &idade);
    
    if(idade<18 && idade>=16||idade>69){//a condição diz que uma pessoa com idade entre 16 e 17 e maior de 69 não é obrigada a votar
        printf("Seu voto não é obrigatório.\n");
    }
    else if (idade<16){// a condição diz que uma pessoa com menos de 16 anos não vota
        printf("Você não vota.\n");
    }
    else {// condição final onde a pessoa tem seu voto obrigatório depois de passar por todas as condições e não cumprir nenhuma
        printf("Seu voto é obrigatório.\n");
    }
    return 0;
}