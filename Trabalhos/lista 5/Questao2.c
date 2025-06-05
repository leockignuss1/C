#include <stdio.h>
#define QUANTIDADE 11

void leitor(int vet[QUANTIDADE], int numero){
    int i, count = 0;
    for(i = 0; i < QUANTIDADE - 1; i++){
        if(vet[i] == numero){
            count++;
        }
    }
    printf("Quantidade que o %d se repetiu: %d", numero, count);
}



int main(){
    int i, vet[QUANTIDADE], numero;

    for(i = 0; i < QUANTIDADE - 1; i++){
        printf("\nDigite um numero para a posicao %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("Digite o ultimo numero que sera lido nos anteriores: ");
    scanf("%d", &vet[QUANTIDADE - 1]);

    numero = vet[QUANTIDADE - 1];

    leitor(vet, numero);



}