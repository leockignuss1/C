#include <stdio.h>
#define TAM 3

int calcularElementos(int vet1[TAM][TAM]){
    int i, j, soma = 0;

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            if(i != j && i + j != TAM - 1){
                soma += vet1[i][j];
            }      
        }
    }
    return soma;
}

int main(){
    int i, j, vet1[TAM][TAM];

    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("Defina um numero para a posicao [%d %d]: ", i+1, j+1);
            scanf("%d", &vet1[i][j]);
        }
    }
int soma = calcularElementos(vet1);
printf("Soma: %d", soma);

}