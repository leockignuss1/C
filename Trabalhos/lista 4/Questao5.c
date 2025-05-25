#include <stdio.h>

void calculoN(int numero){
    int i, soma = 0;
    for(i = 1; i <= numero; i++){
        soma += i;
    }
    printf("%d", soma);
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    calculoN(numero);
}   