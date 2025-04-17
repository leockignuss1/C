#include <stdio.h>

int main(){

    int numero, i, quantidade_div;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("é possivel dividir %d por: ", numero);
    for(i = 1; i <= numero; i++){

        if(numero % i == 0){
            printf("%d, ", i);
            quantidade_div++;
        }

    }

    printf("\nQuantidade de divisores: %d", quantidade_div);

    return 0;
}