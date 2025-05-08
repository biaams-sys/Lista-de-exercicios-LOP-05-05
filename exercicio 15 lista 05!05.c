#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main () {
   struct Pessoa pessoa1 = {"Emerson", 12, 1.60};//esse struct serve para criar uma variavel da caracteristicas pedidas
   
   printf("nome;%s\n", pessoa1.nome);
   printf("idade:%d\n", pessoa1.idade);
   printf("altura; %.2f\n", pessoa1.altura);
   
   return 0;
}