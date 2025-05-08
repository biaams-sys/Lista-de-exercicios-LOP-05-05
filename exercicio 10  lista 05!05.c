#include<stdio.h>

int fat, n;
int main()
{
	printf("Digite um número para ter o seu fatorial");
  scanf("%d", &n) ;
  for(fat = 1; n > 1; n = n - 1)//aqui é colocado as informações para achar o fatorial, como sempre inicia no 1
  {//o loop continua até o numero ser maior que 1 e toda vez que fizer uma conta o numero é adicionada 1
      fat = fat * n;//aqui acontece a conta, onde o numero vai sendo muiltiplicado pelo numeros positivos e menores que ele até ser o ultimo número menor que o declarado
  }

  printf("\nO fatorial é %d", fat);
  return 0;
}