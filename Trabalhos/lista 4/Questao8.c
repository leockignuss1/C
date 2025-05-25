#include <stdio.h>

void calculoDivisor(int numero){
    int divisor, i;
        for(i = 1; i <= numero; i++){
            if(numero % i == 0){
                printf("%d ", i);
                divisor++;
            }
        }
        printf("\nQuantidade de divisores: %d", divisor);
}

int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    calculoDivisor(numero);
}