#include <stdio.h>

void parametro(int numero){
    for(int i = 1; i <= numero; numero--){
        printf("%d ", numero);
    }
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    parametro(numero);
}