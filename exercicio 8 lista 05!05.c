#include <stdio.h>

int main(){
    int i, resultado=0;
    for (i=1; i<=200; i++){//o for diz uma condição que os numeros tem que seguir
        if(i%2==0){//caso ele seguir a condição ele é guardado e somado aos outros numeros
            resultado= resultado+i;
        }
    }
     printf ("A soma dos primeiros 100 números pares é %d", resultado);
    return 0;
}