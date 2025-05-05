#include <stdio.h>

int main(){
    int nota1, nota2, media;
    
    printf("Digite a sua primeira nota:\n");//aqui é para digitar a primeria variavel
    scanf("%d", &nota1);//guardar a informação digitada
    
    printf("Digite a segunda nota:\n");//aqui é para digitar a segunda variavel
    scanf("%d", &nota2);//guardar a informação digitada
    
    media = (nota1 + nota2)/2;// pegar as duas informações, soma-lás, dividir por 2 e depois colocar o resultado dentro da variavel média
    
    if(media>=7){//caso a media der um numero maior ou igual a 7 ele declarará o printf 
        printf("Você está de aprovado");
    }
    else{//caso a media for menor ele declarará o printf de reprovado
        printf("Você está reprovado");
    }
    return 0;//conclui o codigo
}